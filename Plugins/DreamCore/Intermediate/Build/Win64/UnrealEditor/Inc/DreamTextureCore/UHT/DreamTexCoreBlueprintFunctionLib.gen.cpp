// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamTextureCore/Public/DreamTexCoreBlueprintFunctionLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamTexCoreBlueprintFunctionLib() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DREAMTEXTURECORE_API UClass* Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib();
	DREAMTEXTURECORE_API UClass* Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DreamTextureCore();
// End Cross Module References
	DEFINE_FUNCTION(UDreamTexCoreBlueprintFunctionLib::execGetTextureSize)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture2D);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=UDreamTexCoreBlueprintFunctionLib::GetTextureSize(Z_Param_Texture2D);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamTexCoreBlueprintFunctionLib::execGetTextureMainColor)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture2D);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UDreamTexCoreBlueprintFunctionLib::GetTextureMainColor(Z_Param_Texture2D);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamTexCoreBlueprintFunctionLib::execGetPixelColor)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture2D);
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UDreamTexCoreBlueprintFunctionLib::GetPixelColor(Z_Param_Texture2D,Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamTexCoreBlueprintFunctionLib::execGetAllPixelColor)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture2D);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLinearColor>*)Z_Param__Result=UDreamTexCoreBlueprintFunctionLib::GetAllPixelColor(Z_Param_Texture2D);
		P_NATIVE_END;
	}
	void UDreamTexCoreBlueprintFunctionLib::StaticRegisterNativesUDreamTexCoreBlueprintFunctionLib()
	{
		UClass* Class = UDreamTexCoreBlueprintFunctionLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllPixelColor", &UDreamTexCoreBlueprintFunctionLib::execGetAllPixelColor },
			{ "GetPixelColor", &UDreamTexCoreBlueprintFunctionLib::execGetPixelColor },
			{ "GetTextureMainColor", &UDreamTexCoreBlueprintFunctionLib::execGetTextureMainColor },
			{ "GetTextureSize", &UDreamTexCoreBlueprintFunctionLib::execGetTextureSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor_Statics
	{
		struct DreamTexCoreBlueprintFunctionLib_eventGetAllPixelColor_Parms
		{
			UTexture2D* Texture2D;
			TArray<FLinearColor> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture2D;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor_Statics::NewProp_Texture2D = { "Texture2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTexCoreBlueprintFunctionLib_eventGetAllPixelColor_Parms, Texture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTexCoreBlueprintFunctionLib_eventGetAllPixelColor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor_Statics::NewProp_Texture2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tools" },
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96Texture\xe6\x89\x80\xe6\x9c\x89\xe5\x83\x8f\xe7\xb4\xa0\xe9\xa2\x9c\xe8\x89\xb2" },
		{ "ModuleRelativePath", "Public/DreamTexCoreBlueprintFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib, nullptr, "GetAllPixelColor", nullptr, nullptr, Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor_Statics::DreamTexCoreBlueprintFunctionLib_eventGetAllPixelColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor_Statics::DreamTexCoreBlueprintFunctionLib_eventGetAllPixelColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics
	{
		struct DreamTexCoreBlueprintFunctionLib_eventGetPixelColor_Parms
		{
			UTexture2D* Texture2D;
			int32 X;
			int32 Y;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture2D;
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::NewProp_Texture2D = { "Texture2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTexCoreBlueprintFunctionLib_eventGetPixelColor_Parms, Texture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTexCoreBlueprintFunctionLib_eventGetPixelColor_Parms, X), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTexCoreBlueprintFunctionLib_eventGetPixelColor_Parms, Y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTexCoreBlueprintFunctionLib_eventGetPixelColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::NewProp_Texture2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tools" },
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96Texture\xe5\x83\x8f\xe7\xb4\xa0\xe9\xa2\x9c\xe8\x89\xb2" },
		{ "ModuleRelativePath", "Public/DreamTexCoreBlueprintFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib, nullptr, "GetPixelColor", nullptr, nullptr, Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::DreamTexCoreBlueprintFunctionLib_eventGetPixelColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04842401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::DreamTexCoreBlueprintFunctionLib_eventGetPixelColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureMainColor_Statics
	{
		struct DreamTexCoreBlueprintFunctionLib_eventGetTextureMainColor_Parms
		{
			UTexture2D* Texture2D;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture2D;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureMainColor_Statics::NewProp_Texture2D = { "Texture2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTexCoreBlueprintFunctionLib_eventGetTextureMainColor_Parms, Texture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureMainColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTexCoreBlueprintFunctionLib_eventGetTextureMainColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureMainColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureMainColor_Statics::NewProp_Texture2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureMainColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureMainColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tools" },
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96Texture\xe4\xb8\xbb\xe9\xa2\x9c\xe8\x89\xb2" },
		{ "ModuleRelativePath", "Public/DreamTexCoreBlueprintFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureMainColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib, nullptr, "GetTextureMainColor", nullptr, nullptr, Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureMainColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureMainColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureMainColor_Statics::DreamTexCoreBlueprintFunctionLib_eventGetTextureMainColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04842401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureMainColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureMainColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureMainColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureMainColor_Statics::DreamTexCoreBlueprintFunctionLib_eventGetTextureMainColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureMainColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureMainColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureSize_Statics
	{
		struct DreamTexCoreBlueprintFunctionLib_eventGetTextureSize_Parms
		{
			UTexture2D* Texture2D;
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture2D;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureSize_Statics::NewProp_Texture2D = { "Texture2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTexCoreBlueprintFunctionLib_eventGetTextureSize_Parms, Texture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTexCoreBlueprintFunctionLib_eventGetTextureSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureSize_Statics::NewProp_Texture2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tools" },
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96TextureSize" },
		{ "ModuleRelativePath", "Public/DreamTexCoreBlueprintFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib, nullptr, "GetTextureSize", nullptr, nullptr, Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureSize_Statics::DreamTexCoreBlueprintFunctionLib_eventGetTextureSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14842401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureSize_Statics::DreamTexCoreBlueprintFunctionLib_eventGetTextureSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDreamTexCoreBlueprintFunctionLib);
	UClass* Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib_NoRegister()
	{
		return UDreamTexCoreBlueprintFunctionLib::StaticClass();
	}
	struct Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamTextureCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetAllPixelColor, "GetAllPixelColor" }, // 2103932448
		{ &Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetPixelColor, "GetPixelColor" }, // 3282730184
		{ &Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureMainColor, "GetTextureMainColor" }, // 2875922150
		{ &Z_Construct_UFunction_UDreamTexCoreBlueprintFunctionLib_GetTextureSize, "GetTextureSize" }, // 1521610884
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "DreamTextureCore\xe8\x93\x9d\xe5\x9b\xbe\xe5\x87\xbd\xe6\x95\xb0\xe5\xba\x93" },
		{ "IncludePath", "DreamTexCoreBlueprintFunctionLib.h" },
		{ "ModuleRelativePath", "Public/DreamTexCoreBlueprintFunctionLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDreamTexCoreBlueprintFunctionLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib_Statics::ClassParams = {
		&UDreamTexCoreBlueprintFunctionLib::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib()
	{
		if (!Z_Registration_Info_UClass_UDreamTexCoreBlueprintFunctionLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDreamTexCoreBlueprintFunctionLib.OuterSingleton, Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDreamTexCoreBlueprintFunctionLib.OuterSingleton;
	}
	template<> DREAMTEXTURECORE_API UClass* StaticClass<UDreamTexCoreBlueprintFunctionLib>()
	{
		return UDreamTexCoreBlueprintFunctionLib::StaticClass();
	}
	UDreamTexCoreBlueprintFunctionLib::UDreamTexCoreBlueprintFunctionLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamTexCoreBlueprintFunctionLib);
	UDreamTexCoreBlueprintFunctionLib::~UDreamTexCoreBlueprintFunctionLib() {}
	struct Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamTextureCore_Public_DreamTexCoreBlueprintFunctionLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamTextureCore_Public_DreamTexCoreBlueprintFunctionLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDreamTexCoreBlueprintFunctionLib, UDreamTexCoreBlueprintFunctionLib::StaticClass, TEXT("UDreamTexCoreBlueprintFunctionLib"), &Z_Registration_Info_UClass_UDreamTexCoreBlueprintFunctionLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDreamTexCoreBlueprintFunctionLib), 2383791060U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamTextureCore_Public_DreamTexCoreBlueprintFunctionLib_h_1055934467(TEXT("/Script/DreamTextureCore"),
		Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamTextureCore_Public_DreamTexCoreBlueprintFunctionLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamTextureCore_Public_DreamTexCoreBlueprintFunctionLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
