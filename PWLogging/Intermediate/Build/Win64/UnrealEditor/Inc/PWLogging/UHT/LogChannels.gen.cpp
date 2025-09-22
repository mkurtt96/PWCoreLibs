// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LogChannels.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLogChannels() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PWLOGGING_API UClass* Z_Construct_UClass_ULogChannels();
PWLOGGING_API UClass* Z_Construct_UClass_ULogChannels_NoRegister();
UPackage* Z_Construct_UPackage__Script_PWLogging();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULogChannels *************************************************************
void ULogChannels::StaticRegisterNativesULogChannels()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULogChannels;
UClass* ULogChannels::GetPrivateStaticClass()
{
	using TClass = ULogChannels;
	if (!Z_Registration_Info_UClass_ULogChannels.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LogChannels"),
			Z_Registration_Info_UClass_ULogChannels.InnerSingleton,
			StaticRegisterNativesULogChannels,
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
	return Z_Registration_Info_UClass_ULogChannels.InnerSingleton;
}
UClass* Z_Construct_UClass_ULogChannels_NoRegister()
{
	return ULogChannels::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULogChannels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "LogChannels.h" },
		{ "ModuleRelativePath", "Public/LogChannels.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULogChannels>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULogChannels_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PWLogging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULogChannels_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULogChannels_Statics::ClassParams = {
	&ULogChannels::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULogChannels_Statics::Class_MetaDataParams), Z_Construct_UClass_ULogChannels_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULogChannels()
{
	if (!Z_Registration_Info_UClass_ULogChannels.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULogChannels.OuterSingleton, Z_Construct_UClass_ULogChannels_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULogChannels.OuterSingleton;
}
ULogChannels::ULogChannels(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULogChannels);
ULogChannels::~ULogChannels() {}
// ********** End Class ULogChannels ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogChannels_h__Script_PWLogging_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULogChannels, ULogChannels::StaticClass, TEXT("ULogChannels"), &Z_Registration_Info_UClass_ULogChannels, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULogChannels), 3549202886U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogChannels_h__Script_PWLogging_3519883924(TEXT("/Script/PWLogging"),
	Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogChannels_h__Script_PWLogging_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWLogging_Source_PWLogging_Public_LogChannels_h__Script_PWLogging_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
