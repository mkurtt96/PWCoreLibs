// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePWLogging_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PWLogging;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PWLogging()
	{
		if (!Z_Registration_Info_UPackage__Script_PWLogging.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PWLogging",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x457494C1,
				0x415C0779,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PWLogging.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PWLogging.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PWLogging(Z_Construct_UPackage__Script_PWLogging, TEXT("/Script/PWLogging"), Z_Registration_Info_UPackage__Script_PWLogging, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x457494C1, 0x415C0779));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
