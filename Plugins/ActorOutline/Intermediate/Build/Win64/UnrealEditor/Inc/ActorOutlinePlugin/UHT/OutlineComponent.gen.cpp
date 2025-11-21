// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorOutlinePlugin/Public/OutlineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutlineComponent() {}

// Begin Cross Module References
ACTOROUTLINEPLUGIN_API UClass* Z_Construct_UClass_UOutlineComponent();
ACTOROUTLINEPLUGIN_API UClass* Z_Construct_UClass_UOutlineComponent_NoRegister();
ACTOROUTLINEPLUGIN_API UEnum* Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor();
ACTOROUTLINEPLUGIN_API UEnum* Z_Construct_UEnum_ActorOutlinePlugin_EOutlineGroup();
ACTOROUTLINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineChanged__DelegateSignature();
ACTOROUTLINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineDurationFinished__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_ActorOutlinePlugin();
// End Cross Module References

// Begin Enum EOutlineColor
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOutlineColor;
static UEnum* EOutlineColor_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOutlineColor.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOutlineColor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor, (UObject*)Z_Construct_UPackage__Script_ActorOutlinePlugin(), TEXT("EOutlineColor"));
	}
	return Z_Registration_Info_UEnum_EOutlineColor.OuterSingleton;
}
template<> ACTOROUTLINEPLUGIN_API UEnum* StaticEnum<EOutlineColor>()
{
	return EOutlineColor_StaticEnum();
}
struct Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Blue.DisplayName", "Blue" },
		{ "Blue.Name", "EOutlineColor::Blue" },
		{ "Blue.ToolTip", "" },
		{ "BlueprintType", "true" },
		{ "Category", "Outline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Color options for outlines. None means No Outline. */" },
