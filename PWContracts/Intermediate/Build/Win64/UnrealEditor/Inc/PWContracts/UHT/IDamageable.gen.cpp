// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ability/IDamageable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIDamageable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PWCONTRACTS_API UClass* Z_Construct_UClass_UDamageable();
PWCONTRACTS_API UClass* Z_Construct_UClass_UDamageable_NoRegister();
UPackage* Z_Construct_UPackage__Script_PWContracts();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UDamageable **********************************************************
void UDamageable::StaticRegisterNativesUDamageable()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDamageable;
UClass* UDamageable::GetPrivateStaticClass()
{
	using TClass = UDamageable;
	if (!Z_Registration_Info_UClass_UDamageable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Damageable"),
			Z_Registration_Info_UClass_UDamageable.InnerSingleton,
			StaticRegisterNativesUDamageable,
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
	return Z_Registration_Info_UClass_UDamageable.InnerSingleton;
}
UClass* Z_Construct_UClass_UDamageable_NoRegister()
{
	return UDamageable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDamageable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Ability/IDamageable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDamageable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDamageable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_PWContracts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageable_Statics::ClassParams = {
	&UDamageable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageable_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageable()
{
	if (!Z_Registration_Info_UClass_UDamageable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageable.OuterSingleton, Z_Construct_UClass_UDamageable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageable.OuterSingleton;
}
UDamageable::UDamageable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageable);
// ********** End Interface UDamageable ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWContracts_Source_PWContracts_Public_Ability_IDamageable_h__Script_PWContracts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageable, UDamageable::StaticClass, TEXT("UDamageable"), &Z_Registration_Info_UClass_UDamageable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageable), 36838923U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWContracts_Source_PWContracts_Public_Ability_IDamageable_h__Script_PWContracts_237886564(TEXT("/Script/PWContracts"),
	Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWContracts_Source_PWContracts_Public_Ability_IDamageable_h__Script_PWContracts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWContracts_Source_PWContracts_Public_Ability_IDamageable_h__Script_PWContracts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
