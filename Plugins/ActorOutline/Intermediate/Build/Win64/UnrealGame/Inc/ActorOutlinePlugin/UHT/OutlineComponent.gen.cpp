// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorOutlinePlugin/Public/OutlineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutlineComponent() {}
// Cross Module References
	ACTOROUTLINEPLUGIN_API UClass* Z_Construct_UClass_UOutlineComponent();
	ACTOROUTLINEPLUGIN_API UClass* Z_Construct_UClass_UOutlineComponent_NoRegister();
	ACTOROUTLINEPLUGIN_API UEnum* Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor();
	ACTOROUTLINEPLUGIN_API UEnum* Z_Construct_UEnum_ActorOutlinePlugin_EOutlineGroup();
	ACTOROUTLINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineChanged__DelegateSignature();
	ACTOROUTLINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineDurationFinished__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ActorOutlinePlugin();
// End Cross Module References
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
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor_Statics::Enumerators[] = {
		{ "EOutlineColor::None", (int64)EOutlineColor::None },
		{ "EOutlineColor::Blue", (int64)EOutlineColor::Blue },
		{ "EOutlineColor::Green", (int64)EOutlineColor::Green },
		{ "EOutlineColor::Red", (int64)EOutlineColor::Red },
		{ "EOutlineColor::White", (int64)EOutlineColor::White },
		{ "EOutlineColor::Yellow", (int64)EOutlineColor::Yellow },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor_Statics::Enum_MetaDataParams[] = {
		{ "Blue.DisplayName", "Blue" },
		{ "Blue.Name", "EOutlineColor::Blue" },
		{ "Blue.ToolTip", "" },
		{ "BlueprintType", "true" },
		{ "Category", "Outline" },
		{ "Comment", "/** Color options for outlines. None means No Outline. */" },
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
		{ "ToolTip", "Color options for outlines. None means No Outline." },
		{ "White.DisplayName", "White" },
		{ "White.Name", "EOutlineColor::White" },
		{ "White.ToolTip", "" },
		{ "Yellow.DisplayName", "Yellow" },
		{ "Yellow.Name", "EOutlineColor::Yellow" },
		{ "Yellow.ToolTip", "" },
	};
#endif
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
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ActorOutlinePlugin_EOutlineGroup_Statics::Enumerators[] = {
		{ "EOutlineGroup::None", (int64)EOutlineGroup::None },
		{ "EOutlineGroup::Team", (int64)EOutlineGroup::Team },
		{ "EOutlineGroup::Enemy", (int64)EOutlineGroup::Enemy },
		{ "EOutlineGroup::Loot", (int64)EOutlineGroup::Loot },
		{ "EOutlineGroup::Interaction", (int64)EOutlineGroup::Interaction },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ActorOutlinePlugin_EOutlineGroup_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Outline groups useful for filtering and processing. */" },
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
		{ "ToolTip", "Outline groups useful for filtering and processing." },
	};
#endif
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
	struct Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** DELEGATES */" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ToolTip", "DELEGATES" },
	};
#endif
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
	struct Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineDurationFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineDurationFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
	};
#endif
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
	DEFINE_FUNCTION(UOutlineComponent::execOnRep_OutlineColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OutlineColor();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UOutlineComponent::execSetOutline)
	{
		P_GET_ENUM(EOutlineColor,Z_Param_NewColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutline(EOutlineColor(Z_Param_NewColor));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOutlineComponent::execUnlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOutlineComponent::execLock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Lock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOutlineComponent::execCancelOutlineDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelOutlineDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOutlineComponent::execHideOutline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideOutline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOutlineComponent::execShowOutline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowOutline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOutlineComponent::execGetOutlineColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOutlineColor*)Z_Param__Result=P_THIS->GetOutlineColor();
		P_NATIVE_END;
	}
	static FName NAME_UOutlineComponent_ReceiveOutlineColorUpdated = FName(TEXT("ReceiveOutlineColorUpdated"));
	void UOutlineComponent::ReceiveOutlineColorUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOutlineComponent_ReceiveOutlineColorUpdated),NULL);
	}
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
	struct Z_Construct_UFunction_UOutlineComponent_CancelOutlineDuration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutlineComponent_CancelOutlineDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outline" },
		{ "Comment", "/** Clears the outline duration timer from SetOutlineWithDuration. */" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ToolTip", "Clears the outline duration timer from SetOutlineWithDuration." },
	};
