// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplay/Public/DreamGpCoreBlueprintFunctionLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamGpCoreBlueprintFunctionLib() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_ANCharacter_NoRegister();
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_UDreamGpCoreBlueprintFunctionLib();
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_UDreamGpCoreBlueprintFunctionLib_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DreamGameplay();
// End Cross Module References
	DEFINE_FUNCTION(UDreamGpCoreBlueprintFunctionLib::execGetNCharacter)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ANCharacter**)Z_Param__Result=UDreamGpCoreBlueprintFunctionLib::GetNCharacter(Z_Param_WorldContextObject,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	void UDreamGpCoreBlueprintFunctionLib::StaticRegisterNativesUDreamGpCoreBlueprintFunctionLib()
	{
		UClass* Class = UDreamGpCoreBlueprintFunctionLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNCharacter", &UDreamGpCoreBlueprintFunctionLib::execGetNCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics
	{
		struct DreamGpCoreBlueprintFunctionLib_eventGetNCharacter_Parms
		{
			const UObject* WorldContextObject;
			int32 PlayerIndex;
			ANCharacter* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGpCoreBlueprintFunctionLib_eventGetNCharacter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGpCoreBlueprintFunctionLib_eventGetNCharacter_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGpCoreBlueprintFunctionLib_eventGetNCharacter_Parms, ReturnValue), Z_Construct_UClass_ANCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tools" },
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96NCharacter" },
		{ "ModuleRelativePath", "Public/DreamGpCoreBlueprintFunctionLib.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamGpCoreBlueprintFunctionLib, nullptr, "GetNCharacter", nullptr, nullptr, Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::DreamGpCoreBlueprintFunctionLib_eventGetNCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::DreamGpCoreBlueprintFunctionLib_eventGetNCharacter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDreamGpCoreBlueprintFunctionLib);
	UClass* Z_Construct_UClass_UDreamGpCoreBlueprintFunctionLib_NoRegister()
	{
		return UDreamGpCoreBlueprintFunctionLib::StaticClass();
	}
	struct Z_Construct_UClass_UDreamGpCoreBlueprintFunctionLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDreamGpCoreBlueprintFunctionLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplay,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamGpCoreBlueprintFunctionLib_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDreamGpCoreBlueprintFunctionLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDreamGpCoreBlueprintFunctionLib_GetNCharacter, "GetNCharacter" }, // 2381365236
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamGpCoreBlueprintFunctionLib_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDreamGpCoreBlueprintFunctionLib_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "DreamGameplayCore\xe8\x93\x9d\xe5\x9b\xbe\xe5\x87\xbd\xe6\x95\xb0\xe5\xba\x93" },
		{ "IncludePath", "DreamGpCoreBlueprintFunctionLib.h" },
		{ "ModuleRelativePath", "Public/DreamGpCoreBlueprintFunctionLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDreamGpCoreBlueprintFunctionLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDreamGpCoreBlueprintFunctionLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDreamGpCoreBlueprintFunctionLib_Statics::ClassParams = {
		&UDreamGpCoreBlueprintFunctionLib::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamGpCoreBlueprintFunctionLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UDreamGpCoreBlueprintFunctionLib_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDreamGpCoreBlueprintFunctionLib()
	{
		if (!Z_Registration_Info_UClass_UDreamGpCoreBlueprintFunctionLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDreamGpCoreBlueprintFunctionLib.OuterSingleton, Z_Construct_UClass_UDreamGpCoreBlueprintFunctionLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDreamGpCoreBlueprintFunctionLib.OuterSingleton;
	}
	template<> DREAMGAMEPLAY_API UClass* StaticClass<UDreamGpCoreBlueprintFunctionLib>()
	{
		return UDreamGpCoreBlueprintFunctionLib::StaticClass();
	}
	UDreamGpCoreBlueprintFunctionLib::UDreamGpCoreBlueprintFunctionLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamGpCoreBlueprintFunctionLib);
	UDreamGpCoreBlueprintFunctionLib::~UDreamGpCoreBlueprintFunctionLib() {}
	struct Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_DreamGpCoreBlueprintFunctionLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_DreamGpCoreBlueprintFunctionLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDreamGpCoreBlueprintFunctionLib, UDreamGpCoreBlueprintFunctionLib::StaticClass, TEXT("UDreamGpCoreBlueprintFunctionLib"), &Z_Registration_Info_UClass_UDreamGpCoreBlueprintFunctionLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDreamGpCoreBlueprintFunctionLib), 3602457173U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_DreamGpCoreBlueprintFunctionLib_h_4276507929(TEXT("/Script/DreamGameplay"),
		Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_DreamGpCoreBlueprintFunctionLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_DreamGpCoreBlueprintFunctionLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
