// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OutlineComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOutlineColor : uint8;
#ifdef ACTOROUTLINEPLUGIN_OutlineComponent_generated_h
#error "OutlineComponent.generated.h already included, missing '#pragma once' in OutlineComponent.h"
#endif
#define ACTOROUTLINEPLUGIN_OutlineComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_48_DELEGATE \
static void FOnOutlineChanged_DelegateWrapper(const FMulticastScriptDelegate& OnOutlineChanged);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_49_DELEGATE \
static void FOnOutlineDurationFinished_DelegateWrapper(const FMulticastScriptDelegate& OnOutlineDurationFinished);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_45_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_45_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_45_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_OutlineColor); \
	DECLARE_FUNCTION(execSetOutlineWithDuration); \
	DECLARE_FUNCTION(execSetOutline); \
	DECLARE_FUNCTION(execUnlock); \
	DECLARE_FUNCTION(execLock); \
	DECLARE_FUNCTION(execCancelOutlineDuration); \
	DECLARE_FUNCTION(execHideOutline); \
	DECLARE_FUNCTION(execShowOutline); \
	DECLARE_FUNCTION(execGetOutlineColor);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_45_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_45_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOutlineComponent(); \
	friend struct Z_Construct_UClass_UOutlineComponent_Statics; \
public: \
	DECLARE_CLASS(UOutlineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActorOutlinePlugin"), NO_API) \
	DECLARE_SERIALIZER(UOutlineComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OutlineColor=NETFIELD_REP_START, \
		NETFIELD_REP_END=OutlineColor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOutlineComponent(UOutlineComponent&&); \
	NO_API UOutlineComponent(const UOutlineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOutlineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOutlineComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOutlineComponent) \
	NO_API virtual ~UOutlineComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_42_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_45_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_45_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_45_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_45_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_45_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_45_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTOROUTLINEPLUGIN_API UClass* StaticClass<class UOutlineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ActorOutlinePlugin_Source_ActorOutlinePlugin_Public_OutlineComponent_h


#define FOREACH_ENUM_EOUTLINECOLOR(op) \
	op(EOutlineColor::None) \
	op(EOutlineColor::Blue) \
	op(EOutlineColor::Green) \
	op(EOutlineColor::Red) \
	op(EOutlineColor::White) \
	op(EOutlineColor::Yellow) 

enum class EOutlineColor : uint8;
template<> struct TIsUEnumClass<EOutlineColor> { enum { Value = true }; };
template<> ACTOROUTLINEPLUGIN_API UEnum* StaticEnum<EOutlineColor>();

#define FOREACH_ENUM_EOUTLINEGROUP(op) \
	op(EOutlineGroup::None) \
	op(EOutlineGroup::Team) \
	op(EOutlineGroup::Enemy) \
	op(EOutlineGroup::Loot) \
	op(EOutlineGroup::Interaction) 

enum class EOutlineGroup : uint8;
template<> struct TIsUEnumClass<EOutlineGroup> { enum { Value = true }; };
template<> ACTOROUTLINEPLUGIN_API UEnum* StaticEnum<EOutlineGroup>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
