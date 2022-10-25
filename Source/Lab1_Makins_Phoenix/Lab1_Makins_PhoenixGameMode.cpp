// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lab1_Makins_PhoenixGameMode.h"
#include "Lab1_Makins_PhoenixHUD.h"
#include "Lab1_Makins_PhoenixCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALab1_Makins_PhoenixGameMode::ALab1_Makins_PhoenixGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALab1_Makins_PhoenixHUD::StaticClass();
}
