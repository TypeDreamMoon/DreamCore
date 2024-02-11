// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DAssetManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDAssetManager;
struct FSoftObjectPath;
#ifdef DREAMCORE_DAssetManager_generated_h
#error "DAssetManager.generated.h already included, missing '#pragma once' in DAssetManager.h"
#endif
#define DREAMCORE_DAssetManager_generated_h

#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_13_DELEGATE \
DREAMCORE_API void FOnPackageLoaded_DelegateWrapper(const FScriptDelegate& OnPackageLoaded);


#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_18_SPARSE_DATA
#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentLoadProgress); \
	DECLARE_FUNCTION(execAsyncLoadObject); \
	DECLARE_FUNCTION(execGetDAssetManager);


#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_18_ACCESSORS
#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDAssetManager(); \
	friend struct Z_Construct_UClass_UDAssetManager_Statics; \
public: \
	DECLARE_CLASS(UDAssetManager, UAssetManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DreamCore"), NO_API) \
	DECLARE_SERIALIZER(UDAssetManager)


#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDAssetManager(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDAssetManager(UDAssetManager&&); \
	NO_API UDAssetManager(const UDAssetManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDAssetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDAssetManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDAssetManager) \
	NO_API virtual ~UDAssetManager();


#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_15_PROLOG
#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_18_SPARSE_DATA \
	FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_18_ACCESSORS \
	FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_18_INCLASS_NO_PURE_DECLS \
	FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DREAMCORE_API UClass* StaticClass<class UDAssetManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_DAssetManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
