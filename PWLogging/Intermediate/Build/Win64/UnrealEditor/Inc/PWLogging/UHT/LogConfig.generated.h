// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LogConfig.h"

#ifdef PWLOGGING_LogConfig_generated_h
#error "LogConfig.generated.h already included, missing '#pragma once' in LogConfig.h"
#endif
#define PWLOGGING_LogConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ULogConfig;

// ********** Begin Class ULogConfig ***************************************************************
#define FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogConfig_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLogConfig);


PWLOGGING_API UClass* Z_Construct_UClass_ULogConfig_NoRegister();

#define FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogConfig_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULogConfig(); \
	friend struct Z_Construct_UClass_ULogConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PWLOGGING_API UClass* Z_Construct_UClass_ULogConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(ULogConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/PWLogging"), Z_Construct_UClass_ULogConfig_NoRegister) \
	DECLARE_SERIALIZER(ULogConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogConfig_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULogConfig(ULogConfig&&) = delete; \
	ULogConfig(const ULogConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULogConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULogConfig) \
	NO_API virtual ~ULogConfig();


#define FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogConfig_h_12_PROLOG
#define FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogConfig_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogConfig_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogConfig_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogConfig_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULogConfig;

// ********** End Class ULogConfig *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
