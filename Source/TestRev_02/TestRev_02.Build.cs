// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestRev_02 : ModuleRules
{
	public TestRev_02(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
