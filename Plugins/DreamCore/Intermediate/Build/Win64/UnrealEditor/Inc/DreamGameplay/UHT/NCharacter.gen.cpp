// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplay/Public/GameBase/NCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNCharacter() {}
// Cross Module References
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_ANCharacter();
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_ANCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DreamGameplay();
// End Cross Module References
	void ANCharacter::StaticRegisterNativesANCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANCharacter);
	UClass* Z_Construct_UClass_ANCharacter_NoRegister()
	{
		return ANCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ANCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplay,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameBase/NCharacter.h" },
		{ "ModuleRelativePath", "Public/GameBase/NCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANCharacter_Statics::ClassParams = {
		&ANCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ANCharacter()
	{
		if (!Z_Registration_Info_UClass_ANCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANCharacter.OuterSingleton, Z_Construct_UClass_ANCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANCharacter.OuterSingleton;
	}
	template<> DREAMGAMEPLAY_API UClass* StaticClass<ANCharacter>()
	{
		return ANCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANCharacter);
	ANCharacter::~ANCharacter() {}
	struct Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_GameBase_NCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_GameBase_NCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANCharacter, ANCharacter::StaticClass, TEXT("ANCharacter"), &Z_Registration_Info_UClass_ANCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANCharacter), 2519882179U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_GameBase_NCharacter_h_3634374499(TEXT("/Script/DreamGameplay"),
		Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_GameBase_NCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_GameBase_NCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS