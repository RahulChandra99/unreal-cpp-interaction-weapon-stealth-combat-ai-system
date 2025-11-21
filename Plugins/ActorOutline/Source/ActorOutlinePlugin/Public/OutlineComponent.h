/** Copyright 2023, GoldBl4d3. All rights reserved. */

#pragma once


#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OutlineComponent.generated.h"


/** Color options for outlines. None means No Outline. */
UENUM(BlueprintType, Category="Outline", DisplayName="Outline Color")
enum class EOutlineColor : uint8
{
	None		UMETA(DisplayName = "None", ToolTip = "Do not show an outline."),
	Blue		UMETA(DisplayName = "Blue", ToolTip = ""),
	Green		UMETA(DisplayName = "Green", ToolTip = ""),
	Red			UMETA(DisplayName = "Red", ToolTip = ""),
	White		UMETA(DisplayName = "White", ToolTip = ""),
	Yellow		UMETA(DisplayName = "Yellow", ToolTip = ""),
};
//ENUM_RANGE_BY_FIRST_AND_LAST(EOutlineColor, EOutlineColor::None, EOutlineColor::Yellow);


/** Outline groups useful for filtering and processing. */
UENUM(BlueprintType)
enum class EOutlineGroup : uint8
{
	None			UMETA(DisplayName = "None", ToolTip = ""),
	Team			UMETA(DisplayName = "Team", ToolTip = ""),
	Enemy			UMETA(DisplayName = "Enemy", ToolTip = ""),
	Loot			UMETA(DisplayName = "Loot", ToolTip = ""),
	Interaction		UMETA(DisplayName = "Interaction", ToolTip = ""),
};
//ENUM_RANGE_BY_FIRST_AND_LAST(EOutlineGroup, EOutlineGroup::None, EOutlineGroup::Interaction);





/** A component for rendering an outline effect on actors. */
UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class ACTOROUTLINEPLUGIN_API UOutlineComponent : public UActorComponent
{
	GENERATED_BODY()
	
	/** DELEGATES */
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOutlineChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOutlineDurationFinished);
	
public:	
	UOutlineComponent();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
	EOutlineColor PreviousColor = EOutlineColor::None;
	EOutlineColor AfterDurationOutlineColor = EOutlineColor::None;
	FTimerHandle DurationTimerHandle;
	
public:
	/** The current outline color. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_OutlineColor, Category="Outline")
	EOutlineColor OutlineColor = EOutlineColor::None;

	/** A group useful for filtering and processing. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Outline")
	EOutlineGroup OutlineGroup = EOutlineGroup::None;

	/** Determines if the outline can be changed. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Outline")
	bool bLocked = false;
	
	/** Index values of each outline color for the custom depth value. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Outline")
	TMap<EOutlineColor, int32> StencilIndices {
		TPair<EOutlineColor, int32>(EOutlineColor::None, 0),
		TPair<EOutlineColor, int32>(EOutlineColor::Blue, 251),
		TPair<EOutlineColor, int32>(EOutlineColor::Green, 252),
		TPair<EOutlineColor, int32>(EOutlineColor::Red, 253),
		TPair<EOutlineColor, int32>(EOutlineColor::White, 254),
		TPair<EOutlineColor, int32>(EOutlineColor::Yellow, 255)
	};
	
	/** Delegate called when the outline has been changed. */
	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, Category="Outline|Events")
	FOnOutlineChanged OnOutlineChanged;

	/** Delegate called when the duration from SetOutlineFromDuration has ended. */
	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, Category="Outline|Events")
	FOnOutlineDurationFinished OnOutlineDurationFinished;

private:
	/** Called when the duration has ended from SetOutlineWithDuration. */
	void DurationTimerElapsed();

protected:
	/** Set's a specific depth stencil value for outlines. */
	void SetCustomDepthStencil(const bool bRenderDepth, const int StencilValue) const;
	
	/** Refreshes the current outline settings. */
	void UpdateOutline();
	
public:
	/** Get's the current outline color. */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Outline")
	EOutlineColor GetOutlineColor() const;
	
	/** Show the initial or previously used outline. */
	UFUNCTION(BlueprintCallable, Category="Outline")
	void ShowOutline();
	
	/** Hide the current outline. */
	UFUNCTION(BlueprintCallable, Category="Outline")
	void HideOutline();

	/** Clears the outline duration timer from SetOutlineWithDuration. */
	UFUNCTION(BlueprintCallable, Category="Outline")
	void CancelOutlineDuration();

	/** Prevents the outline from being changed. */
	UFUNCTION(BlueprintCallable, Category="Outline")
	void Lock();

	/** Allows the outline to be changed. */
	UFUNCTION(BlueprintCallable, Category="Outline")
	void Unlock();
	
	/** Set's the active outline color. */
	UFUNCTION(BlueprintCallable, Category="Outline")
	void SetOutline(const EOutlineColor NewColor);

	/** Set's the active outline color initially then changes it after an amount of time. */
	UFUNCTION(BlueprintCallable, Category="Outline")
	void SetOutlineWithDuration(const EOutlineColor InitialColor, const EOutlineColor FinalColor, const float Seconds);

	/** OutlineColor replicated callback. */
	UFUNCTION()
	void OnRep_OutlineColor();

	/** Called when the outline color has been updated. Usually at the beginning or after replication. */
	UFUNCTION(BlueprintImplementableEvent)
	void ReceiveOutlineColorUpdated();
};