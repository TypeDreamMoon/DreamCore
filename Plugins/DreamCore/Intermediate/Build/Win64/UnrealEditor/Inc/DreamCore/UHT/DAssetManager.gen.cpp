// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamCore/Public/DAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAssetManager() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DREAMCORE_API UClass* Z_Construct_UClass_UDAssetManager();
	DREAMCORE_API UClass* Z_Construct_UClass_UDAssetManager_NoRegister();
	DREAMCORE_API UFunction* Z_Construct_UDelegateFunction_DreamCore_OnPackageLoaded__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	UPackage* Z_Construct_UPackage__Script_DreamCore();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DreamCore_OnPackageLoaded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DreamCore_OnPackageLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/DAssetManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DreamCore_OnPackageLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DreamCore, nullptr, "OnPackageLoaded__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DreamCore_OnPackageLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DreamCore_OnPackageLoaded__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_DreamCore_OnPackageLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DreamCore_OnPackageLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPackageLoaded_DelegateWrapper(const FScriptDelegate& OnPackageLoaded)
{
	OnPackageLoaded.ProcessDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UDAssetManager::execGetCurrentLoadProgress)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LoadedCount);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RequestedCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentLoadProgress(Z_Param_Out_LoadedCount,Z_Param_Out_RequestedCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDAssetManager::execAsyncLoadObject)
	{
		P_GET_STRUCT(FSoftObjectPath,Z_Param_Path);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnPackageLoaded);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->AsyncLoadObject(Z_Param_Path,FOnPackageLoaded(Z_Param_OnPackageLoaded));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDAssetManager::execGetDAssetManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDAssetManager**)Z_Param__Result=UDAssetManager::GetDAssetManager();
		P_NATIVE_END;
	}
	void UDAssetManager::StaticRegisterNativesUDAssetManager()
	{
		UClass* Class = UDAssetManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLoadObject", &UDAssetManager::execAsyncLoadObject },
			{ "GetCurrentLoadProgress", &UDAssetManager::execGetCurrentLoadProgress },
			{ "GetDAssetManager", &UDAssetManager::execGetDAssetManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDAssetManager_AsyncLoadObject_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct DAssetManager_eventAsyncLoadObject_Parms
		{
			FSoftObjectPath Path;
			FScriptDelegate OnPackageLoaded;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnPackageLoaded;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAssetManager_AsyncLoadObject_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAssetManager_eventAsyncLoadObject_Parms, Path), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UDAssetManager_AsyncLoadObject_Statics::NewProp_OnPackageLoaded = { "OnPackageLoaded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAssetManager_eventAsyncLoadObject_Parms, OnPackageLoaded), Z_Construct_UDelegateFunction_DreamCore_OnPackageLoaded__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1613429237
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDAssetManager_AsyncLoadObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAssetManager_eventAsyncLoadObject_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAssetManager_AsyncLoadObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAssetManager_AsyncLoadObject_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAssetManager_AsyncLoadObject_Statics::NewProp_OnPackageLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAssetManager_AsyncLoadObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDAssetManager_AsyncLoadObject_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/DAssetManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAssetManager_AsyncLoadObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAssetManager, nullptr, "AsyncLoadObject", nullptr, nullptr, Z_Construct_UFunction_UDAssetManager_AsyncLoadObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAssetManager_AsyncLoadObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAssetManager_AsyncLoadObject_Statics::DAssetManager_eventAsyncLoadObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAssetManager_AsyncLoadObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAssetManager_AsyncLoadObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAssetManager_AsyncLoadObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDAssetManager_AsyncLoadObject_Statics::DAssetManager_eventAsyncLoadObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDAssetManager_AsyncLoadObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAssetManager_AsyncLoadObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress_Statics
	{
		struct DAssetManager_eventGetCurrentLoadProgress_Parms
		{
			int32 LoadedCount;
			int32 RequestedCount;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LoadedCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequestedCount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress_Statics::NewProp_LoadedCount = { "LoadedCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAssetManager_eventGetCurrentLoadProgress_Parms, LoadedCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress_Statics::NewProp_RequestedCount = { "RequestedCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAssetManager_eventGetCurrentLoadProgress_Parms, RequestedCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAssetManager_eventGetCurrentLoadProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress_Statics::NewProp_LoadedCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress_Statics::NewProp_RequestedCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/DAssetManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAssetManager, nullptr, "GetCurrentLoadProgress", nullptr, nullptr, Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress_Statics::DAssetManager_eventGetCurrentLoadProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress_Statics::DAssetManager_eventGetCurrentLoadProgress_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDAssetManager_GetDAssetManager_Statics
	{
		struct DAssetManager_eventGetDAssetManager_Parms
		{
			UDAssetManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAssetManager_GetDAssetManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAssetManager_eventGetDAssetManager_Parms, ReturnValue), Z_Construct_UClass_UDAssetManager_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAssetManager_GetDAssetManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAssetManager_GetDAssetManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDAssetManager_GetDAssetManager_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "DisplayName", "DAssetManager" },
		{ "ModuleRelativePath", "Public/DAssetManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAssetManager_GetDAssetManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAssetManager, nullptr, "GetDAssetManager", nullptr, nullptr, Z_Construct_UFunction_UDAssetManager_GetDAssetManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAssetManager_GetDAssetManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAssetManager_GetDAssetManager_Statics::DAssetManager_eventGetDAssetManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAssetManager_GetDAssetManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAssetManager_GetDAssetManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAssetManager_GetDAssetManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDAssetManager_GetDAssetManager_Statics::DAssetManager_eventGetDAssetManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDAssetManager_GetDAssetManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAssetManager_GetDAssetManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAssetManager);
	UClass* Z_Construct_UClass_UDAssetManager_NoRegister()
	{
		return UDAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UDAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAssetManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDAssetManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDAssetManager_AsyncLoadObject, "AsyncLoadObject" }, // 336771389
		{ &Z_Construct_UFunction_UDAssetManager_GetCurrentLoadProgress, "GetCurrentLoadProgress" }, // 4200114152
		{ &Z_Construct_UFunction_UDAssetManager_GetDAssetManager, "GetDAssetManager" }, // 4217975469
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAssetManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDAssetManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DAssetManager.h" },
		{ "ModuleRelativePath", "Public/DAssetManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAssetManager_Statics::ClassParams = {
		&UDAssetManager::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAssetManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDAssetManager()
	{
		if (!Z_Registration_Info_UClass_UDAssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAssetManager.OuterSingleton, Z_Construct_UClass_UDAssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDAssetManager.OuterSingleton;
	}
	template<> DREAMCORE_API UClass* StaticClass<UDAssetManager>()
	{
		return UDAssetManager::StaticClass();
	}
	UDAssetManager::UDAssetManager() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDAssetManager);
	UDAssetManager::~UDAssetManager() {}
	struct Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDAssetManager, UDAssetManager::StaticClass, TEXT("UDAssetManager"), &Z_Registration_Info_UClass_UDAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAssetManager), 754650008U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_1197746936(TEXT("/Script/DreamCore"),
		Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
