// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Wizard_Journey : ModuleRules
{
	public Wizard_Journey(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