#endif
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
	struct Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics
	{
		struct OutlineComponent_eventGetOutlineColor_Parms
		{
			EOutlineColor ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventGetOutlineColor_Parms, ReturnValue), Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor, METADATA_PARAMS(0, nullptr) }; // 1636176557
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outline" },
		{ "Comment", "/** Get's the current outline color. */" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ToolTip", "Get's the current outline color." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutlineComponent, nullptr, "GetOutlineColor", nullptr, nullptr, Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::OutlineComponent_eventGetOutlineColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_GetOutlineColor_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UOutlineComponent_HideOutline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutlineComponent_HideOutline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outline" },
		{ "Comment", "/** Hide the current outline. */" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ToolTip", "Hide the current outline." },
	};
#endif
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
	struct Z_Construct_UFunction_UOutlineComponent_Lock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutlineComponent_Lock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outline" },
		{ "Comment", "/** Prevents the outline from being changed. */" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ToolTip", "Prevents the outline from being changed." },
	};
#endif
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
	struct Z_Construct_UFunction_UOutlineComponent_OnRep_OutlineColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutlineComponent_OnRep_OutlineColor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** OutlineColor replicated callback. */" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ToolTip", "OutlineColor replicated callback." },
	};
#endif
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
	struct Z_Construct_UFunction_UOutlineComponent_ReceiveOutlineColorUpdated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutlineComponent_ReceiveOutlineColorUpdated_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when the outline color has been updated. Usually at the beginning or after replication. */" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ToolTip", "Called when the outline color has been updated. Usually at the beginning or after replication." },
	};
