// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class M2Ipv2 : ModuleRules
{
	public M2Ipv2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
