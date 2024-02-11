// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/Task/TaskCommon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DREAMGAMEPLAY_TaskCommon_generated_h
#error "TaskCommon.generated.h already included, missing '#pragma once' in TaskCommon.h"
#endif
#define DREAMGAMEPLAY_TaskCommon_generated_h

#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskCommon_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTaskRewards_Statics; \
	DREAMGAMEPLAY_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DREAMGAMEPLAY_API UScriptStruct* StaticStruct<struct FTaskRewards>();

#define FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskCommon_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTaskInfo_Statics; \
	DREAMGAMEPLAY_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DREAMGAMEPLAY_API UScriptStruct* StaticStruct<struct FTaskInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskCommon_h


#define FOREACH_ENUM_ETASKSTATE(op) \
	op(ETaskState::ETS_None) 

enum class ETaskState : uint8;
template<> struct TIsUEnumClass<ETaskState> { enum { Value = true }; };
template<> DREAMGAMEPLAY_API UEnum* StaticEnum<ETaskState>();

#define FOREACH_ENUM_EMAINTASKTYPE(op) \
	op(EMainTaskType::ETT_None) 

enum class EMainTaskType : uint8;
template<> struct TIsUEnumClass<EMainTaskType> { enum { Value = true }; };
template<> DREAMGAMEPLAY_API UEnum* StaticEnum<EMainTaskType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
