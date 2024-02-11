// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/Inventory/InventoryCommon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DREAMGAMEPLAY_InventoryCommon_generated_h
#error "InventoryCommon.generated.h already included, missing '#pragma once' in InventoryCommon.h"
#endif
#define DREAMGAMEPLAY_InventoryCommon_generated_h

#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryCommon_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemAddOut_Statics; \
	DREAMGAMEPLAY_API static class UScriptStruct* StaticStruct();


template<> DREAMGAMEPLAY_API UScriptStruct* StaticStruct<struct FItemAddOut>();

#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryCommon_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemRemoveOut_Statics; \
	DREAMGAMEPLAY_API static class UScriptStruct* StaticStruct();


template<> DREAMGAMEPLAY_API UScriptStruct* StaticStruct<struct FItemRemoveOut>();

#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryCommon_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics; \
	DREAMGAMEPLAY_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DREAMGAMEPLAY_API UScriptStruct* StaticStruct<struct FItemHudDisplayInfoStruct>();

#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryCommon_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemObjectStruct_Statics; \
	DREAMGAMEPLAY_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DREAMGAMEPLAY_API UScriptStruct* StaticStruct<struct FItemObjectStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryCommon_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::EIT_None) \
	op(EItemType::EIT_Weapon) \
	op(EItemType::EIT_Prop) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> DREAMGAMEPLAY_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
