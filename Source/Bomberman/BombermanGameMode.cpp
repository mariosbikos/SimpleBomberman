// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "BombermanGameMode.h"
#include "BombermanPlayerController.h"
#include "BombermanCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABombermanGameMode::ABombermanGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ABombermanPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}