#endif
		{ "DisplayName", "Outline Color" },
		{ "Green.DisplayName", "Green" },
		{ "Green.Name", "EOutlineColor::Green" },
		{ "Green.ToolTip", "" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EOutlineColor::None" },
		{ "None.ToolTip", "Do not show an outline." },
		{ "Red.DisplayName", "Red" },
		{ "Red.Name", "EOutlineColor::Red" },
		{ "Red.ToolTip", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color options for outlines. None means No Outline." },
#endif
		{ "White.DisplayName", "White" },
		{ "White.Name", "EOutlineColor::White" },
		{ "White.ToolTip", "" },
		{ "Yellow.DisplayName", "Yellow" },
		{ "Yellow.Name", "EOutlineColor::Yellow" },
		{ "Yellow.ToolTip", "" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOutlineColor::None", (int64)EOutlineColor::None },
		{ "EOutlineColor::Blue", (int64)EOutlineColor::Blue },
		{ "EOutlineColor::Green", (int64)EOutlineColor::Green },
		{ "EOutlineColor::Red", (int64)EOutlineColor::Red },
		{ "EOutlineColor::White", (int64)EOutlineColor::White },
		{ "EOutlineColor::Yellow", (int64)EOutlineColor::Yellow },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ActorOutlinePlugin,
	nullptr,
	"EOutlineColor",
	"EOutlineColor",
	Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor()
{
	if (!Z_Registration_Info_UEnum_EOutlineColor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOutlineColor.InnerSingleton, Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOutlineColor.InnerSingleton;
}
// End Enum EOutlineColor

// Begin Enum EOutlineGroup
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOutlineGroup;
static UEnum* EOutlineGroup_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOutlineGroup.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOutlineGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ActorOutlinePlugin_EOutlineGroup, (UObject*)Z_Construct_UPackage__Script_ActorOutlinePlugin(), TEXT("EOutlineGroup"));
	}
	return Z_Registration_Info_UEnum_EOutlineGroup.OuterSingleton;
}
template<> ACTOROUTLINEPLUGIN_API UEnum* StaticEnum<EOutlineGroup>()
{
	return EOutlineGroup_StaticEnum();
}
struct Z_Construct_UEnum_ActorOutlinePlugin_EOutlineGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Outline groups useful for filtering and processing. */" },
#endif
		{ "Enemy.DisplayName", "Enemy" },
		{ "Enemy.Name", "EOutlineGroup::Enemy" },
		{ "Enemy.ToolTip", "" },
		{ "Interaction.DisplayName", "Interaction" },
		{ "Interaction.Name", "EOutlineGroup::Interaction" },
		{ "Interaction.ToolTip", "" },
		{ "Loot.DisplayName", "Loot" },
		{ "Loot.Name", "EOutlineGroup::Loot" },
		{ "Loot.ToolTip", "" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EOutlineGroup::None" },
		{ "None.ToolTip", "" },
		{ "Team.DisplayName", "Team" },
		{ "Team.Name", "EOutlineGroup::Team" },
		{ "Team.ToolTip", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Outline groups useful for filtering and processing." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOutlineGroup::None", (int64)EOutlineGroup::None },
		{ "EOutlineGroup::Team", (int64)EOutlineGroup::Team },
		{ "EOutlineGroup::Enemy", (int64)EOutlineGroup::Enemy },
		{ "EOutlineGroup::Loot", (int64)EOutlineGroup::Loot },
		{ "EOutlineGroup::Interaction", (int64)EOutlineGroup::Interaction },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ActorOutlinePlugin_EOutlineGroup_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ActorOutlinePlugin,
	nullptr,
	"EOutlineGroup",
	"EOutlineGroup",
	Z_Construct_UEnum_ActorOutlinePlugin_EOutlineGroup_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ActorOutlinePlugin_EOutlineGroup_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ActorOutlinePlugin_EOutlineGroup_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ActorOutlinePlugin_EOutlineGroup_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ActorOutlinePlugin_EOutlineGroup()
{
	if (!Z_Registration_Info_UEnum_EOutlineGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOutlineGroup.InnerSingleton, Z_Construct_UEnum_ActorOutlinePlugin_EOutlineGroup_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOutlineGroup.InnerSingleton;
}
// End Enum EOutlineGroup

// Begin Delegate FOnOutlineChanged
struct Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** DELEGATES */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DELEGATES" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutlineComponent, nullptr, "OnOutlineChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UOutlineComponent::FOnOutlineChanged_DelegateWrapper(const FMulticastScriptDelegate& OnOutlineChanged)
{
	OnOutlineChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnOutlineChanged

// Begin Delegate FOnOutlineDurationFinished
struct Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineDurationFinished__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineDurationFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutlineComponent, nullptr, "OnOutlineDurationFinished__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineDurationFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineDurationFinished__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineDurationFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineDurationFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UOutlineComponent::FOnOutlineDurationFinished_DelegateWrapper(const FMulticastScriptDelegate& OnOutlineDurationFinished)
{
	OnOutlineDurationFinished.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnOutlineDurationFinished

// Begin Class UOutlineComponent Function CancelOutlineDuration
struct Z_Construct_UFunction_UOutlineComponent_CancelOutlineDuration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Outline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clears the outline duration timer from SetOutlineWithDuration. */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears the outline duration timer from SetOutlineWithDuration." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutlineComponent_CancelOutlineDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutlineComponent, nullptr, "CancelOutlineDuration", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_CancelOutlineDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOutlineComponent_CancelOutlineDuration_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOutlineComponent_CancelOutlineDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOutlineComponent_CancelOutlineDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOutlineComponent::execCancelOutlineDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelOutlineDuration();
	P_NATIVE_END;
}
// End Class UOutlineComponent Function CancelOutlineDuration

// Begin Class UOutlineComponent Function GetOutlineColor
struct Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics
{
	struct OutlineComponent_eventGetOutlineColor_Parms
	{
		EOutlineColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Outline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get's the current outline color. */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get's the current outline color." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventGetOutlineColor_Parms, ReturnValue), Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor, METADATA_PARAMS(0, nullptr) }; // 926616992
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutlineComponent, nullptr, "GetOutlineColor", nullptr, nullptr, Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::OutlineComponent_eventGetOutlineColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::OutlineComponent_eventGetOutlineColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_GetOutlineColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOutlineComponent::execGetOutlineColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOutlineColor*)Z_Param__Result=P_THIS->GetOutlineColor();
	P_NATIVE_END;
}
// End Class UOutlineComponent Function GetOutlineColor

// Begin Class UOutlineComponent Function HideOutline
struct Z_Construct_UFunction_UOutlineComponent_HideOutline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Outline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hide the current outline. */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hide the current outline." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutlineComponent_HideOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutlineComponent, nullptr, "HideOutline", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_HideOutline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOutlineComponent_HideOutline_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOutlineComponent_HideOutline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOutlineComponent_HideOutline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOutlineComponent::execHideOutline)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideOutline();
	P_NATIVE_END;
}
// End Class UOutlineComponent Function HideOutline

// Begin Class UOutlineComponent Function Lock
struct Z_Construct_UFunction_UOutlineComponent_Lock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Outline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prevents the outline from being changed. */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prevents the outline from being changed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutlineComponent_Lock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutlineComponent, nullptr, "Lock", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_Lock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOutlineComponent_Lock_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOutlineComponent_Lock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOutlineComponent_Lock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOutlineComponent::execLock)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Lock();
	P_NATIVE_END;
}
// End Class UOutlineComponent Function Lock

// Begin Class UOutlineComponent Function OnRep_OutlineColor
struct Z_Construct_UFunction_UOutlineComponent_OnRep_OutlineColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** OutlineColor replicated callback. */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OutlineColor replicated callback." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutlineComponent_OnRep_OutlineColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutlineComponent, nullptr, "OnRep_OutlineColor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_OnRep_OutlineColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOutlineComponent_OnRep_OutlineColor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOutlineComponent_OnRep_OutlineColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOutlineComponent_OnRep_OutlineColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOutlineComponent::execOnRep_OutlineColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_OutlineColor();
	P_NATIVE_END;
}
// End Class UOutlineComponent Function OnRep_OutlineColor

// Begin Class UOutlineComponent Function ReceiveOutlineColorUpdated
static const FName NAME_UOutlineComponent_ReceiveOutlineColorUpdated = FName(TEXT("ReceiveOutlineColorUpdated"));
void UOutlineComponent::ReceiveOutlineColorUpdated()
{
	UFunction* Func = FindFunctionChecked(NAME_UOutlineComponent_ReceiveOutlineColorUpdated);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UOutlineComponent_ReceiveOutlineColorUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the outline color has been updated. Usually at the beginning or after replication. */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the outline color has been updated. Usually at the beginning or after replication." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutlineComponent_ReceiveOutlineColorUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutlineComponent, nullptr, "ReceiveOutlineColorUpdated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_ReceiveOutlineColorUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOutlineComponent_ReceiveOutlineColorUpdated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOutlineComponent_ReceiveOutlineColorUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOutlineComponent_ReceiveOutlineColorUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UOutlineComponent Function ReceiveOutlineColorUpdated

// Begin Class UOutlineComponent Function SetOutline
struct Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics
{
	struct OutlineComponent_eventSetOutline_Parms
	{
		EOutlineColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Outline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set's the active outline color. */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set's the active outline color." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewColor_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::NewProp_NewColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventSetOutline_Parms, NewColor), Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewColor_MetaData), NewProp_NewColor_MetaData) }; // 926616992
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::NewProp_NewColor_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutlineComponent, nullptr, "SetOutline", nullptr, nullptr, Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::OutlineComponent_eventSetOutline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::OutlineComponent_eventSetOutline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_SetOutline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOutlineComponent::execSetOutline)
{
	P_GET_ENUM(EOutlineColor,Z_Param_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOutline(EOutlineColor(Z_Param_NewColor));
	P_NATIVE_END;
}
// End Class UOutlineComponent Function SetOutline

// Begin Class UOutlineComponent Function SetOutlineWithDuration
struct Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics
{
	struct OutlineComponent_eventSetOutlineWithDuration_Parms
	{
		EOutlineColor InitialColor;
		EOutlineColor FinalColor;
		float Seconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Outline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set's the active outline color initially then changes it after an amount of time. */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set's the active outline color initially then changes it after an amount of time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialColor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalColor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitialColor_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FinalColor_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FinalColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_InitialColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_InitialColor = { "InitialColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventSetOutlineWithDuration_Parms, InitialColor), Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialColor_MetaData), NewProp_InitialColor_MetaData) }; // 926616992
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_FinalColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_FinalColor = { "FinalColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventSetOutlineWithDuration_Parms, FinalColor), Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalColor_MetaData), NewProp_FinalColor_MetaData) }; // 926616992
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventSetOutlineWithDuration_Parms, Seconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seconds_MetaData), NewProp_Seconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_InitialColor_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_InitialColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_FinalColor_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_FinalColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_Seconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutlineComponent, nullptr, "SetOutlineWithDuration", nullptr, nullptr, Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::OutlineComponent_eventSetOutlineWithDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::OutlineComponent_eventSetOutlineWithDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOutlineComponent::execSetOutlineWithDuration)
{
	P_GET_ENUM(EOutlineColor,Z_Param_InitialColor);
	P_GET_ENUM(EOutlineColor,Z_Param_FinalColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Seconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOutlineWithDuration(EOutlineColor(Z_Param_InitialColor),EOutlineColor(Z_Param_FinalColor),Z_Param_Seconds);
	P_NATIVE_END;
}
// End Class UOutlineComponent Function SetOutlineWithDuration

// Begin Class UOutlineComponent Function ShowOutline
struct Z_Construct_UFunction_UOutlineComponent_ShowOutline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Outline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Show the initial or previously used outline. */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show the initial or previously used outline." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutlineComponent_ShowOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutlineComponent, nullptr, "ShowOutline", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_ShowOutline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOutlineComponent_ShowOutline_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOutlineComponent_ShowOutline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOutlineComponent_ShowOutline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOutlineComponent::execShowOutline)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowOutline();
	P_NATIVE_END;
}
// End Class UOutlineComponent Function ShowOutline

// Begin Class UOutlineComponent Function Unlock
struct Z_Construct_UFunction_UOutlineComponent_Unlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Outline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allows the outline to be changed. */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows the outline to be changed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutlineComponent_Unlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutlineComponent, nullptr, "Unlock", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_Unlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOutlineComponent_Unlock_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOutlineComponent_Unlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOutlineComponent_Unlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOutlineComponent::execUnlock)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Unlock();
	P_NATIVE_END;
}
// End Class UOutlineComponent Function Unlock

// Begin Class UOutlineComponent
void UOutlineComponent::StaticRegisterNativesUOutlineComponent()
{
	UClass* Class = UOutlineComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelOutlineDuration", &UOutlineComponent::execCancelOutlineDuration },
		{ "GetOutlineColor", &UOutlineComponent::execGetOutlineColor },
		{ "HideOutline", &UOutlineComponent::execHideOutline },
		{ "Lock", &UOutlineComponent::execLock },
		{ "OnRep_OutlineColor", &UOutlineComponent::execOnRep_OutlineColor },
		{ "SetOutline", &UOutlineComponent::execSetOutline },
		{ "SetOutlineWithDuration", &UOutlineComponent::execSetOutlineWithDuration },
		{ "ShowOutline", &UOutlineComponent::execShowOutline },
		{ "Unlock", &UOutlineComponent::execUnlock },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOutlineComponent);
UClass* Z_Construct_UClass_UOutlineComponent_NoRegister()
{
	return UOutlineComponent::StaticClass();
}
struct Z_Construct_UClass_UOutlineComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A component for rendering an outline effect on actors. */" },
#endif
		{ "IncludePath", "OutlineComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A component for rendering an outline effect on actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineColor_MetaData[] = {
		{ "Category", "Outline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The current outline color. */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current outline color." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineGroup_MetaData[] = {
		{ "Category", "Outline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A group useful for filtering and processing. */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A group useful for filtering and processing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[] = {
		{ "Category", "Outline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Determines if the outline can be changed. */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines if the outline can be changed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StencilIndices_MetaData[] = {
		{ "Category", "Outline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index values of each outline color for the custom depth value. */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index values of each outline color for the custom depth value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOutlineChanged_MetaData[] = {
		{ "Category", "Outline|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate called when the outline has been changed. */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate called when the outline has been changed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOutlineDurationFinished_MetaData[] = {
		{ "Category", "Outline|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate called when the duration from SetOutlineFromDuration has ended. */" },
#endif
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate called when the duration from SetOutlineFromDuration has ended." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutlineColor_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutlineColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutlineGroup_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutlineGroup;
	static void NewProp_bLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StencilIndices_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StencilIndices_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StencilIndices_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StencilIndices;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOutlineChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOutlineDurationFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOutlineComponent_CancelOutlineDuration, "CancelOutlineDuration" }, // 4083296555
		{ &Z_Construct_UFunction_UOutlineComponent_GetOutlineColor, "GetOutlineColor" }, // 2094603484
		{ &Z_Construct_UFunction_UOutlineComponent_HideOutline, "HideOutline" }, // 3281613841
		{ &Z_Construct_UFunction_UOutlineComponent_Lock, "Lock" }, // 2896195776
		{ &Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineChanged__DelegateSignature, "OnOutlineChanged__DelegateSignature" }, // 3376567909
		{ &Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineDurationFinished__DelegateSignature, "OnOutlineDurationFinished__DelegateSignature" }, // 2748054569
		{ &Z_Construct_UFunction_UOutlineComponent_OnRep_OutlineColor, "OnRep_OutlineColor" }, // 1661107435
		{ &Z_Construct_UFunction_UOutlineComponent_ReceiveOutlineColorUpdated, "ReceiveOutlineColorUpdated" }, // 3327457125
		{ &Z_Construct_UFunction_UOutlineComponent_SetOutline, "SetOutline" }, // 3961362765
		{ &Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration, "SetOutlineWithDuration" }, // 3069550486
		{ &Z_Construct_UFunction_UOutlineComponent_ShowOutline, "ShowOutline" }, // 1704556828
		{ &Z_Construct_UFunction_UOutlineComponent_Unlock, "Unlock" }, // 259027228
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOutlineComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OutlineColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OutlineColor = { "OutlineColor", "OnRep_OutlineColor", (EPropertyFlags)0x0010000100000035, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, OutlineColor), Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineColor_MetaData), NewProp_OutlineColor_MetaData) }; // 926616992
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OutlineGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OutlineGroup = { "OutlineGroup", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, OutlineGroup), Z_Construct_UEnum_ActorOutlinePlugin_EOutlineGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineGroup_MetaData), NewProp_OutlineGroup_MetaData) }; // 3604767518
void Z_Construct_UClass_UOutlineComponent_Statics::NewProp_bLocked_SetBit(void* Obj)
{
	((UOutlineComponent*)Obj)->bLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOutlineComponent), &Z_Construct_UClass_UOutlineComponent_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocked_MetaData), NewProp_bLocked_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_StencilIndices_ValueProp = { "StencilIndices", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_StencilIndices_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_StencilIndices_Key_KeyProp = { "StencilIndices_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor, METADATA_PARAMS(0, nullptr) }; // 926616992
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_StencilIndices = { "StencilIndices", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, StencilIndices), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StencilIndices_MetaData), NewProp_StencilIndices_MetaData) }; // 926616992
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OnOutlineChanged = { "OnOutlineChanged", nullptr, (EPropertyFlags)0x00100000100b0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, OnOutlineChanged), Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOutlineChanged_MetaData), NewProp_OnOutlineChanged_MetaData) }; // 3376567909
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OnOutlineDurationFinished = { "OnOutlineDurationFinished", nullptr, (EPropertyFlags)0x00100000100b0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, OnOutlineDurationFinished), Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineDurationFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOutlineDurationFinished_MetaData), NewProp_OnOutlineDurationFinished_MetaData) }; // 2748054569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOutlineComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OutlineColor_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OutlineGroup_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OutlineGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlineComponent_Statics::NewProp_bLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlineComponent_Statics::NewProp_StencilIndices_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlineComponent_Statics::NewProp_StencilIndices_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlineComponent_Statics::NewProp_StencilIndices_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlineComponent_Statics::NewProp_StencilIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OnOutlineChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OnOutlineDurationFinished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOutlineComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOutlineComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ActorOutlinePlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOutlineComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOutlineComponent_Statics::ClassParams = {
	&UOutlineComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOutlineComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOutlineComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOutlineComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOutlineComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOutlineComponent()
{
	if (!Z_Registration_Info_UClass_UOutlineComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOutlineComponent.OuterSingleton, Z_Construct_UClass_UOutlineComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOutlineComponent.OuterSingleton;
}
template<> ACTOROUTLINEPLUGIN_API UClass* StaticClass<UOutlineComponent>()
{
	return UOutlineComponent::StaticClass();
}
void UOutlineComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_OutlineColor(TEXT("OutlineColor"));
	const bool bIsValid = true
		&& Name_OutlineColor == ClassReps[(int32)ENetFields_Private::OutlineColor].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UOutlineComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOutlineComponent);
UOutlineComponent::~UOutlineComponent() {}
// End Class UOutlineComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_GithubProjects_unreal_cpp_interaction_weapon_stealth_system_Plugins_ActorOutline_Source_ActorOutlinePlugin_Public_OutlineComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOutlineColor_StaticEnum, TEXT("EOutlineColor"), &Z_Registration_Info_UEnum_EOutlineColor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 926616992U) },
		{ EOutlineGroup_StaticEnum, TEXT("EOutlineGroup"), &Z_Registration_Info_UEnum_EOutlineGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3604767518U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOutlineComponent, UOutlineComponent::StaticClass, TEXT("UOutlineComponent"), &Z_Registration_Info_UClass_UOutlineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOutlineComponent), 2096753166U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_GithubProjects_unreal_cpp_interaction_weapon_stealth_system_Plugins_ActorOutline_Source_ActorOutlinePlugin_Public_OutlineComponent_h_3351624146(TEXT("/Script/ActorOutlinePlugin"),
	Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_GithubProjects_unreal_cpp_interaction_weapon_stealth_system_Plugins_ActorOutline_Source_ActorOutlinePlugin_Public_OutlineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_GithubProjects_unreal_cpp_interaction_weapon_stealth_system_Plugins_ActorOutline_Source_ActorOutlinePlugin_Public_OutlineComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_GithubProjects_unreal_cpp_interaction_weapon_stealth_system_Plugins_ActorOutline_Source_ActorOutlinePlugin_Public_OutlineComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_GithubProjects_unreal_cpp_interaction_weapon_stealth_system_Plugins_ActorOutline_Source_ActorOutlinePlugin_Public_OutlineComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
