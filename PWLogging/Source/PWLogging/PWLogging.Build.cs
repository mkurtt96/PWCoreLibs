// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PWLogging : ModuleRules
{
	public PWLogging(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"Json",
				"JsonUtilities", 
				"AdvancedSessions", 
				"OnlineSubsystem",
				// ... add other public dependencies that you statically link with here ...
			}
			);
		
		PublicDefinitions.Add("PW_WITH_ADVANCED_SESSIONS=1");
		PublicDefinitions.Add("PW_WITH_OSS=1");
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
