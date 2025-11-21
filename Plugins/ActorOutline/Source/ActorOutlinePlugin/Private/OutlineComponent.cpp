/** Copyright 2023, GoldBl4d3. All rights reserved. */

#include "OutlineComponent.h"
#include "CoreMinimal.h"
#include "Net/UnrealNetwork.h"

UOutlineComponent::UOutlineComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	PrimaryComponentTick.bStartWithTickEnabled = false;
}

void UOutlineComponent::BeginPlay()
{
	Super::BeginPlay();
	PreviousColor = OutlineColor;
	UpdateOutline();
}

void UOutlineComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	GetWorld()->GetTimerManager().ClearAllTimersForObject(this);
}

void UOutlineComponent::DurationTimerElapsed()
{
	SetOutline(AfterDurationOutlineColor);
	OnOutlineDurationFinished.Broadcast();
}

void UOutlineComponent::UpdateOutline()
{
	if (OutlineColor == EOutlineColor::None)
	{
		SetCustomDepthStencil(false, 0);
	}
	else
	{
		if (StencilIndices.Contains(OutlineColor))
		{
			const int32* ValPtr = StencilIndices.Find(OutlineColor);
			SetCustomDepthStencil(true, *ValPtr);
		}
	}
	
	ReceiveOutlineColorUpdated();
}

void UOutlineComponent::SetCustomDepthStencil(const bool bRenderDepth, const int StencilValue) const
{
	TArray<UPrimitiveComponent*> primitives;
	GetOwner()->GetComponents(primitives, false);

	for (auto* prim : primitives)
	{
		prim->SetRenderCustomDepth(bRenderDepth);
		prim->SetCustomDepthStencilValue(StencilValue);
	}
}

EOutlineColor UOutlineComponent::GetOutlineColor() const
{
	return OutlineColor;
}

void UOutlineComponent::ShowOutline()
{
	SetOutline(PreviousColor);
}

void UOutlineComponent::HideOutline()
{
	SetOutline(EOutlineColor::None);
}

void UOutlineComponent::CancelOutlineDuration()
{
	GetWorld()->GetTimerManager().ClearTimer(DurationTimerHandle);
}

void UOutlineComponent::Lock()
{
	bLocked = true;
}

void UOutlineComponent::Unlock()
{
	bLocked = false;
}

void UOutlineComponent::SetOutline(const EOutlineColor NewColor)
{
	if (bLocked || GetIsReplicated() && !GetOwner()->HasAuthority())
		return;
	
	if (NewColor != EOutlineColor::None)
		PreviousColor = NewColor;

	OutlineColor = NewColor;
	UpdateOutline();
	
	OnOutlineChanged.Broadcast();
}

void UOutlineComponent::SetOutlineWithDuration(const EOutlineColor InitialColor, const EOutlineColor FinalColor, const float Seconds)
{
	if (bLocked || GetIsReplicated() && !GetOwner()->HasAuthority())
		return;

	AfterDurationOutlineColor = FinalColor;
	SetOutline(InitialColor);

	GetWorld()->GetTimerManager().ClearTimer(DurationTimerHandle);

	if (Seconds > 0.0f)
	{
		GetWorld()->GetTimerManager().SetTimer(
			DurationTimerHandle, this, &UOutlineComponent::DurationTimerElapsed, Seconds, false, -1);
	}
	else
	{
		DurationTimerElapsed();
	}
}

void UOutlineComponent::OnRep_OutlineColor()
{
	UpdateOutline();
}

void UOutlineComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UOutlineComponent, OutlineColor);
}