#endif
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
	struct Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics
	{
		struct OutlineComponent_eventSetOutline_Parms
		{
			EOutlineColor NewColor;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewColor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::NewProp_NewColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventSetOutline_Parms, NewColor), Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::NewProp_NewColor_MetaData), Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::NewProp_NewColor_MetaData) }; // 1636176557
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::NewProp_NewColor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outline" },
		{ "Comment", "/** Set's the active outline color. */" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ToolTip", "Set's the active outline color." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutlineComponent, nullptr, "SetOutline", nullptr, nullptr, Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::OutlineComponent_eventSetOutline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_SetOutline_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics
	{
		struct OutlineComponent_eventSetOutlineWithDuration_Parms
		{
			EOutlineColor InitialColor;
			EOutlineColor FinalColor;
			float Seconds;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InitialColor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialColor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialColor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FinalColor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalColor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FinalColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_InitialColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_InitialColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_InitialColor = { "InitialColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventSetOutlineWithDuration_Parms, InitialColor), Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_InitialColor_MetaData), Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_InitialColor_MetaData) }; // 1636176557
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_FinalColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_FinalColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_FinalColor = { "FinalColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventSetOutlineWithDuration_Parms, FinalColor), Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_FinalColor_MetaData), Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_FinalColor_MetaData) }; // 1636176557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_Seconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutlineComponent_eventSetOutlineWithDuration_Parms, Seconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_Seconds_MetaData), Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_Seconds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_InitialColor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_InitialColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_FinalColor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_FinalColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::NewProp_Seconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outline" },
		{ "Comment", "/** Set's the active outline color initially then changes it after an amount of time. */" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ToolTip", "Set's the active outline color initially then changes it after an amount of time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutlineComponent, nullptr, "SetOutlineWithDuration", nullptr, nullptr, Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::OutlineComponent_eventSetOutlineWithDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UOutlineComponent_ShowOutline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutlineComponent_ShowOutline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outline" },
		{ "Comment", "/** Show the initial or previously used outline. */" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ToolTip", "Show the initial or previously used outline." },
	};
#endif
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
	struct Z_Construct_UFunction_UOutlineComponent_Unlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutlineComponent_Unlock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outline" },
		{ "Comment", "/** Allows the outline to be changed. */" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ToolTip", "Allows the outline to be changed." },
	};
#endif
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOutlineComponent);
	UClass* Z_Construct_UClass_UOutlineComponent_NoRegister()
	{
		return UOutlineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOutlineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutlineColor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineColor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutlineColor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutlineGroup_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineGroup_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutlineGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StencilIndices_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StencilIndices_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StencilIndices_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StencilIndices_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StencilIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnOutlineChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOutlineChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnOutlineDurationFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOutlineDurationFinished;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOutlineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorOutlinePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOutlineComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOutlineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOutlineComponent_CancelOutlineDuration, "CancelOutlineDuration" }, // 2003730594
		{ &Z_Construct_UFunction_UOutlineComponent_GetOutlineColor, "GetOutlineColor" }, // 1209791388
		{ &Z_Construct_UFunction_UOutlineComponent_HideOutline, "HideOutline" }, // 1272030801
		{ &Z_Construct_UFunction_UOutlineComponent_Lock, "Lock" }, // 1867345723
		{ &Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineChanged__DelegateSignature, "OnOutlineChanged__DelegateSignature" }, // 1621092433
		{ &Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineDurationFinished__DelegateSignature, "OnOutlineDurationFinished__DelegateSignature" }, // 701225094
		{ &Z_Construct_UFunction_UOutlineComponent_OnRep_OutlineColor, "OnRep_OutlineColor" }, // 925827580
		{ &Z_Construct_UFunction_UOutlineComponent_ReceiveOutlineColorUpdated, "ReceiveOutlineColorUpdated" }, // 3357846741
		{ &Z_Construct_UFunction_UOutlineComponent_SetOutline, "SetOutline" }, // 363039994
		{ &Z_Construct_UFunction_UOutlineComponent_SetOutlineWithDuration, "SetOutlineWithDuration" }, // 1647843232
		{ &Z_Construct_UFunction_UOutlineComponent_ShowOutline, "ShowOutline" }, // 2614559583
		{ &Z_Construct_UFunction_UOutlineComponent_Unlock, "Unlock" }, // 800737363
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOutlineComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutlineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/** A component for rendering an outline effect on actors. */" },
		{ "IncludePath", "OutlineComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ToolTip", "A component for rendering an outline effect on actors." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OutlineColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OutlineColor_MetaData[] = {
		{ "Category", "Outline" },
		{ "Comment", "/** The current outline color. */" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ToolTip", "The current outline color." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OutlineColor = { "OutlineColor", "OnRep_OutlineColor", (EPropertyFlags)0x0010000100000035, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, OutlineColor), Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OutlineColor_MetaData), Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OutlineColor_MetaData) }; // 1636176557
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OutlineGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OutlineGroup_MetaData[] = {
		{ "Category", "Outline" },
		{ "Comment", "/** A group useful for filtering and processing. */" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ToolTip", "A group useful for filtering and processing." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OutlineGroup = { "OutlineGroup", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, OutlineGroup), Z_Construct_UEnum_ActorOutlinePlugin_EOutlineGroup, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OutlineGroup_MetaData), Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OutlineGroup_MetaData) }; // 4158180249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutlineComponent_Statics::NewProp_bLocked_MetaData[] = {
		{ "Category", "Outline" },
		{ "Comment", "/** Determines if the outline can be changed. */" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ToolTip", "Determines if the outline can be changed." },
	};
#endif
	void Z_Construct_UClass_UOutlineComponent_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((UOutlineComponent*)Obj)->bLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOutlineComponent), &Z_Construct_UClass_UOutlineComponent_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOutlineComponent_Statics::NewProp_bLocked_MetaData), Z_Construct_UClass_UOutlineComponent_Statics::NewProp_bLocked_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_StencilIndices_ValueProp = { "StencilIndices", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_StencilIndices_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_StencilIndices_Key_KeyProp = { "StencilIndices_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ActorOutlinePlugin_EOutlineColor, METADATA_PARAMS(0, nullptr) }; // 1636176557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutlineComponent_Statics::NewProp_StencilIndices_MetaData[] = {
		{ "Category", "Outline" },
		{ "Comment", "/** Index values of each outline color for the custom depth value. */" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ToolTip", "Index values of each outline color for the custom depth value." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_StencilIndices = { "StencilIndices", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, StencilIndices), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOutlineComponent_Statics::NewProp_StencilIndices_MetaData), Z_Construct_UClass_UOutlineComponent_Statics::NewProp_StencilIndices_MetaData) }; // 1636176557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OnOutlineChanged_MetaData[] = {
		{ "Category", "Outline|Events" },
		{ "Comment", "/** Delegate called when the outline has been changed. */" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ToolTip", "Delegate called when the outline has been changed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OnOutlineChanged = { "OnOutlineChanged", nullptr, (EPropertyFlags)0x00100000100b0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, OnOutlineChanged), Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OnOutlineChanged_MetaData), Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OnOutlineChanged_MetaData) }; // 1621092433
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OnOutlineDurationFinished_MetaData[] = {
		{ "Category", "Outline|Events" },
		{ "Comment", "/** Delegate called when the duration from SetOutlineFromDuration has ended. */" },
		{ "ModuleRelativePath", "Public/OutlineComponent.h" },
		{ "ToolTip", "Delegate called when the duration from SetOutlineFromDuration has ended." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OnOutlineDurationFinished = { "OnOutlineDurationFinished", nullptr, (EPropertyFlags)0x00100000100b0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOutlineComponent, OnOutlineDurationFinished), Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineDurationFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OnOutlineDurationFinished_MetaData), Z_Construct_UClass_UOutlineComponent_Statics::NewProp_OnOutlineDurationFinished_MetaData) }; // 701225094
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOutlineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOutlineComponent>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOutlineComponent_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_Statics::EnumInfo[] = {
		{ EOutlineColor_StaticEnum, TEXT("EOutlineColor"), &Z_Registration_Info_UEnum_EOutlineColor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1636176557U) },
		{ EOutlineGroup_StaticEnum, TEXT("EOutlineGroup"), &Z_Registration_Info_UEnum_EOutlineGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4158180249U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOutlineComponent, UOutlineComponent::StaticClass, TEXT("UOutlineComponent"), &Z_Registration_Info_UClass_UOutlineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOutlineComponent), 1534096621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_2564916896(TEXT("/Script/ActorOutlinePlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
