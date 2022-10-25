// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Lab1_Makins_PhoenixHUD.generated.h"

UCLASS()
class ALab1_Makins_PhoenixHUD : public AHUD
{
	GENERATED_BODY()

public:
	ALab1_Makins_PhoenixHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

