// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LogConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLogConfig() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PWLOGGING_API UClass* Z_Construct_UClass_ULogConfig();
PWLOGGING_API UClass* Z_Construct_UClass_ULogConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_PWLogging();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULogConfig Function GetLogConfig *****************************************
struct Z_Construct_UFunction_ULogConfig_GetLogConfig_Statics
{
	struct LogConfig_eventGetLogConfig_Parms
	{
		ULogConfig* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/LogConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULogConfig_GetLogConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogConfig_eventGetLogConfig_Parms, ReturnValue), Z_Construct_UClass_ULogConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogConfig_GetLogConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogConfig_GetLogConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogConfig_GetLogConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogConfig_GetLogConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULogConfig, nullptr, "GetLogConfig", Z_Construct_UFunction_ULogConfig_GetLogConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogConfig_GetLogConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogConfig_GetLogConfig_Statics::LogConfig_eventGetLogConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogConfig_GetLogConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogConfig_GetLogConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULogConfig_GetLogConfig_Statics::LogConfig_eventGetLogConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULogConfig_GetLogConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogConfig_GetLogConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULogConfig::execGetLogConfig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULogConfig**)Z_Param__Result=ULogConfig::GetLogConfig();
	P_NATIVE_END;
}
// ********** End Class ULogConfig Function GetLogConfig *******************************************

// ********** Begin Class ULogConfig ***************************************************************
void ULogConfig::StaticRegisterNativesULogConfig()
{
	UClass* Class = ULogConfig::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLogConfig", &ULogConfig::execGetLogConfig },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULogConfig;
UClass* ULogConfig::GetPrivateStaticClass()
{
	using TClass = ULogConfig;
	if (!Z_Registration_Info_UClass_ULogConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LogConfig"),
			Z_Registration_Info_UClass_ULogConfig.InnerSingleton,
			StaticRegisterNativesULogConfig,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ULogConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_ULogConfig_NoRegister()
{
	return ULogConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULogConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "LogConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LogConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugFunc_MetaData[] = {
		{ "Category", "Debug Settings" },
		{ "ModuleRelativePath", "Public/LogConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugEconomy_MetaData[] = {
		{ "Category", "Debug Settings" },
		{ "ModuleRelativePath", "Public/LogConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugExtraDetails_MetaData[] = {
		{ "Category", "Debug Settings" },
		{ "ModuleRelativePath", "Public/LogConfig.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDebugFunc_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugFunc;
	static void NewProp_bDebugEconomy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugEconomy;
	static void NewProp_bDebugExtraDetails_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugExtraDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULogConfig_GetLogConfig, "GetLogConfig" }, // 1621572513
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULogConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULogConfig_Statics::NewProp_bDebugFunc_SetBit(void* Obj)
{
	((ULogConfig*)Obj)->bDebugFunc = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogConfig_Statics::NewProp_bDebugFunc = { "bDebugFunc", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULogConfig), &Z_Construct_UClass_ULogConfig_Statics::NewProp_bDebugFunc_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugFunc_MetaData), NewProp_bDebugFunc_MetaData) };
void Z_Construct_UClass_ULogConfig_Statics::NewProp_bDebugEconomy_SetBit(void* Obj)
{
	((ULogConfig*)Obj)->bDebugEconomy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogConfig_Statics::NewProp_bDebugEconomy = { "bDebugEconomy", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULogConfig), &Z_Construct_UClass_ULogConfig_Statics::NewProp_bDebugEconomy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugEconomy_MetaData), NewProp_bDebugEconomy_MetaData) };
void Z_Construct_UClass_ULogConfig_Statics::NewProp_bDebugExtraDetails_SetBit(void* Obj)
{
	((ULogConfig*)Obj)->bDebugExtraDetails = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogConfig_Statics::NewProp_bDebugExtraDetails = { "bDebugExtraDetails", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULogConfig), &Z_Construct_UClass_ULogConfig_Statics::NewProp_bDebugExtraDetails_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugExtraDetails_MetaData), NewProp_bDebugExtraDetails_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULogConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogConfig_Statics::NewProp_bDebugFunc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogConfig_Statics::NewProp_bDebugEconomy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogConfig_Statics::NewProp_bDebugExtraDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULogConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULogConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PWLogging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULogConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULogConfig_Statics::ClassParams = {
	&ULogConfig::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULogConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULogConfig_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULogConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_ULogConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULogConfig()
{
	if (!Z_Registration_Info_UClass_ULogConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULogConfig.OuterSingleton, Z_Construct_UClass_ULogConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULogConfig.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULogConfig);
ULogConfig::~ULogConfig() {}
// ********** End Class ULogConfig *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogConfig_h__Script_PWLogging_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULogConfig, ULogConfig::StaticClass, TEXT("ULogConfig"), &Z_Registration_Info_UClass_ULogConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULogConfig), 3928129059U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogConfig_h__Script_PWLogging_3904543873(TEXT("/Script/PWLogging"),
	Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogConfig_h__Script_PWLogging_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogConfig_h__Script_PWLogging_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
