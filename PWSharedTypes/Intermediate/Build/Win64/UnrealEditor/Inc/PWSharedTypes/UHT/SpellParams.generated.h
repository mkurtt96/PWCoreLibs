// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ability/SpellParams.h"

#ifdef PWSHAREDTYPES_SpellParams_generated_h
#error "SpellParams.generated.h already included, missing '#pragma once' in SpellParams.h"
#endif
#define PWSHAREDTYPES_SpellParams_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USpellParamsBase *********************************************************
#define FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_Ability_SpellParams_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_UniqueId);


PWSHAREDTYPES_API UClass* Z_Construct_UClass_USpellParamsBase_NoRegister();

#define FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_Ability_SpellParams_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpellParamsBase(); \
	friend struct Z_Construct_UClass_USpellParamsBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PWSHAREDTYPES_API UClass* Z_Construct_UClass_USpellParamsBase_NoRegister(); \
public: \
	DECLARE_CLASS2(USpellParamsBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PWSharedTypes"), Z_Construct_UClass_USpellParamsBase_NoRegister) \
	DECLARE_SERIALIZER(USpellParamsBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SourcePlayerUniqueId=NETFIELD_REP_START, \
		TargetCollisionTypes, \
		AbilityLevel, \
		NETFIELD_REP_END=AbilityLevel	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(USpellParamsBase) \
public:


#define FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_Ability_SpellParams_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpellParamsBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpellParamsBase(USpellParamsBase&&) = delete; \
	USpellParamsBase(const USpellParamsBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpellParamsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpellParamsBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpellParamsBase) \
	NO_API virtual ~USpellParamsBase();


#define FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_Ability_SpellParams_h_26_PROLOG
#define FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_Ability_SpellParams_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_Ability_SpellParams_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_Ability_SpellParams_h_29_INCLASS_NO_PURE_DECLS \
	FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_Ability_SpellParams_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpellParamsBase;

// ********** End Class USpellParamsBase ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_Ability_SpellParams_h

// ********** Begin Enum ERelationMask *************************************************************
#define FOREACH_ENUM_ERELATIONMASK(op) \
	op(ERelationMask::None) \
	op(ERelationMask::Self) \
	op(ERelationMask::Ally) \
	op(ERelationMask::Enemy) \
	op(ERelationMask::Neutral) \
	op(ERelationMask::All) 

enum class ERelationMask : uint8;
template<> struct TIsUEnumClass<ERelationMask> { enum { Value = true }; };
template<> PWSHAREDTYPES_API UEnum* StaticEnum<ERelationMask>();
// ********** End Enum ERelationMask ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
