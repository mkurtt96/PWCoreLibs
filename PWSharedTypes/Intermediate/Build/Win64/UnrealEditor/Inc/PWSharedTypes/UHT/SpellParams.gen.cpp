// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ability/SpellParams.h"
#include "GameFramework/OnlineReplStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpellParams() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
PWSHAREDTYPES_API UClass* Z_Construct_UClass_UMultiDataArray_NoRegister();
PWSHAREDTYPES_API UClass* Z_Construct_UClass_USpellParamsBase();
PWSHAREDTYPES_API UClass* Z_Construct_UClass_USpellParamsBase_NoRegister();
PWSHAREDTYPES_API UEnum* Z_Construct_UEnum_PWSharedTypes_ERelationMask();
UPackage* Z_Construct_UPackage__Script_PWSharedTypes();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ERelationMask *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERelationMask;
static UEnum* ERelationMask_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERelationMask.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERelationMask.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PWSharedTypes_ERelationMask, (UObject*)Z_Construct_UPackage__Script_PWSharedTypes(), TEXT("ERelationMask"));
	}
	return Z_Registration_Info_UEnum_ERelationMask.OuterSingleton;
}
template<> PWSHAREDTYPES_API UEnum* StaticEnum<ERelationMask>()
{
	return ERelationMask_StaticEnum();
}
struct Z_Construct_UEnum_PWSharedTypes_ERelationMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Hidden", "" },
		{ "All.Name", "ERelationMask::All" },
		{ "Ally.Name", "ERelationMask::Ally" },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Enemy.Name", "ERelationMask::Enemy" },
		{ "ModuleRelativePath", "Public/Ability/SpellParams.h" },
		{ "Neutral.Name", "ERelationMask::Neutral" },
		{ "None.Hidden", "" },
		{ "None.Name", "ERelationMask::None" },
		{ "Self.Name", "ERelationMask::Self" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERelationMask::None", (int64)ERelationMask::None },
		{ "ERelationMask::Self", (int64)ERelationMask::Self },
		{ "ERelationMask::Ally", (int64)ERelationMask::Ally },
		{ "ERelationMask::Enemy", (int64)ERelationMask::Enemy },
		{ "ERelationMask::Neutral", (int64)ERelationMask::Neutral },
		{ "ERelationMask::All", (int64)ERelationMask::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PWSharedTypes_ERelationMask_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PWSharedTypes,
	nullptr,
	"ERelationMask",
	"ERelationMask",
	Z_Construct_UEnum_PWSharedTypes_ERelationMask_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PWSharedTypes_ERelationMask_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PWSharedTypes_ERelationMask_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PWSharedTypes_ERelationMask_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PWSharedTypes_ERelationMask()
{
	if (!Z_Registration_Info_UEnum_ERelationMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERelationMask.InnerSingleton, Z_Construct_UEnum_PWSharedTypes_ERelationMask_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERelationMask.InnerSingleton;
}
// ********** End Enum ERelationMask ***************************************************************

// ********** Begin Class USpellParamsBase Function OnRep_UniqueId *********************************
struct Z_Construct_UFunction_USpellParamsBase_OnRep_UniqueId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability/SpellParams.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpellParamsBase_OnRep_UniqueId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpellParamsBase, nullptr, "OnRep_UniqueId", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpellParamsBase_OnRep_UniqueId_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpellParamsBase_OnRep_UniqueId_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USpellParamsBase_OnRep_UniqueId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpellParamsBase_OnRep_UniqueId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpellParamsBase::execOnRep_UniqueId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_UniqueId();
	P_NATIVE_END;
}
// ********** End Class USpellParamsBase Function OnRep_UniqueId ***********************************

// ********** Begin Class USpellParamsBase *********************************************************
void USpellParamsBase::StaticRegisterNativesUSpellParamsBase()
{
	UClass* Class = USpellParamsBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_UniqueId", &USpellParamsBase::execOnRep_UniqueId },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpellParamsBase;
UClass* USpellParamsBase::GetPrivateStaticClass()
{
	using TClass = USpellParamsBase;
	if (!Z_Registration_Info_UClass_USpellParamsBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpellParamsBase"),
			Z_Registration_Info_UClass_USpellParamsBase.InnerSingleton,
			StaticRegisterNativesUSpellParamsBase,
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
	return Z_Registration_Info_UClass_USpellParamsBase.InnerSingleton;
}
UClass* Z_Construct_UClass_USpellParamsBase_NoRegister()
{
	return USpellParamsBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpellParamsBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Ability/SpellParams.h" },
		{ "ModuleRelativePath", "Public/Ability/SpellParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAvatar_MetaData[] = {
		{ "Category", "SpellParamsBase" },
		{ "ModuleRelativePath", "Public/Ability/SpellParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePlayerUniqueId_MetaData[] = {
		{ "Category", "SpellParamsBase" },
		{ "ModuleRelativePath", "Public/Ability/SpellParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCollisionTypes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PWSharedTypes.ERelationMask" },
		{ "Category", "SpellParamsBase" },
		{ "ModuleRelativePath", "Public/Ability/SpellParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetEffectTypes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PWSharedTypes.ERelationMask" },
		{ "Category", "SpellParamsBase" },
		{ "ModuleRelativePath", "Public/Ability/SpellParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "SpellParamsBase" },
		{ "ModuleRelativePath", "Public/Ability/SpellParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_More_MetaData[] = {
		{ "Category", "SpellParamsBase" },
		{ "ModuleRelativePath", "Public/Ability/SpellParams.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAvatar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePlayerUniqueId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetCollisionTypes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetEffectTypes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_More;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpellParamsBase_OnRep_UniqueId, "OnRep_UniqueId" }, // 91765439
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpellParamsBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpellParamsBase_Statics::NewProp_SourceAvatar = { "SourceAvatar", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpellParamsBase, SourceAvatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAvatar_MetaData), NewProp_SourceAvatar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpellParamsBase_Statics::NewProp_SourcePlayerUniqueId = { "SourcePlayerUniqueId", "OnRep_UniqueId", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpellParamsBase, SourcePlayerUniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePlayerUniqueId_MetaData), NewProp_SourcePlayerUniqueId_MetaData) }; // 774471623
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpellParamsBase_Statics::NewProp_TargetCollisionTypes = { "TargetCollisionTypes", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpellParamsBase, TargetCollisionTypes), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCollisionTypes_MetaData), NewProp_TargetCollisionTypes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpellParamsBase_Statics::NewProp_TargetEffectTypes = { "TargetEffectTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpellParamsBase, TargetEffectTypes), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetEffectTypes_MetaData), NewProp_TargetEffectTypes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpellParamsBase_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpellParamsBase, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLevel_MetaData), NewProp_AbilityLevel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpellParamsBase_Statics::NewProp_More = { "More", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpellParamsBase, More), Z_Construct_UClass_UMultiDataArray_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_More_MetaData), NewProp_More_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpellParamsBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpellParamsBase_Statics::NewProp_SourceAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpellParamsBase_Statics::NewProp_SourcePlayerUniqueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpellParamsBase_Statics::NewProp_TargetCollisionTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpellParamsBase_Statics::NewProp_TargetEffectTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpellParamsBase_Statics::NewProp_AbilityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpellParamsBase_Statics::NewProp_More,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpellParamsBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpellParamsBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PWSharedTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpellParamsBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpellParamsBase_Statics::ClassParams = {
	&USpellParamsBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpellParamsBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpellParamsBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpellParamsBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USpellParamsBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpellParamsBase()
{
	if (!Z_Registration_Info_UClass_USpellParamsBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpellParamsBase.OuterSingleton, Z_Construct_UClass_USpellParamsBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpellParamsBase.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void USpellParamsBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_SourcePlayerUniqueId(TEXT("SourcePlayerUniqueId"));
	static FName Name_TargetCollisionTypes(TEXT("TargetCollisionTypes"));
	static FName Name_AbilityLevel(TEXT("AbilityLevel"));
	const bool bIsValid = true
		&& Name_SourcePlayerUniqueId == ClassReps[(int32)ENetFields_Private::SourcePlayerUniqueId].Property->GetFName()
		&& Name_TargetCollisionTypes == ClassReps[(int32)ENetFields_Private::TargetCollisionTypes].Property->GetFName()
		&& Name_AbilityLevel == ClassReps[(int32)ENetFields_Private::AbilityLevel].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USpellParamsBase"));
}
#endif
USpellParamsBase::USpellParamsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpellParamsBase);
USpellParamsBase::~USpellParamsBase() {}
// ********** End Class USpellParamsBase ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_Ability_SpellParams_h__Script_PWSharedTypes_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERelationMask_StaticEnum, TEXT("ERelationMask"), &Z_Registration_Info_UEnum_ERelationMask, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 855095425U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpellParamsBase, USpellParamsBase::StaticClass, TEXT("USpellParamsBase"), &Z_Registration_Info_UClass_USpellParamsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpellParamsBase), 3341976498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_Ability_SpellParams_h__Script_PWSharedTypes_4218713404(TEXT("/Script/PWSharedTypes"),
	Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_Ability_SpellParams_h__Script_PWSharedTypes_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_Ability_SpellParams_h__Script_PWSharedTypes_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_Ability_SpellParams_h__Script_PWSharedTypes_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_Ability_SpellParams_h__Script_PWSharedTypes_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
