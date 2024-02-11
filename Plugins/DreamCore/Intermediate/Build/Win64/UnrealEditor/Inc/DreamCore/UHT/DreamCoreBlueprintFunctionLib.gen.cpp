// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamCore/Public/DreamCoreBlueprintFunctionLib.h"
#include "DreamCore/Public/Data/DreamCoreStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamCoreBlueprintFunctionLib() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DREAMCORE_API UClass* Z_Construct_UClass_UDreamCoreBlueprintFunctionLib();
	DREAMCORE_API UClass* Z_Construct_UClass_UDreamCoreBlueprintFunctionLib_NoRegister();
	DREAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDWorldInfo();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DreamCore();
// End Cross Module References
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execWriteRotator)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_section);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_STRUCT(FRotator,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDreamCoreBlueprintFunctionLib::WriteRotator(Z_Param_section,Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execWriteVector)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_section);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_STRUCT(FVector,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDreamCoreBlueprintFunctionLib::WriteVector(Z_Param_section,Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execWriteString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_section);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDreamCoreBlueprintFunctionLib::WriteString(Z_Param_section,Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execWriteBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_section);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDreamCoreBlueprintFunctionLib::WriteBool(Z_Param_section,Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execWriteFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_section);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDreamCoreBlueprintFunctionLib::WriteFloat(Z_Param_section,Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execWriteInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_section);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDreamCoreBlueprintFunctionLib::WriteInt(Z_Param_section,Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execGetRotator)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_section);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UDreamCoreBlueprintFunctionLib::GetRotator(Z_Param_section,Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execReaVector)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_section);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UDreamCoreBlueprintFunctionLib::ReaVector(Z_Param_section,Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execReadString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_section);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDreamCoreBlueprintFunctionLib::ReadString(Z_Param_section,Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execReadBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_section);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDreamCoreBlueprintFunctionLib::ReadBool(Z_Param_section,Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execReadFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_section);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDreamCoreBlueprintFunctionLib::ReadFloat(Z_Param_section,Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execReadInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_section);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDreamCoreBlueprintFunctionLib::ReadInt(Z_Param_section,Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execAllSectionKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_section);
		P_GET_TARRAY_REF(FString,Z_Param_Out_keys);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDreamCoreBlueprintFunctionLib::AllSectionKey(Z_Param_section,Z_Param_Out_keys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execAllSection)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_sections);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDreamCoreBlueprintFunctionLib::AllSection(Z_Param_Out_sections);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execSaveIniFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_directory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDreamCoreBlueprintFunctionLib::SaveIniFile(Z_Param_fileName,Z_Param_directory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execLoadIniFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_directory);
		P_GET_UBOOL(Z_Param_autoCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDreamCoreBlueprintFunctionLib::LoadIniFile(Z_Param_fileName,Z_Param_directory,Z_Param_autoCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execNormalizeNumber5)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDreamCoreBlueprintFunctionLib::NormalizeNumber5(Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execNormalizeNumber4)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDreamCoreBlueprintFunctionLib::NormalizeNumber4(Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execNormalizeNumber3)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDreamCoreBlueprintFunctionLib::NormalizeNumber3(Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execNormalizeNumber2)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDreamCoreBlueprintFunctionLib::NormalizeNumber2(Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execGetWorldInfo)
	{
		P_GET_STRUCT(FDWorldInfo,Z_Param_WorldInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UWorld>*)Z_Param__Result=UDreamCoreBlueprintFunctionLib::GetWorldInfo(Z_Param_WorldInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamCoreBlueprintFunctionLib::execWorldInfoToSoftObjectPath)
	{
		P_GET_STRUCT(FDWorldInfo,Z_Param_WorldInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSoftObjectPath*)Z_Param__Result=UDreamCoreBlueprintFunctionLib::WorldInfoToSoftObjectPath(Z_Param_WorldInfo);
		P_NATIVE_END;
	}
	void UDreamCoreBlueprintFunctionLib::StaticRegisterNativesUDreamCoreBlueprintFunctionLib()
	{
		UClass* Class = UDreamCoreBlueprintFunctionLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllSection", &UDreamCoreBlueprintFunctionLib::execAllSection },
			{ "AllSectionKey", &UDreamCoreBlueprintFunctionLib::execAllSectionKey },
			{ "GetRotator", &UDreamCoreBlueprintFunctionLib::execGetRotator },
			{ "GetWorldInfo", &UDreamCoreBlueprintFunctionLib::execGetWorldInfo },
			{ "LoadIniFile", &UDreamCoreBlueprintFunctionLib::execLoadIniFile },
			{ "NormalizeNumber2", &UDreamCoreBlueprintFunctionLib::execNormalizeNumber2 },
			{ "NormalizeNumber3", &UDreamCoreBlueprintFunctionLib::execNormalizeNumber3 },
			{ "NormalizeNumber4", &UDreamCoreBlueprintFunctionLib::execNormalizeNumber4 },
			{ "NormalizeNumber5", &UDreamCoreBlueprintFunctionLib::execNormalizeNumber5 },
			{ "ReadBool", &UDreamCoreBlueprintFunctionLib::execReadBool },
			{ "ReadFloat", &UDreamCoreBlueprintFunctionLib::execReadFloat },
			{ "ReadInt", &UDreamCoreBlueprintFunctionLib::execReadInt },
			{ "ReadString", &UDreamCoreBlueprintFunctionLib::execReadString },
			{ "ReaVector", &UDreamCoreBlueprintFunctionLib::execReaVector },
			{ "SaveIniFile", &UDreamCoreBlueprintFunctionLib::execSaveIniFile },
			{ "WorldInfoToSoftObjectPath", &UDreamCoreBlueprintFunctionLib::execWorldInfoToSoftObjectPath },
			{ "WriteBool", &UDreamCoreBlueprintFunctionLib::execWriteBool },
			{ "WriteFloat", &UDreamCoreBlueprintFunctionLib::execWriteFloat },
			{ "WriteInt", &UDreamCoreBlueprintFunctionLib::execWriteInt },
			{ "WriteRotator", &UDreamCoreBlueprintFunctionLib::execWriteRotator },
			{ "WriteString", &UDreamCoreBlueprintFunctionLib::execWriteString },
			{ "WriteVector", &UDreamCoreBlueprintFunctionLib::execWriteVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSection_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventAllSection_Parms
		{
			TArray<FString> sections;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_sections_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_sections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSection_Statics::NewProp_sections_Inner = { "sections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSection_Statics::NewProp_sections = { "sections", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventAllSection_Parms, sections), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSection_Statics::NewProp_sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSection_Statics::NewProp_sections,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "INI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xbb\xe5\x8f\x96\xe6\x89\x80\xe6\x9c\x89 Section\n" },
#endif
		{ "DisplayName", "\xe8\xaf\xbb\xe5\x8f\x96\xe6\x89\x80\xe6\x9c\x89\xe6\x9d\xa1\xe7\x9b\xae" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xbb\xe5\x8f\x96\xe6\x89\x80\xe6\x9c\x89 Section" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "AllSection", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSection_Statics::DreamCoreBlueprintFunctionLib_eventAllSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSection_Statics::DreamCoreBlueprintFunctionLib_eventAllSection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventAllSectionKey_Parms
		{
			FString section;
			TArray<FString> keys;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_section;
		static const UECodeGen_Private::FStrPropertyParams NewProp_keys_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_keys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventAllSectionKey_Parms, section), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey_Statics::NewProp_keys_Inner = { "keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey_Statics::NewProp_keys = { "keys", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventAllSectionKey_Parms, keys), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey_Statics::NewProp_section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey_Statics::NewProp_keys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey_Statics::NewProp_keys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "INI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xbb\xe5\x8f\x96\xe6\x89\x80\xe6\x9c\x89\xe8\x8a\x82\xe7\x82\xb9\xe5\x86\x85\xe5\xae\xb9\n" },
#endif
		{ "DisplayName", "\xe8\xaf\xbb\xe5\x8f\x96\xe6\x89\x80\xe6\x9c\x89\xe6\x9d\xa1\xe7\x9b\xae\xe5\x86\x85\xe5\xae\xb9" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xbb\xe5\x8f\x96\xe6\x89\x80\xe6\x9c\x89\xe8\x8a\x82\xe7\x82\xb9\xe5\x86\x85\xe5\xae\xb9" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "AllSectionKey", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey_Statics::DreamCoreBlueprintFunctionLib_eventAllSectionKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey_Statics::DreamCoreBlueprintFunctionLib_eventAllSectionKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventGetRotator_Parms
		{
			FString section;
			FString key;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_section;
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventGetRotator_Parms, section), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventGetRotator_Parms, key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventGetRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator_Statics::NewProp_section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "INI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xbb\xe5\x8f\x96 Rotator\n" },
#endif
		{ "DisplayName", "\xe8\xaf\xbb\xe5\x8f\x96(ROTATOR)" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xbb\xe5\x8f\x96 Rotator" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "GetRotator", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator_Statics::DreamCoreBlueprintFunctionLib_eventGetRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator_Statics::DreamCoreBlueprintFunctionLib_eventGetRotator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetWorldInfo_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventGetWorldInfo_Parms
		{
			FDWorldInfo WorldInfo;
			TSoftObjectPtr<UWorld> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldInfo;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetWorldInfo_Statics::NewProp_WorldInfo = { "WorldInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventGetWorldInfo_Parms, WorldInfo), Z_Construct_UScriptStruct_FDWorldInfo, METADATA_PARAMS(0, nullptr) }; // 1050516807
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetWorldInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventGetWorldInfo_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetWorldInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetWorldInfo_Statics::NewProp_WorldInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetWorldInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetWorldInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tools" },
		{ "DisplayName", "GetWorld" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetWorldInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "GetWorldInfo", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetWorldInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetWorldInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetWorldInfo_Statics::DreamCoreBlueprintFunctionLib_eventGetWorldInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetWorldInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetWorldInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetWorldInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetWorldInfo_Statics::DreamCoreBlueprintFunctionLib_eventGetWorldInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetWorldInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetWorldInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventLoadIniFile_Parms
		{
			FString fileName;
			FString directory;
			bool autoCreate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_directory;
		static void NewProp_autoCreate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_autoCreate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventLoadIniFile_Parms, fileName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::NewProp_directory = { "directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventLoadIniFile_Parms, directory), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::NewProp_autoCreate_SetBit(void* Obj)
	{
		((DreamCoreBlueprintFunctionLib_eventLoadIniFile_Parms*)Obj)->autoCreate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::NewProp_autoCreate = { "autoCreate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DreamCoreBlueprintFunctionLib_eventLoadIniFile_Parms), &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::NewProp_autoCreate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DreamCoreBlueprintFunctionLib_eventLoadIniFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DreamCoreBlueprintFunctionLib_eventLoadIniFile_Parms), &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::NewProp_directory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::NewProp_autoCreate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "INI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8a\xa0\xe8\xbd\xbd\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\x09\n" },
#endif
		{ "CPP_Default_autoCreate", "false" },
		{ "DisplayName", "\xe5\x8a\xa0\xe8\xbd\xbd\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa0\xe8\xbd\xbd\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "LoadIniFile", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::DreamCoreBlueprintFunctionLib_eventLoadIniFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::DreamCoreBlueprintFunctionLib_eventLoadIniFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber2_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventNormalizeNumber2_Parms
		{
			int32 Number;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Number;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber2_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventNormalizeNumber2_Parms, Number), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventNormalizeNumber2_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber2_Statics::NewProp_Number,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tools|String" },
		{ "DisplayName", "\xe8\xa7\x84\xe6\x95\xb4\xe5\x8c\x96\xe6\x95\xb0\xe5\xad\x97(2)" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "NormalizeNumber2", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber2_Statics::DreamCoreBlueprintFunctionLib_eventNormalizeNumber2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber2_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber2_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber2_Statics::DreamCoreBlueprintFunctionLib_eventNormalizeNumber2_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber3_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventNormalizeNumber3_Parms
		{
			int32 Number;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Number;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber3_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventNormalizeNumber3_Parms, Number), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventNormalizeNumber3_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber3_Statics::NewProp_Number,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber3_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tools|String" },
		{ "DisplayName", "\xe8\xa7\x84\xe6\x95\xb4\xe5\x8c\x96\xe6\x95\xb0\xe5\xad\x97(3)" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "NormalizeNumber3", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber3_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber3_Statics::DreamCoreBlueprintFunctionLib_eventNormalizeNumber3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber3_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber3_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber3_Statics::DreamCoreBlueprintFunctionLib_eventNormalizeNumber3_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber4_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventNormalizeNumber4_Parms
		{
			int32 Number;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Number;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber4_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventNormalizeNumber4_Parms, Number), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventNormalizeNumber4_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber4_Statics::NewProp_Number,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber4_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tools|String" },
		{ "DisplayName", "\xe8\xa7\x84\xe6\x95\xb4\xe5\x8c\x96\xe6\x95\xb0\xe5\xad\x97(4)" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "NormalizeNumber4", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber4_Statics::DreamCoreBlueprintFunctionLib_eventNormalizeNumber4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber4_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber4_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber4_Statics::DreamCoreBlueprintFunctionLib_eventNormalizeNumber4_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber5_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventNormalizeNumber5_Parms
		{
			int32 Number;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Number;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber5_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventNormalizeNumber5_Parms, Number), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber5_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventNormalizeNumber5_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber5_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber5_Statics::NewProp_Number,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber5_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber5_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tools|String" },
		{ "DisplayName", "\xe8\xa7\x84\xe6\x95\xb4\xe5\x8c\x96\xe6\x95\xb0\xe5\xad\x97(5)" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber5_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "NormalizeNumber5", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber5_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber5_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber5_Statics::DreamCoreBlueprintFunctionLib_eventNormalizeNumber5_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber5_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber5_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber5_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber5_Statics::DreamCoreBlueprintFunctionLib_eventNormalizeNumber5_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber5()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber5_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventReadBool_Parms
		{
			FString section;
			FString key;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_section;
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventReadBool_Parms, section), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventReadBool_Parms, key), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DreamCoreBlueprintFunctionLib_eventReadBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DreamCoreBlueprintFunctionLib_eventReadBool_Parms), &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::NewProp_section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "INI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xbb\xe5\x8f\x96 bool\n" },
#endif
		{ "DisplayName", "\xe8\xaf\xbb\xe5\x8f\x96(BOOL)" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xbb\xe5\x8f\x96 bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "ReadBool", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::DreamCoreBlueprintFunctionLib_eventReadBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::DreamCoreBlueprintFunctionLib_eventReadBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventReadFloat_Parms
		{
			FString section;
			FString key;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_section;
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventReadFloat_Parms, section), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventReadFloat_Parms, key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventReadFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat_Statics::NewProp_section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "INI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xbb\xe5\x8f\x96 float\n" },
#endif
		{ "DisplayName", "\xe8\xaf\xbb\xe5\x8f\x96(FLOAT)" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xbb\xe5\x8f\x96 float" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "ReadFloat", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat_Statics::DreamCoreBlueprintFunctionLib_eventReadFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat_Statics::DreamCoreBlueprintFunctionLib_eventReadFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventReadInt_Parms
		{
			FString section;
			FString key;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_section;
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventReadInt_Parms, section), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventReadInt_Parms, key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventReadInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt_Statics::NewProp_section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "INI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xbb\xe5\x8f\x96 int\n" },
#endif
		{ "DisplayName", "\xe8\xaf\xbb\xe5\x8f\x96(INT)" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xbb\xe5\x8f\x96 int" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "ReadInt", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt_Statics::DreamCoreBlueprintFunctionLib_eventReadInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt_Statics::DreamCoreBlueprintFunctionLib_eventReadInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventReadString_Parms
		{
			FString section;
			FString key;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_section;
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventReadString_Parms, section), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventReadString_Parms, key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventReadString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString_Statics::NewProp_section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString_Statics::Function_MetaDataParams[] = {
		{ "Category", "INI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xbb\xe5\x8f\x96 string\n" },
#endif
		{ "DisplayName", "\xe8\xaf\xbb\xe5\x8f\x96(STRING)" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xbb\xe5\x8f\x96 string" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "ReadString", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString_Statics::DreamCoreBlueprintFunctionLib_eventReadString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString_Statics::DreamCoreBlueprintFunctionLib_eventReadString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventReaVector_Parms
		{
			FString section;
			FString key;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_section;
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventReaVector_Parms, section), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventReaVector_Parms, key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventReaVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector_Statics::NewProp_section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "INI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xbb\xe5\x8f\x96 Vector\n" },
#endif
		{ "DisplayName", "\xe8\xaf\xbb\xe5\x8f\x96(VECTOR)" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xbb\xe5\x8f\x96 Vector" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "ReaVector", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector_Statics::DreamCoreBlueprintFunctionLib_eventReaVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector_Statics::DreamCoreBlueprintFunctionLib_eventReaVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventSaveIniFile_Parms
		{
			FString fileName;
			FString directory;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_directory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventSaveIniFile_Parms, fileName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::NewProp_directory = { "directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventSaveIniFile_Parms, directory), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DreamCoreBlueprintFunctionLib_eventSaveIniFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DreamCoreBlueprintFunctionLib_eventSaveIniFile_Parms), &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::NewProp_directory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "INI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbf\x9d\xe5\xad\x98\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\n" },
#endif
		{ "DisplayName", "\xe4\xbf\x9d\xe5\xad\x98\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "SaveIniFile", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::DreamCoreBlueprintFunctionLib_eventSaveIniFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::DreamCoreBlueprintFunctionLib_eventSaveIniFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WorldInfoToSoftObjectPath_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct DreamCoreBlueprintFunctionLib_eventWorldInfoToSoftObjectPath_Parms
		{
			FDWorldInfo WorldInfo;
			FSoftObjectPath ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WorldInfoToSoftObjectPath_Statics::NewProp_WorldInfo = { "WorldInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWorldInfoToSoftObjectPath_Parms, WorldInfo), Z_Construct_UScriptStruct_FDWorldInfo, METADATA_PARAMS(0, nullptr) }; // 1050516807
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WorldInfoToSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWorldInfoToSoftObjectPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WorldInfoToSoftObjectPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WorldInfoToSoftObjectPath_Statics::NewProp_WorldInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WorldInfoToSoftObjectPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WorldInfoToSoftObjectPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tools" },
		{ "DisplayName", "D\xe4\xb8\x96\xe7\x95\x8c\xe4\xbf\xa1\xe6\x81\xafTo\xe8\xbd\xaf\xe5\xaf\xb9\xe8\xb1\xa1\xe5\xbc\x95\xe7\x94\xa8\xe8\xb7\xaf\xe5\xbe\x84" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WorldInfoToSoftObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "WorldInfoToSoftObjectPath", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WorldInfoToSoftObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WorldInfoToSoftObjectPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WorldInfoToSoftObjectPath_Statics::DreamCoreBlueprintFunctionLib_eventWorldInfoToSoftObjectPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WorldInfoToSoftObjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WorldInfoToSoftObjectPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WorldInfoToSoftObjectPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WorldInfoToSoftObjectPath_Statics::DreamCoreBlueprintFunctionLib_eventWorldInfoToSoftObjectPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WorldInfoToSoftObjectPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WorldInfoToSoftObjectPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventWriteBool_Parms
		{
			FString section;
			FString key;
			bool value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_section;
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
		static void NewProp_value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWriteBool_Parms, section), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWriteBool_Parms, key), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::NewProp_value_SetBit(void* Obj)
	{
		((DreamCoreBlueprintFunctionLib_eventWriteBool_Parms*)Obj)->value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DreamCoreBlueprintFunctionLib_eventWriteBool_Parms), &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::NewProp_value_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::NewProp_section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "INI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x86\x99\xe5\x85\xa5 bool\n" },
#endif
		{ "DisplayName", "\xe5\x86\x99\xe5\x85\xa5(BOOL)" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\x99\xe5\x85\xa5 bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "WriteBool", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::DreamCoreBlueprintFunctionLib_eventWriteBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::DreamCoreBlueprintFunctionLib_eventWriteBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventWriteFloat_Parms
		{
			FString section;
			FString key;
			float value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_section;
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWriteFloat_Parms, section), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWriteFloat_Parms, key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWriteFloat_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat_Statics::NewProp_section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "INI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x86\x99\xe5\x85\xa5 float\n" },
#endif
		{ "DisplayName", "\xe5\x86\x99\xe5\x85\xa5(FLOAT)" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\x99\xe5\x85\xa5 float" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "WriteFloat", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat_Statics::DreamCoreBlueprintFunctionLib_eventWriteFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat_Statics::DreamCoreBlueprintFunctionLib_eventWriteFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventWriteInt_Parms
		{
			FString section;
			FString key;
			int32 value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_section;
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWriteInt_Parms, section), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWriteInt_Parms, key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWriteInt_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt_Statics::NewProp_section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "INI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x86\x99\xe5\x85\xa5 int\n" },
#endif
		{ "DisplayName", "\xe5\x86\x99\xe5\x85\xa5(INT)" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\x99\xe5\x85\xa5 int" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "WriteInt", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt_Statics::DreamCoreBlueprintFunctionLib_eventWriteInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt_Statics::DreamCoreBlueprintFunctionLib_eventWriteInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventWriteRotator_Parms
		{
			FString section;
			FString key;
			FRotator value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_section;
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWriteRotator_Parms, section), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWriteRotator_Parms, key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWriteRotator_Parms, value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator_Statics::NewProp_section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "INI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x86\x99\xe5\x85\xa5 Rotator\n" },
#endif
		{ "DisplayName", "\xe5\x86\x99\xe5\x85\xa5(ROTATOR)" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\x99\xe5\x85\xa5 Rotator" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "WriteRotator", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator_Statics::DreamCoreBlueprintFunctionLib_eventWriteRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator_Statics::DreamCoreBlueprintFunctionLib_eventWriteRotator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventWriteString_Parms
		{
			FString section;
			FString key;
			FString value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_section;
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWriteString_Parms, section), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWriteString_Parms, key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWriteString_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString_Statics::NewProp_section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString_Statics::Function_MetaDataParams[] = {
		{ "Category", "INI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x86\x99\xe5\x85\xa5 string\n" },
#endif
		{ "DisplayName", "\xe5\x86\x99\xe5\x85\xa5(STRING)" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\x99\xe5\x85\xa5 string" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "WriteString", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString_Statics::DreamCoreBlueprintFunctionLib_eventWriteString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString_Statics::DreamCoreBlueprintFunctionLib_eventWriteString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector_Statics
	{
		struct DreamCoreBlueprintFunctionLib_eventWriteVector_Parms
		{
			FString section;
			FString key;
			FVector value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_section;
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWriteVector_Parms, section), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWriteVector_Parms, key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamCoreBlueprintFunctionLib_eventWriteVector_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector_Statics::NewProp_section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "INI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x86\x99\xe5\x85\xa5 Vector\n" },
#endif
		{ "DisplayName", "\xe5\x86\x99\xe5\x85\xa5(VECTOR)" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\x99\xe5\x85\xa5 Vector" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, nullptr, "WriteVector", nullptr, nullptr, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector_Statics::DreamCoreBlueprintFunctionLib_eventWriteVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector_Statics::DreamCoreBlueprintFunctionLib_eventWriteVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDreamCoreBlueprintFunctionLib);
	UClass* Z_Construct_UClass_UDreamCoreBlueprintFunctionLib_NoRegister()
	{
		return UDreamCoreBlueprintFunctionLib::StaticClass();
	}
	struct Z_Construct_UClass_UDreamCoreBlueprintFunctionLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDreamCoreBlueprintFunctionLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamCoreBlueprintFunctionLib_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDreamCoreBlueprintFunctionLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSection, "AllSection" }, // 1965541543
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_AllSectionKey, "AllSectionKey" }, // 1792871349
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetRotator, "GetRotator" }, // 563148193
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_GetWorldInfo, "GetWorldInfo" }, // 1859295362
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_LoadIniFile, "LoadIniFile" }, // 2053349920
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber2, "NormalizeNumber2" }, // 1940775727
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber3, "NormalizeNumber3" }, // 3068240506
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber4, "NormalizeNumber4" }, // 4243334687
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_NormalizeNumber5, "NormalizeNumber5" }, // 2373865969
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadBool, "ReadBool" }, // 2563561649
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadFloat, "ReadFloat" }, // 3490816107
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadInt, "ReadInt" }, // 3274799755
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReadString, "ReadString" }, // 2980046086
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_ReaVector, "ReaVector" }, // 829155937
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_SaveIniFile, "SaveIniFile" }, // 820912390
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WorldInfoToSoftObjectPath, "WorldInfoToSoftObjectPath" }, // 61502754
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteBool, "WriteBool" }, // 3731513883
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteFloat, "WriteFloat" }, // 159161211
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteInt, "WriteInt" }, // 3260718679
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteRotator, "WriteRotator" }, // 2659321522
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteString, "WriteString" }, // 3744831788
		{ &Z_Construct_UFunction_UDreamCoreBlueprintFunctionLib_WriteVector, "WriteVector" }, // 2155147240
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamCoreBlueprintFunctionLib_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDreamCoreBlueprintFunctionLib_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "DreamCore\xe8\x93\x9d\xe5\x9b\xbe\xe5\x87\xbd\xe6\x95\xb0\xe5\xba\x93" },
		{ "IncludePath", "DreamCoreBlueprintFunctionLib.h" },
		{ "ModuleRelativePath", "Public/DreamCoreBlueprintFunctionLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDreamCoreBlueprintFunctionLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDreamCoreBlueprintFunctionLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDreamCoreBlueprintFunctionLib_Statics::ClassParams = {
		&UDreamCoreBlueprintFunctionLib::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamCoreBlueprintFunctionLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UDreamCoreBlueprintFunctionLib_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDreamCoreBlueprintFunctionLib()
	{
		if (!Z_Registration_Info_UClass_UDreamCoreBlueprintFunctionLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDreamCoreBlueprintFunctionLib.OuterSingleton, Z_Construct_UClass_UDreamCoreBlueprintFunctionLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDreamCoreBlueprintFunctionLib.OuterSingleton;
	}
	template<> DREAMCORE_API UClass* StaticClass<UDreamCoreBlueprintFunctionLib>()
	{
		return UDreamCoreBlueprintFunctionLib::StaticClass();
	}
	UDreamCoreBlueprintFunctionLib::UDreamCoreBlueprintFunctionLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamCoreBlueprintFunctionLib);
	UDreamCoreBlueprintFunctionLib::~UDreamCoreBlueprintFunctionLib() {}
	struct Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DreamCoreBlueprintFunctionLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DreamCoreBlueprintFunctionLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDreamCoreBlueprintFunctionLib, UDreamCoreBlueprintFunctionLib::StaticClass, TEXT("UDreamCoreBlueprintFunctionLib"), &Z_Registration_Info_UClass_UDreamCoreBlueprintFunctionLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDreamCoreBlueprintFunctionLib), 4048701166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DreamCoreBlueprintFunctionLib_h_1528620158(TEXT("/Script/DreamCore"),
		Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DreamCoreBlueprintFunctionLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DreamCoreBlueprintFunctionLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
