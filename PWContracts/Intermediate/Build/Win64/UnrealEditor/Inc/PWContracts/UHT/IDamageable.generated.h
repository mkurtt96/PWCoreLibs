// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ability/IDamageable.h"

#ifdef PWCONTRACTS_IDamageable_generated_h
#error "IDamageable.generated.h already included, missing '#pragma once' in IDamageable.h"
#endif
#define PWCONTRACTS_IDamageable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDamageable **********************************************************
PWCONTRACTS_API UClass* Z_Construct_UClass_UDamageable_NoRegister();

#define FID_ProjectWTps_Plugins_PWContracts_Source_PWContracts_Public_Ability_IDamageable_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDamageable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDamageable(UDamageable&&) = delete; \
	UDamageable(const UDamageable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageable) \
	virtual ~UDamageable() = default;


#define FID_ProjectWTps_Plugins_PWContracts_Source_PWContracts_Public_Ability_IDamageable_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDamageable(); \
	friend struct Z_Construct_UClass_UDamageable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PWCONTRACTS_API UClass* Z_Construct_UClass_UDamageable_NoRegister(); \
public: \
	DECLARE_CLASS2(UDamageable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PWContracts"), Z_Construct_UClass_UDamageable_NoRegister) \
	DECLARE_SERIALIZER(UDamageable)


#define FID_ProjectWTps_Plugins_PWContracts_Source_PWContracts_Public_Ability_IDamageable_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ProjectWTps_Plugins_PWContracts_Source_PWContracts_Public_Ability_IDamageable_h_12_GENERATED_UINTERFACE_BODY() \
	FID_ProjectWTps_Plugins_PWContracts_Source_PWContracts_Public_Ability_IDamageable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectWTps_Plugins_PWContracts_Source_PWContracts_Public_Ability_IDamageable_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDamageable() {} \
public: \
	typedef UDamageable UClassType; \
	typedef IDamageable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ProjectWTps_Plugins_PWContracts_Source_PWContracts_Public_Ability_IDamageable_h_9_PROLOG
#define FID_ProjectWTps_Plugins_PWContracts_Source_PWContracts_Public_Ability_IDamageable_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectWTps_Plugins_PWContracts_Source_PWContracts_Public_Ability_IDamageable_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDamageable;

// ********** End Interface UDamageable ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectWTps_Plugins_PWContracts_Source_PWContracts_Public_Ability_IDamageable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
