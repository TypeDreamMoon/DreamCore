// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplay/Public/GameBase/NGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNGameInstance() {}
// Cross Module References
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_UNGameInstance();
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_UNGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_DreamGameplay();
// End Cross Module References
	DEFINE_FUNCTION(UNGameInstance::execSetDebugMode)
	{
		P_GET_UBOOL(Z_Param_NewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDebugMode(Z_Param_NewMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNGameInstance::execGetDebugMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDebugMode();
		P_NATIVE_END;
	}
	void UNGameInstance::StaticRegisterNativesUNGameInstance()
	{
		UClass* Class = UNGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugMode", &UNGameInstance::execGetDebugMode },
			{ "SetDebugMode", &UNGameInstance::execSetDebugMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNGameInstance_GetDebugMode_Statics
	{
		struct NGameInstance_eventGetDebugMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNGameInstance_GetDebugMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NGameInstance_eventGetDebugMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNGameInstance_GetDebugMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NGameInstance_eventGetDebugMode_Parms), &Z_Construct_UFunction_UNGameInstance_GetDebugMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNGameInstance_GetDebugMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNGameInstance_GetDebugMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNGameInstance_GetDebugMode_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\xb0\x83\xe8\xaf\x95\xe6\xa8\xa1\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/GameBase/NGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNGameInstance_GetDebugMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNGameInstance, nullptr, "GetDebugMode", nullptr, nullptr, Z_Construct_UFunction_UNGameInstance_GetDebugMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNGameInstance_GetDebugMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNGameInstance_GetDebugMode_Statics::NGameInstance_eventGetDebugMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNGameInstance_GetDebugMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNGameInstance_GetDebugMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNGameInstance_GetDebugMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNGameInstance_GetDebugMode_Statics::NGameInstance_eventGetDebugMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNGameInstance_GetDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNGameInstance_GetDebugMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNGameInstance_SetDebugMode_Statics
	{
		struct NGameInstance_eventSetDebugMode_Parms
		{
			bool NewMode;
		};
		static void NewProp_NewMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNGameInstance_SetDebugMode_Statics::NewProp_NewMode_SetBit(void* Obj)
	{
		((NGameInstance_eventSetDebugMode_Parms*)Obj)->NewMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNGameInstance_SetDebugMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NGameInstance_eventSetDebugMode_Parms), &Z_Construct_UFunction_UNGameInstance_SetDebugMode_Statics::NewProp_NewMode_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNGameInstance_SetDebugMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNGameInstance_SetDebugMode_Statics::NewProp_NewMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNGameInstance_SetDebugMode_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe8\xae\xbe\xe7\xbd\xae\xe8\xb0\x83\xe8\xaf\x95\xe6\xa8\xa1\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/GameBase/NGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNGameInstance_SetDebugMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNGameInstance, nullptr, "SetDebugMode", nullptr, nullptr, Z_Construct_UFunction_UNGameInstance_SetDebugMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNGameInstance_SetDebugMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNGameInstance_SetDebugMode_Statics::NGameInstance_eventSetDebugMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNGameInstance_SetDebugMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNGameInstance_SetDebugMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNGameInstance_SetDebugMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNGameInstance_SetDebugMode_Statics::NGameInstance_eventSetDebugMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNGameInstance_SetDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNGameInstance_SetDebugMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNGameInstance);
	UClass* Z_Construct_UClass_UNGameInstance_NoRegister()
	{
		return UNGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UNGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDebugMode_MetaData[];
#endif
		static void NewProp_IsDebugMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDebugMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplay,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNGameInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNGameInstance_GetDebugMode, "GetDebugMode" }, // 2460866964
		{ &Z_Construct_UFunction_UNGameInstance_SetDebugMode, "SetDebugMode" }, // 1506489430
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNGameInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNGameInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "NZK\xe6\xb8\xb8\xe6\x88\x8f\xe5\xae\x9e\xe4\xbe\x8b" },
		{ "IncludePath", "GameBase/NGameInstance.h" },
		{ "ModuleRelativePath", "Public/GameBase/NGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNGameInstance_Statics::NewProp_IsDebugMode_MetaData[] = {
		{ "DisplayName", "\xe8\xb0\x83\xe8\xaf\x95\xe6\xa8\xa1\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/GameBase/NGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UNGameInstance_Statics::NewProp_IsDebugMode_SetBit(void* Obj)
	{
		((UNGameInstance*)Obj)->IsDebugMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNGameInstance_Statics::NewProp_IsDebugMode = { "IsDebugMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNGameInstance), &Z_Construct_UClass_UNGameInstance_Statics::NewProp_IsDebugMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNGameInstance_Statics::NewProp_IsDebugMode_MetaData), Z_Construct_UClass_UNGameInstance_Statics::NewProp_IsDebugMode_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNGameInstance_Statics::NewProp_IsDebugMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNGameInstance_Statics::ClassParams = {
		&UNGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UNGameInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNGameInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNGameInstance()
	{
		if (!Z_Registration_Info_UClass_UNGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNGameInstance.OuterSingleton, Z_Construct_UClass_UNGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNGameInstance.OuterSingleton;
	}
	template<> DREAMGAMEPLAY_API UClass* StaticClass<UNGameInstance>()
	{
		return UNGameInstance::StaticClass();
	}
	UNGameInstance::UNGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNGameInstance);
	UNGameInstance::~UNGameInstance() {}
	struct Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_GameBase_NGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_GameBase_NGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNGameInstance, UNGameInstance::StaticClass, TEXT("UNGameInstance"), &Z_Registration_Info_UClass_UNGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNGameInstance), 1405677756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_GameBase_NGameInstance_h_968307281(TEXT("/Script/DreamGameplay"),
		Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_GameBase_NGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_GameBase_NGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
