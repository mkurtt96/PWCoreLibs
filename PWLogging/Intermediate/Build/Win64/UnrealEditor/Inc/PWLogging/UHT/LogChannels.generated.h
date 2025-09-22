// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LogChannels.h"

#ifdef PWLOGGING_LogChannels_generated_h
#error "LogChannels.generated.h already included, missing '#pragma once' in LogChannels.h"
#endif
#define PWLOGGING_LogChannels_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULogChannels *************************************************************
PWLOGGING_API UClass* Z_Construct_UClass_ULogChannels_NoRegister();

#define FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogChannels_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULogChannels(); \
	friend struct Z_Construct_UClass_ULogChannels_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PWLOGGING_API UClass* Z_Construct_UClass_ULogChannels_NoRegister(); \
public: \
	DECLARE_CLASS2(ULogChannels, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PWLogging"), Z_Construct_UClass_ULogChannels_NoRegister) \
	DECLARE_SERIALIZER(ULogChannels)


#define FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogChannels_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULogChannels(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULogChannels(ULogChannels&&) = delete; \
	ULogChannels(const ULogChannels&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULogChannels); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogChannels); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogChannels) \
	NO_API virtual ~ULogChannels();


#define FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogChannels_h_23_PROLOG
#define FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogChannels_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogChannels_h_26_INCLASS_NO_PURE_DECLS \
	FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogChannels_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULogChannels;

// ********** End Class ULogChannels ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogChannels_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
