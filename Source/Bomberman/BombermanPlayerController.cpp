// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "BombermanPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BombermanCharacter.h"
#include "Engine/World.h"

ABombermanPlayerController::ABombermanPlayerController()
{

}

void ABombermanPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

}

void ABombermanPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

}
