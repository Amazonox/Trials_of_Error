// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Trials_of_Error : ModuleRules
{
	public Trials_of_Error(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
