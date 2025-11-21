#include "ProjectileBase.h"
#include "NiagaraFunctionLibrary.h"
#include "CombatProject/Enemy/Enemy.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/OverlapResult.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"

AProjectileBase::AProjectileBase()
{
	PrimaryActorTick.bCanEverTick = false;

	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComp"));
	CollisionComp->InitSphereRadius(15.f);
	CollisionComp->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	CollisionComp->SetSimulatePhysics(false);
	CollisionComp->SetNotifyRigidBodyCollision(true);
	CollisionComp->OnComponentHit.AddDynamic(this, &AProjectileBase::OnHit);
	RootComponent = CollisionComp;

	ThrowableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ThrowableMesh"));
	ThrowableMesh->SetupAttachment(CollisionComp);
	ThrowableMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->SetUpdatedComponent(CollisionComp);
	ProjectileMovement->InitialSpeed = 2000.f;
	ProjectileMovement->MaxSpeed = 2000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 1.0f;

	InitialLifeSpan = 10.f;
}

void AProjectileBase::BeginPlay()
{
	Super::BeginPlay();

	if (bIsProjectileThrowable && !bIsAxe)
	{
		GetWorldTimerManager().SetTimer(FuseTimerHandle, this, &AProjectileBase::Explode, ExplosionTime, false);
	}
}

void AProjectileBase::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (!OtherActor || OtherActor == GetOwner()) return;

	if (bIsAxe)
	{
		// Stick logic for thrown axe
		UGameplayStatics::ApplyPointDamage(OtherActor, Damage, GetVelocity().GetSafeNormal(),
			Hit, GetInstigatorController(), this, DamageType);

		if (ImpactEffect)
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ImpactEffect, Hit.ImpactPoint);

		if (ImpactSFX)
			UGameplayStatics::PlaySoundAtLocation(this, ImpactSFX, GetActorLocation());

		StickIntoTarget(OtherComp, Hit);
		return;
	}

	if (bIsProjectileThrowable)
	{
		if (ProjectileMovement && ProjectileMovement->IsActive())
		{
			ProjectileMovement->StopMovementImmediately();
			ProjectileMovement->Deactivate();
		}

		if (CollisionComp && !CollisionComp->IsSimulatingPhysics())
		{
			CollisionComp->SetSimulatePhysics(true);
			CollisionComp->SetPhysicsLinearVelocity(GetVelocity() * 0.5f);
		}
	}
	else
	{
		UGameplayStatics::ApplyDamage(OtherActor, Damage, GetInstigatorController(), this, DamageType);

		if (ImpactEffect)
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ImpactEffect, GetActorLocation());

		if (ImpactSFX)
			UGameplayStatics::PlaySoundAtLocation(this, ImpactSFX, GetActorLocation());

		Destroy();
	}
}

void AProjectileBase::StickIntoTarget(UPrimitiveComponent* HitComponent, const FHitResult& Hit)
{
	if (!HitComponent) return;

	if (ProjectileMovement)
	{
		ProjectileMovement->StopMovementImmediately();
		ProjectileMovement->Deactivate();
	}

	CollisionComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CollisionComp->SetSimulatePhysics(false);

	// Attach to skeletal mesh bone if available
	if (USkeletalMeshComponent* SkelComp = Cast<USkeletalMeshComponent>(HitComponent))
	{
		FName BoneName = Hit.BoneName;
		if (BoneName.IsNone())
		{
			BoneName = TEXT("head"); // fallback
		}
		AttachToComponent(SkelComp, FAttachmentTransformRules::KeepWorldTransform, BoneName);
	}
	else
	{
		AttachToComponent(HitComponent, FAttachmentTransformRules::KeepWorldTransform);
	}
}

void AProjectileBase::Explode()
{
	FVector ExplosionLocation = GetActorLocation();
	TArray<FOverlapResult> Overlaps;
	FCollisionShape Sphere = FCollisionShape::MakeSphere(ExplosionRadius);
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(GetOwner());

	TArray<AActor*> HitEnemies;

	bool bHit = GetWorld()->OverlapMultiByChannel(
		Overlaps,
		ExplosionLocation,
		FQuat::Identity,
		ECC_Pawn,
		Sphere,
		Params
	);

	if (!bIsForCoin && bHit)
	{
		for (const FOverlapResult& Result : Overlaps)
		{
			AActor* HitActor = Result.GetActor();
			if (AEnemy* Enemy = Cast<AEnemy>(HitActor))
			{
				FVector Dir = (Enemy->GetActorLocation() - ExplosionLocation).GetSafeNormal();
				Enemy->LaunchCharacter(Dir * 400.f + FVector(0, 0, 200.f), true, true);
				Enemy->HandleDeath(ExplosionLocation);
			}
		}
	}

	ExplodeBP(HitEnemies);
}
