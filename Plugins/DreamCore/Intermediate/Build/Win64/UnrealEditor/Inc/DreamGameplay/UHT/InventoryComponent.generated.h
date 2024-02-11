// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/Inventory/InventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventoryComponent;
class UItemObject;
struct FItemAddOut;
struct FItemObjectStruct;
struct FItemRemoveOut;
#ifdef DREAMGAMEPLAY_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define DREAMGAMEPLAY_InventoryComponent_generated_h

#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_15_DELEGATE \
DREAMGAMEPLAY_API void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem, FItemObjectStruct ItemInfo);


#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_20_SPARSE_DATA
#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execSortItemByCount); \
	DECLARE_FUNCTION(execSortItemByType); \
	DECLARE_FUNCTION(execReSetSlotID); \
	DECLARE_FUNCTION(execRemoveItemBySlotID); \
	DECLARE_FUNCTION(execRemoveItemByClass); \
	DECLARE_FUNCTION(execUseItemBySlotID); \
	DECLARE_FUNCTION(execUseItemByClass); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execGetItemSlot); \
	DECLARE_FUNCTION(execCreatItem); \
	DECLARE_FUNCTION(execGetItemsByClass); \
	DECLARE_FUNCTION(execGetItemBySlotID); \
	DECLARE_FUNCTION(execIsInventoryFull); \
	DECLARE_FUNCTION(execSetInventorySize); \
	DECLARE_FUNCTION(execGetInventoryComponent);


#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_20_ACCESSORS
#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DreamGameplay"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_17_PROLOG
#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_20_SPARSE_DATA \
	FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_20_ACCESSORS \
	FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DREAMGAMEPLAY_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
