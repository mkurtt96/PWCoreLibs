// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DebugLog.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDebugLog() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PWLOGGING_API UClass* Z_Construct_UClass_UDebugLog();
PWLOGGING_API UClass* Z_Construct_UClass_UDebugLog_NoRegister();
PWLOGGING_API UEnum* Z_Construct_UEnum_PWLogging_ELogCategory();
UPackage* Z_Construct_UPackage__Script_PWLogging();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELogCategory **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELogCategory;
static UEnum* ELogCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELogCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELogCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PWLogging_ELogCategory, (UObject*)Z_Construct_UPackage__Script_PWLogging(), TEXT("ELogCategory"));
	}
	return Z_Registration_Info_UEnum_ELogCategory.OuterSingleton;
}
template<> PWLOGGING_API UEnum* StaticEnum<ELogCategory>()
{
	return ELogCategory_StaticEnum();
}
struct Z_Construct_UEnum_PWLogging_ELogCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LogCharacter.DisplayName", "Character" },
		{ "LogCharacter.Name", "ELogCategory::LogCharacter" },
		{ "LogCombat.DisplayName", "Combat" },
		{ "LogCombat.Name", "ELogCategory::LogCombat" },
		{ "LogEnvironment.DisplayName", "Environment" },
		{ "LogEnvironment.Name", "ELogCategory::LogEnvironment" },
		{ "LogInventory.DisplayName", "Inventory" },
		{ "LogInventory.Name", "ELogCategory::LogInventory" },
		{ "LogNetwork.DisplayName", "Network" },
		{ "LogNetwork.Name", "ELogCategory::LogNetwork" },
		{ "LogPlayer.DisplayName", "Player" },
		{ "LogPlayer.Name", "ELogCategory::LogPlayer" },
		{ "LogSpell.DisplayName", "Spell" },
		{ "LogSpell.Name", "ELogCategory::LogSpell" },
		{ "LogTemp.DisplayName", "Temp" },
		{ "LogTemp.Name", "ELogCategory::LogTemp" },
		{ "ModuleRelativePath", "Public/DebugLog.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELogCategory::LogTemp", (int64)ELogCategory::LogTemp },
		{ "ELogCategory::LogNetwork", (int64)ELogCategory::LogNetwork },
		{ "ELogCategory::LogSpell", (int64)ELogCategory::LogSpell },
		{ "ELogCategory::LogCharacter", (int64)ELogCategory::LogCharacter },
		{ "ELogCategory::LogPlayer", (int64)ELogCategory::LogPlayer },
		{ "ELogCategory::LogInventory", (int64)ELogCategory::LogInventory },
		{ "ELogCategory::LogCombat", (int64)ELogCategory::LogCombat },
		{ "ELogCategory::LogEnvironment", (int64)ELogCategory::LogEnvironment },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PWLogging_ELogCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PWLogging,
	nullptr,
	"ELogCategory",
	"ELogCategory",
	Z_Construct_UEnum_PWLogging_ELogCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PWLogging_ELogCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PWLogging_ELogCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PWLogging_ELogCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PWLogging_ELogCategory()
{
	if (!Z_Registration_Info_UEnum_ELogCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELogCategory.InnerSingleton, Z_Construct_UEnum_PWLogging_ELogCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELogCategory.InnerSingleton;
}
// ********** End Enum ELogCategory ****************************************************************

// ********** Begin Class UDebugLog Function LogAsJson *********************************************
struct Z_Construct_UFunction_UDebugLog_LogAsJson_Statics
{
	struct DebugLog_eventLogAsJson_Parms
	{
		int32 Property;
		UObject* WorldContext;
		FString Prefix;
		FString Suffix;
		ELogCategory LogCategory;
		TArray<FString> Tags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Prefix, Suffix, LogCategory, Tags" },
		{ "AutoCreateRefTerm", "Tags" },
		{ "Category", "Debug" },
		{ "CustomStructureParam", "Property" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/DebugLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Property;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Suffix;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LogCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LogCategory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DebugLog_eventLogAsJson_Parms, Property), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Property_MetaData), NewProp_Property_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DebugLog_eventLogAsJson_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DebugLog_eventLogAsJson_Parms, Prefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prefix_MetaData), NewProp_Prefix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DebugLog_eventLogAsJson_Parms, Suffix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Suffix_MetaData), NewProp_Suffix_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::NewProp_LogCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DebugLog_eventLogAsJson_Parms, LogCategory), Z_Construct_UEnum_PWLogging_ELogCategory, METADATA_PARAMS(0, nullptr) }; // 2426497123
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DebugLog_eventLogAsJson_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::NewProp_Property,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::NewProp_Suffix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::NewProp_LogCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDebugLog, nullptr, "LogAsJson", Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::DebugLog_eventLogAsJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::DebugLog_eventLogAsJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDebugLog_LogAsJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDebugLog_LogAsJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UDebugLog Function LogAsJson ***********************************************

// ********** Begin Class UDebugLog ****************************************************************
void UDebugLog::StaticRegisterNativesUDebugLog()
{
	UClass* Class = UDebugLog::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LogAsJson", &UDebugLog::execLogAsJson },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDebugLog;
UClass* UDebugLog::GetPrivateStaticClass()
{
	using TClass = UDebugLog;
	if (!Z_Registration_Info_UClass_UDebugLog.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DebugLog"),
			Z_Registration_Info_UClass_UDebugLog.InnerSingleton,
			StaticRegisterNativesUDebugLog,
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
	return Z_Registration_Info_UClass_UDebugLog.InnerSingleton;
}
UClass* Z_Construct_UClass_UDebugLog_NoRegister()
{
	return UDebugLog::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDebugLog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DebugLog.h" },
		{ "ModuleRelativePath", "Public/DebugLog.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDebugLog_LogAsJson, "LogAsJson" }, // 3533245367
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugLog>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDebugLog_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_PWLogging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLog_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDebugLog_Statics::ClassParams = {
	&UDebugLog::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLog_Statics::Class_MetaDataParams), Z_Construct_UClass_UDebugLog_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDebugLog()
{
	if (!Z_Registration_Info_UClass_UDebugLog.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDebugLog.OuterSingleton, Z_Construct_UClass_UDebugLog_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDebugLog.OuterSingleton;
}
UDebugLog::UDebugLog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugLog);
UDebugLog::~UDebugLog() {}
// ********** End Class UDebugLog ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_DebugLog_h__Script_PWLogging_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELogCategory_StaticEnum, TEXT("ELogCategory"), &Z_Registration_Info_UEnum_ELogCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2426497123U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDebugLog, UDebugLog::StaticClass, TEXT("UDebugLog"), &Z_Registration_Info_UClass_UDebugLog, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDebugLog), 55017257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_DebugLog_h__Script_PWLogging_1851070564(TEXT("/Script/PWLogging"),
	Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_DebugLog_h__Script_PWLogging_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_DebugLog_h__Script_PWLogging_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_DebugLog_h__Script_PWLogging_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_DebugLog_h__Script_PWLogging_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
