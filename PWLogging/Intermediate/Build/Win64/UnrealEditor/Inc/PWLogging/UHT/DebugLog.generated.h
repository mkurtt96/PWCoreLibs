// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DebugLog.h"

#ifdef PWLOGGING_DebugLog_generated_h
#error "DebugLog.generated.h already included, missing '#pragma once' in DebugLog.h"
#endif
#define PWLOGGING_DebugLog_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
enum class ELogCategory : uint8;

// ********** Begin Class UDebugLog ****************************************************************
PWLOGGING_API UClass* Z_Construct_UClass_UDebugLog_NoRegister();

#define FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_DebugLog_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDebugLog(); \
	friend struct Z_Construct_UClass_UDebugLog_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PWLOGGING_API UClass* Z_Construct_UClass_UDebugLog_NoRegister(); \
public: \
	DECLARE_CLASS2(UDebugLog, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PWLogging"), Z_Construct_UClass_UDebugLog_NoRegister) \
	DECLARE_SERIALIZER(UDebugLog)


#define FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_DebugLog_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDebugLog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDebugLog(UDebugLog&&) = delete; \
	UDebugLog(const UDebugLog&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDebugLog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDebugLog); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDebugLog) \
	NO_API virtual ~UDebugLog();


#define FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_DebugLog_h_37_PROLOG
#define FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_DebugLog_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_DebugLog_h_40_INCLASS_NO_PURE_DECLS \
	FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_DebugLog_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDebugLog;

// ********** End Class UDebugLog ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_DebugLog_h

// ********** Begin Enum ELogCategory **************************************************************
#define FOREACH_ENUM_ELOGCATEGORY(op) \
	op(ELogCategory::LogTemp) \
	op(ELogCategory::LogNetwork) \
	op(ELogCategory::LogSpell) \
	op(ELogCategory::LogCharacter) \
	op(ELogCategory::LogPlayer) \
	op(ELogCategory::LogInventory) \
	op(ELogCategory::LogCombat) \
	op(ELogCategory::LogEnvironment) 

enum class ELogCategory : uint8;
template<> struct TIsUEnumClass<ELogCategory> { enum { Value = true }; };
template<> PWLOGGING_API UEnum* StaticEnum<ELogCategory>();
// ********** End Enum ELogCategory ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
