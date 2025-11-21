// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorOutlinePlugin_init() {}
	ACTOROUTLINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineChanged__DelegateSignature();
	ACTOROUTLINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineDurationFinished__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ActorOutlinePlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ActorOutlinePlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_ActorOutlinePlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UOutlineComponent_OnOutlineDurationFinished__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ActorOutlinePlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x655EC059,
				0xC106A604,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ActorOutlinePlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ActorOutlinePlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ActorOutlinePlugin(Z_Construct_UPackage__Script_ActorOutlinePlugin, TEXT("/Script/ActorOutlinePlugin"), Z_Registration_Info_UPackage__Script_ActorOutlinePlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x655EC059, 0xC106A604));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
