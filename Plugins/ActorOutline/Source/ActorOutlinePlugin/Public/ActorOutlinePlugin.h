// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Components/ActorComponent.h"
#include "Engine/Engine.h"
#include "TimerManager.h"
#include "Components/PrimitiveComponent.h"

class FActorOutlinePluginModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
