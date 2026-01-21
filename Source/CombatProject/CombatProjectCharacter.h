// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "AbilitySystemInterface.h"
#include "CombatProjectCharacter.generated.h"

class AProjectileBase;
class UCombatPlayerAnimInstance;
class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class UPhysicsHandleComponent;
class AEnemy;
class AWeapon;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class ACombatProjectCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ACombatProjectCharacter();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	virtual void NotifyControllerChanged() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Camera getters
	FORCEINLINE USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	// Grab
	UFUNCTION(BlueprintCallable)
	void GrabEnemy(AEnemy* EnemyRef);

	UFUNCTION(BlueprintCallable)
	void ReleaseEnemy();

	// Combat
	UFUNCTION(BlueprintCallable)
	void ThrowAxeAtTarget(AActor* Target);

	UFUNCTION(BlueprintCallable)
	void DestoryGun(AWeapon* EquippedWeapon);

	UFUNCTION(BlueprintCallable)
	void SpawnWeapon(AWeapon* EquippedWeapon);

	// Grenade
	UFUNCTION()
	void PredictGrenadePath();

	UFUNCTION(BlueprintCallable)
	void ThrowGrenade(TSubclassOf<AProjectileBase> GrenadeActor);

	// Sense
	UFUNCTION(BlueprintCallable)
	void ActivateSenseVision(bool bEnable);

	// Public variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsCrouching = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AbilitySystem")
	UAbilitySystemComponent* AbilitySystemComponent = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AbilitySystem")
	class UBasicAttributeSet* BasicAttributeSet = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Aiming")
	float AimDirection = 0.0f;

	UPROPERTY()
	TMap<FName, int32> SavedCurrentAmmoMap;

	UPROPERTY()
	TMap<FName, int32> SavedReserveAmmoMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float XLookSens = 0.7f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float YLookSens = 0.7f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AProjectileBase> AxeProjectileClass;

	UPROPERTY(EditDefaultsOnly, Category="Grenade")
	float ThrowSpeed = 1200.f;

	UPROPERTY(EditDefaultsOnly, Category="Grenade")
	float ThrowScale = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsGrenadeAiming = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ability")
	float SenseRadius = 2000000.f;

protected:
	// Input handlers
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

	// Helper
	void UpdateGrabbedLocation(float DeltaTime);

	UFUNCTION(BlueprintCallable)
	bool IsEnemyBehindTarget(AActor* TargetActor);

	UFUNCTION(BlueprintImplementableEvent)
	void CalculateAimDirection();

	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera, meta=(AllowPrivateAccess="true"))
	USpringArmComponent* CameraBoom = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera, meta=(AllowPrivateAccess="true"))
	UCameraComponent* FollowCamera = nullptr;

	// Input assets
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess="true"))
	UInputMappingContext* DefaultMappingContext = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess="true"))
	UInputAction* JumpAction = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess="true"))
	UInputAction* MoveAction = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess="true"))
	UInputAction* LookAction = nullptr;

	// Anim
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCombatPlayerAnimInstance* PlayerAnimInstance = nullptr;

	UPROPERTY(BlueprintReadWrite)
	bool bIsWheelOpen = false;

	// GAS replication
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AbilitySystem")
	EGameplayEffectReplicationMode AscReplicationMode = EGameplayEffectReplicationMode::Mixed;

	// Grab data
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Grab")
	UPhysicsHandleComponent* PhysicsHandle = nullptr;

	UPROPERTY(EditAnywhere, Category="Grab")
	float HoldDistance = 150.f;

	UPROPERTY(EditAnywhere, Category="Grab")
	FName GrabBoneName = "pelvis";

	UPROPERTY()
	USkeletalMeshComponent* GrabbedMesh = nullptr;
};
