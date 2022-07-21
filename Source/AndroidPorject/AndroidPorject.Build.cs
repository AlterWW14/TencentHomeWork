// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AndroidPorject : ModuleRules
{
	public AndroidPorject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
