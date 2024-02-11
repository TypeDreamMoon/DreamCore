// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplay/Public/Gameplay/Task/TaskType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskType() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_UTaskType();
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_UTaskType_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DreamGameplay();
// End Cross Module References
	void UTaskType::StaticRegisterNativesUTaskType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskType);
	UClass* Z_Construct_UClass_UTaskType_NoRegister()
	{
		return UTaskType::StaticClass();
	}
	struct Z_Construct_UClass_UTaskType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplay,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskType_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskType_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Gameplay/Task/TaskType.h" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskType_Statics::ClassParams = {
		&UTaskType::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskType_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskType_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTaskType()
	{
		if (!Z_Registration_Info_UClass_UTaskType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskType.OuterSingleton, Z_Construct_UClass_UTaskType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTaskType.OuterSingleton;
	}
	template<> DREAMGAMEPLAY_API UClass* StaticClass<UTaskType>()
	{
		return UTaskType::StaticClass();
	}
	UTaskType::UTaskType(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskType);
	UTaskType::~UTaskType() {}
	struct Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskType_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTaskType, UTaskType::StaticClass, TEXT("UTaskType"), &Z_Registration_Info_UClass_UTaskType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskType), 1279854446U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskType_h_1243510849(TEXT("/Script/DreamGameplay"),
		Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskType_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
