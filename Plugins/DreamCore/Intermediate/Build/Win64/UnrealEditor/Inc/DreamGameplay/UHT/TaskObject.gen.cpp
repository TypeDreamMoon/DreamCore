// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplay/Public/Gameplay/Task/TaskObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_UTaskObject();
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_UTaskObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DreamGameplay();
// End Cross Module References
	void UTaskObject::StaticRegisterNativesUTaskObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskObject);
	UClass* Z_Construct_UClass_UTaskObject_NoRegister()
	{
		return UTaskObject::StaticClass();
	}
	struct Z_Construct_UClass_UTaskObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplay,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskObject_Statics::Class_MetaDataParams[] = {
		{ "Category", "DreamGamePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe5\xaf\xb9\xe8\xb1\xa1" },
		{ "IncludePath", "Gameplay/Task/TaskObject.h" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskObject_Statics::ClassParams = {
		&UTaskObject::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskObject_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTaskObject()
	{
		if (!Z_Registration_Info_UClass_UTaskObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskObject.OuterSingleton, Z_Construct_UClass_UTaskObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTaskObject.OuterSingleton;
	}
	template<> DREAMGAMEPLAY_API UClass* StaticClass<UTaskObject>()
	{
		return UTaskObject::StaticClass();
	}
	UTaskObject::UTaskObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskObject);
	UTaskObject::~UTaskObject() {}
	struct Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTaskObject, UTaskObject::StaticClass, TEXT("UTaskObject"), &Z_Registration_Info_UClass_UTaskObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskObject), 1184740640U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskObject_h_629221898(TEXT("/Script/DreamGameplay"),
		Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
