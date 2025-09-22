// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiDataArray.h"

#ifdef PWSHAREDTYPES_MultiDataArray_generated_h
#error "MultiDataArray.generated.h already included, missing '#pragma once' in MultiDataArray.h"
#endif
#define PWSHAREDTYPES_MultiDataArray_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMultiDataValue ***************************************************
#define FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_MultiDataArray_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiDataValue_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMultiDataValue;
// ********** End ScriptStruct FMultiDataValue *****************************************************

// ********** Begin Class UMultiDataArray **********************************************************
#define FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_MultiDataArray_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execGetInt); \
	DECLARE_FUNCTION(execGetVector); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execAddBool); \
	DECLARE_FUNCTION(execAddInt); \
	DECLARE_FUNCTION(execAddVector); \
	DECLARE_FUNCTION(execAddFloat); \
	DECLARE_FUNCTION(execAddString);


PWSHAREDTYPES_API UClass* Z_Construct_UClass_UMultiDataArray_NoRegister();

#define FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_MultiDataArray_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiDataArray(); \
	friend struct Z_Construct_UClass_UMultiDataArray_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PWSHAREDTYPES_API UClass* Z_Construct_UClass_UMultiDataArray_NoRegister(); \
public: \
	DECLARE_CLASS2(UMultiDataArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PWSharedTypes"), Z_Construct_UClass_UMultiDataArray_NoRegister) \
	DECLARE_SERIALIZER(UMultiDataArray)


#define FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_MultiDataArray_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMultiDataArray(UMultiDataArray&&) = delete; \
	UMultiDataArray(const UMultiDataArray&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiDataArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiDataArray); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiDataArray) \
	NO_API virtual ~UMultiDataArray();


#define FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_MultiDataArray_h_34_PROLOG
#define FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_MultiDataArray_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_MultiDataArray_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_MultiDataArray_h_37_INCLASS_NO_PURE_DECLS \
	FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_MultiDataArray_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMultiDataArray;

// ********** End Class UMultiDataArray ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_MultiDataArray_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
