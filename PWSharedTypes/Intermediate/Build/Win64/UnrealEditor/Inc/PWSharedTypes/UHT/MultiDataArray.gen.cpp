// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiDataArray.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMultiDataArray() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PWSHAREDTYPES_API UClass* Z_Construct_UClass_UMultiDataArray();
PWSHAREDTYPES_API UClass* Z_Construct_UClass_UMultiDataArray_NoRegister();
PWSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FMultiDataValue();
UPackage* Z_Construct_UPackage__Script_PWSharedTypes();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMultiDataValue ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMultiDataValue;
class UScriptStruct* FMultiDataValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMultiDataValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMultiDataValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiDataValue, (UObject*)Z_Construct_UPackage__Script_PWSharedTypes(), TEXT("MultiDataValue"));
	}
	return Z_Registration_Info_UScriptStruct_FMultiDataValue.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMultiDataValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiDataArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiDataArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiDataArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiDataArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiDataArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiDataArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
	static void NewProp_BoolValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiDataValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiDataValue_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiDataValue, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMultiDataValue_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiDataValue, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValue_MetaData), NewProp_FloatValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiDataValue_Statics::NewProp_VectorValue = { "VectorValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiDataValue, VectorValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorValue_MetaData), NewProp_VectorValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMultiDataValue_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiDataValue, IntValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValue_MetaData), NewProp_IntValue_MetaData) };
void Z_Construct_UScriptStruct_FMultiDataValue_Statics::NewProp_BoolValue_SetBit(void* Obj)
{
	((FMultiDataValue*)Obj)->BoolValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiDataValue_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMultiDataValue), &Z_Construct_UScriptStruct_FMultiDataValue_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolValue_MetaData), NewProp_BoolValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiDataValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiDataValue_Statics::NewProp_StringValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiDataValue_Statics::NewProp_FloatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiDataValue_Statics::NewProp_VectorValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiDataValue_Statics::NewProp_IntValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiDataValue_Statics::NewProp_BoolValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiDataValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiDataValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PWSharedTypes,
	nullptr,
	&NewStructOps,
	"MultiDataValue",
	Z_Construct_UScriptStruct_FMultiDataValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiDataValue_Statics::PropPointers),
	sizeof(FMultiDataValue),
	alignof(FMultiDataValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiDataValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiDataValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMultiDataValue()
{
	if (!Z_Registration_Info_UScriptStruct_FMultiDataValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMultiDataValue.InnerSingleton, Z_Construct_UScriptStruct_FMultiDataValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMultiDataValue.InnerSingleton;
}
// ********** End ScriptStruct FMultiDataValue *****************************************************

// ********** Begin Class UMultiDataArray Function AddBool *****************************************
struct Z_Construct_UFunction_UMultiDataArray_AddBool_Statics
{
	struct MultiDataArray_eventAddBool_Parms
	{
		FString Key;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiDataArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiDataArray_AddBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiDataArray_eventAddBool_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_UMultiDataArray_AddBool_Statics::NewProp_Value_SetBit(void* Obj)
{
	((MultiDataArray_eventAddBool_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiDataArray_AddBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiDataArray_eventAddBool_Parms), &Z_Construct_UFunction_UMultiDataArray_AddBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiDataArray_AddBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_AddBool_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_AddBool_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_AddBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiDataArray_AddBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMultiDataArray, nullptr, "AddBool", Z_Construct_UFunction_UMultiDataArray_AddBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_AddBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiDataArray_AddBool_Statics::MultiDataArray_eventAddBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_AddBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiDataArray_AddBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMultiDataArray_AddBool_Statics::MultiDataArray_eventAddBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiDataArray_AddBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiDataArray_AddBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiDataArray::execAddBool)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBool(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UMultiDataArray Function AddBool *******************************************

// ********** Begin Class UMultiDataArray Function AddFloat ****************************************
struct Z_Construct_UFunction_UMultiDataArray_AddFloat_Statics
{
	struct MultiDataArray_eventAddFloat_Parms
	{
		FString Key;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiDataArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiDataArray_AddFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiDataArray_eventAddFloat_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMultiDataArray_AddFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiDataArray_eventAddFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiDataArray_AddFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_AddFloat_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_AddFloat_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_AddFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiDataArray_AddFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMultiDataArray, nullptr, "AddFloat", Z_Construct_UFunction_UMultiDataArray_AddFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_AddFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiDataArray_AddFloat_Statics::MultiDataArray_eventAddFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_AddFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiDataArray_AddFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMultiDataArray_AddFloat_Statics::MultiDataArray_eventAddFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiDataArray_AddFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiDataArray_AddFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiDataArray::execAddFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFloat(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UMultiDataArray Function AddFloat ******************************************

// ********** Begin Class UMultiDataArray Function AddInt ******************************************
struct Z_Construct_UFunction_UMultiDataArray_AddInt_Statics
{
	struct MultiDataArray_eventAddInt_Parms
	{
		FString Key;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiDataArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiDataArray_AddInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiDataArray_eventAddInt_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMultiDataArray_AddInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiDataArray_eventAddInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiDataArray_AddInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_AddInt_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_AddInt_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_AddInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiDataArray_AddInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMultiDataArray, nullptr, "AddInt", Z_Construct_UFunction_UMultiDataArray_AddInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_AddInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiDataArray_AddInt_Statics::MultiDataArray_eventAddInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_AddInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiDataArray_AddInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMultiDataArray_AddInt_Statics::MultiDataArray_eventAddInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiDataArray_AddInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiDataArray_AddInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiDataArray::execAddInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddInt(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UMultiDataArray Function AddInt ********************************************

// ********** Begin Class UMultiDataArray Function AddString ***************************************
struct Z_Construct_UFunction_UMultiDataArray_AddString_Statics
{
	struct MultiDataArray_eventAddString_Parms
	{
		FString Key;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiDataArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiDataArray_AddString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiDataArray_eventAddString_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiDataArray_AddString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiDataArray_eventAddString_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiDataArray_AddString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_AddString_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_AddString_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_AddString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiDataArray_AddString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMultiDataArray, nullptr, "AddString", Z_Construct_UFunction_UMultiDataArray_AddString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_AddString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiDataArray_AddString_Statics::MultiDataArray_eventAddString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_AddString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiDataArray_AddString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMultiDataArray_AddString_Statics::MultiDataArray_eventAddString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiDataArray_AddString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiDataArray_AddString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiDataArray::execAddString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddString(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UMultiDataArray Function AddString *****************************************

// ********** Begin Class UMultiDataArray Function AddVector ***************************************
struct Z_Construct_UFunction_UMultiDataArray_AddVector_Statics
{
	struct MultiDataArray_eventAddVector_Parms
	{
		FString Key;
		FVector Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiDataArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiDataArray_AddVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiDataArray_eventAddVector_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiDataArray_AddVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiDataArray_eventAddVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiDataArray_AddVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_AddVector_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_AddVector_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_AddVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiDataArray_AddVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMultiDataArray, nullptr, "AddVector", Z_Construct_UFunction_UMultiDataArray_AddVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_AddVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiDataArray_AddVector_Statics::MultiDataArray_eventAddVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_AddVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiDataArray_AddVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMultiDataArray_AddVector_Statics::MultiDataArray_eventAddVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiDataArray_AddVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiDataArray_AddVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiDataArray::execAddVector)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddVector(Z_Param_Key,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UMultiDataArray Function AddVector *****************************************

// ********** Begin Class UMultiDataArray Function GetBool *****************************************
struct Z_Construct_UFunction_UMultiDataArray_GetBool_Statics
{
	struct MultiDataArray_eventGetBool_Parms
	{
		FString Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiDataArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiDataArray_GetBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiDataArray_eventGetBool_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_UMultiDataArray_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiDataArray_eventGetBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiDataArray_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiDataArray_eventGetBool_Parms), &Z_Construct_UFunction_UMultiDataArray_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiDataArray_GetBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_GetBool_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_GetBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_GetBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiDataArray_GetBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMultiDataArray, nullptr, "GetBool", Z_Construct_UFunction_UMultiDataArray_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_GetBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiDataArray_GetBool_Statics::MultiDataArray_eventGetBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_GetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiDataArray_GetBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMultiDataArray_GetBool_Statics::MultiDataArray_eventGetBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiDataArray_GetBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiDataArray_GetBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiDataArray::execGetBool)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBool(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UMultiDataArray Function GetBool *******************************************

// ********** Begin Class UMultiDataArray Function GetFloat ****************************************
struct Z_Construct_UFunction_UMultiDataArray_GetFloat_Statics
{
	struct MultiDataArray_eventGetFloat_Parms
	{
		FString Key;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiDataArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiDataArray_GetFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiDataArray_eventGetFloat_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMultiDataArray_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiDataArray_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiDataArray_GetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_GetFloat_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_GetFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_GetFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiDataArray_GetFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMultiDataArray, nullptr, "GetFloat", Z_Construct_UFunction_UMultiDataArray_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_GetFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiDataArray_GetFloat_Statics::MultiDataArray_eventGetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_GetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiDataArray_GetFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMultiDataArray_GetFloat_Statics::MultiDataArray_eventGetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiDataArray_GetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiDataArray_GetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiDataArray::execGetFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFloat(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UMultiDataArray Function GetFloat ******************************************

// ********** Begin Class UMultiDataArray Function GetInt ******************************************
struct Z_Construct_UFunction_UMultiDataArray_GetInt_Statics
{
	struct MultiDataArray_eventGetInt_Parms
	{
		FString Key;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiDataArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiDataArray_GetInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiDataArray_eventGetInt_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMultiDataArray_GetInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiDataArray_eventGetInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiDataArray_GetInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_GetInt_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_GetInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_GetInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiDataArray_GetInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMultiDataArray, nullptr, "GetInt", Z_Construct_UFunction_UMultiDataArray_GetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_GetInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiDataArray_GetInt_Statics::MultiDataArray_eventGetInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_GetInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiDataArray_GetInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMultiDataArray_GetInt_Statics::MultiDataArray_eventGetInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiDataArray_GetInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiDataArray_GetInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiDataArray::execGetInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInt(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UMultiDataArray Function GetInt ********************************************

// ********** Begin Class UMultiDataArray Function GetString ***************************************
struct Z_Construct_UFunction_UMultiDataArray_GetString_Statics
{
	struct MultiDataArray_eventGetString_Parms
	{
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiDataArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiDataArray_GetString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiDataArray_eventGetString_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiDataArray_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiDataArray_eventGetString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiDataArray_GetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_GetString_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_GetString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_GetString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiDataArray_GetString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMultiDataArray, nullptr, "GetString", Z_Construct_UFunction_UMultiDataArray_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_GetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiDataArray_GetString_Statics::MultiDataArray_eventGetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_GetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiDataArray_GetString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMultiDataArray_GetString_Statics::MultiDataArray_eventGetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiDataArray_GetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiDataArray_GetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiDataArray::execGetString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetString(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UMultiDataArray Function GetString *****************************************

// ********** Begin Class UMultiDataArray Function GetVector ***************************************
struct Z_Construct_UFunction_UMultiDataArray_GetVector_Statics
{
	struct MultiDataArray_eventGetVector_Parms
	{
		FString Key;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiDataArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiDataArray_GetVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiDataArray_eventGetVector_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiDataArray_GetVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiDataArray_eventGetVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiDataArray_GetVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_GetVector_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiDataArray_GetVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_GetVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiDataArray_GetVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMultiDataArray, nullptr, "GetVector", Z_Construct_UFunction_UMultiDataArray_GetVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_GetVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiDataArray_GetVector_Statics::MultiDataArray_eventGetVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDataArray_GetVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiDataArray_GetVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMultiDataArray_GetVector_Statics::MultiDataArray_eventGetVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiDataArray_GetVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiDataArray_GetVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiDataArray::execGetVector)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVector(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UMultiDataArray Function GetVector *****************************************

// ********** Begin Class UMultiDataArray **********************************************************
void UMultiDataArray::StaticRegisterNativesUMultiDataArray()
{
	UClass* Class = UMultiDataArray::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBool", &UMultiDataArray::execAddBool },
		{ "AddFloat", &UMultiDataArray::execAddFloat },
		{ "AddInt", &UMultiDataArray::execAddInt },
		{ "AddString", &UMultiDataArray::execAddString },
		{ "AddVector", &UMultiDataArray::execAddVector },
		{ "GetBool", &UMultiDataArray::execGetBool },
		{ "GetFloat", &UMultiDataArray::execGetFloat },
		{ "GetInt", &UMultiDataArray::execGetInt },
		{ "GetString", &UMultiDataArray::execGetString },
		{ "GetVector", &UMultiDataArray::execGetVector },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMultiDataArray;
UClass* UMultiDataArray::GetPrivateStaticClass()
{
	using TClass = UMultiDataArray;
	if (!Z_Registration_Info_UClass_UMultiDataArray.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MultiDataArray"),
			Z_Registration_Info_UClass_UMultiDataArray.InnerSingleton,
			StaticRegisterNativesUMultiDataArray,
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
	return Z_Registration_Info_UClass_UMultiDataArray.InnerSingleton;
}
UClass* Z_Construct_UClass_UMultiDataArray_NoRegister()
{
	return UMultiDataArray::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMultiDataArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MultiDataArray.h" },
		{ "ModuleRelativePath", "Public/MultiDataArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "MultiDataArray" },
		{ "ModuleRelativePath", "Public/MultiDataArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiDataArray_AddBool, "AddBool" }, // 1200006226
		{ &Z_Construct_UFunction_UMultiDataArray_AddFloat, "AddFloat" }, // 1236728063
		{ &Z_Construct_UFunction_UMultiDataArray_AddInt, "AddInt" }, // 3718938984
		{ &Z_Construct_UFunction_UMultiDataArray_AddString, "AddString" }, // 3780588934
		{ &Z_Construct_UFunction_UMultiDataArray_AddVector, "AddVector" }, // 243270872
		{ &Z_Construct_UFunction_UMultiDataArray_GetBool, "GetBool" }, // 3228540747
		{ &Z_Construct_UFunction_UMultiDataArray_GetFloat, "GetFloat" }, // 3633608613
		{ &Z_Construct_UFunction_UMultiDataArray_GetInt, "GetInt" }, // 295313043
		{ &Z_Construct_UFunction_UMultiDataArray_GetString, "GetString" }, // 3099259816
		{ &Z_Construct_UFunction_UMultiDataArray_GetVector, "GetVector" }, // 969527671
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiDataArray>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiDataArray_Statics::NewProp_Data_ValueProp = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMultiDataValue, METADATA_PARAMS(0, nullptr) }; // 126753918
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMultiDataArray_Statics::NewProp_Data_Key_KeyProp = { "Data_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMultiDataArray_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiDataArray, Data), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 126753918
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiDataArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiDataArray_Statics::NewProp_Data_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiDataArray_Statics::NewProp_Data_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiDataArray_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiDataArray_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMultiDataArray_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PWSharedTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiDataArray_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiDataArray_Statics::ClassParams = {
	&UMultiDataArray::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMultiDataArray_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMultiDataArray_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiDataArray_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultiDataArray_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMultiDataArray()
{
	if (!Z_Registration_Info_UClass_UMultiDataArray.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiDataArray.OuterSingleton, Z_Construct_UClass_UMultiDataArray_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMultiDataArray.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiDataArray);
UMultiDataArray::~UMultiDataArray() {}
// ********** End Class UMultiDataArray ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_MultiDataArray_h__Script_PWSharedTypes_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMultiDataValue::StaticStruct, Z_Construct_UScriptStruct_FMultiDataValue_Statics::NewStructOps, TEXT("MultiDataValue"), &Z_Registration_Info_UScriptStruct_FMultiDataValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiDataValue), 126753918U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMultiDataArray, UMultiDataArray::StaticClass, TEXT("UMultiDataArray"), &Z_Registration_Info_UClass_UMultiDataArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiDataArray), 924583669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_MultiDataArray_h__Script_PWSharedTypes_849249540(TEXT("/Script/PWSharedTypes"),
	Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_MultiDataArray_h__Script_PWSharedTypes_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_MultiDataArray_h__Script_PWSharedTypes_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_MultiDataArray_h__Script_PWSharedTypes_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectWTps_Plugins_PWSharedTypes_Source_PWSharedTypes_Public_MultiDataArray_h__Script_PWSharedTypes_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
