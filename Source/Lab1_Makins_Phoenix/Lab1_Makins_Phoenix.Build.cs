// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Lab1_Makins_Phoenix : ModuleRules
{
	public Lab1_Makins_Phoenix(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
