// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TestRayTracingGameMode.h"
#include "TestRayTracingHUD.h"
#include "TestRayTracingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestRayTracingGameMode::ATestRayTracingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestRayTracingHUD::StaticClass();
}
