// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplay/Public/Gameplay/Task/TaskCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskCommon() {}
// Cross Module References
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_UTaskType_NoRegister();
	DREAMGAMEPLAY_API UEnum* Z_Construct_UEnum_DreamGameplay_EMainTaskType();
	DREAMGAMEPLAY_API UEnum* Z_Construct_UEnum_DreamGameplay_ETaskState();
	DREAMGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FTaskInfo();
	DREAMGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FTaskRewards();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_DreamGameplay();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETaskState;
	static UEnum* ETaskState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETaskState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETaskState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DreamGameplay_ETaskState, (UObject*)Z_Construct_UPackage__Script_DreamGameplay(), TEXT("ETaskState"));
		}
		return Z_Registration_Info_UEnum_ETaskState.OuterSingleton;
	}
	template<> DREAMGAMEPLAY_API UEnum* StaticEnum<ETaskState>()
	{
		return ETaskState_StaticEnum();
	}
	struct Z_Construct_UEnum_DreamGameplay_ETaskState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DreamGameplay_ETaskState_Statics::Enumerators[] = {
		{ "ETaskState::ETS_None", (int64)ETaskState::ETS_None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DreamGameplay_ETaskState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DreamGamePlay" },
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81" },
		{ "ETS_None.DisplayName", "None" },
		{ "ETS_None.Name", "ETaskState::ETS_None" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DreamGameplay_ETaskState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DreamGameplay,
		nullptr,
		"ETaskState",
		"ETaskState",
		Z_Construct_UEnum_DreamGameplay_ETaskState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DreamGameplay_ETaskState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DreamGameplay_ETaskState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DreamGameplay_ETaskState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DreamGameplay_ETaskState()
	{
		if (!Z_Registration_Info_UEnum_ETaskState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETaskState.InnerSingleton, Z_Construct_UEnum_DreamGameplay_ETaskState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETaskState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMainTaskType;
	static UEnum* EMainTaskType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMainTaskType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMainTaskType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DreamGameplay_EMainTaskType, (UObject*)Z_Construct_UPackage__Script_DreamGameplay(), TEXT("EMainTaskType"));
		}
		return Z_Registration_Info_UEnum_EMainTaskType.OuterSingleton;
	}
	template<> DREAMGAMEPLAY_API UEnum* StaticEnum<EMainTaskType>()
	{
		return EMainTaskType_StaticEnum();
	}
	struct Z_Construct_UEnum_DreamGameplay_EMainTaskType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DreamGameplay_EMainTaskType_Statics::Enumerators[] = {
		{ "EMainTaskType::ETT_None", (int64)EMainTaskType::ETT_None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DreamGameplay_EMainTaskType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DreamGamePlay" },
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ETT_None.DisplayName", "None" },
		{ "ETT_None.Name", "EMainTaskType::ETT_None" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DreamGameplay_EMainTaskType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DreamGameplay,
		nullptr,
		"EMainTaskType",
		"EMainTaskType",
		Z_Construct_UEnum_DreamGameplay_EMainTaskType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DreamGameplay_EMainTaskType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DreamGameplay_EMainTaskType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DreamGameplay_EMainTaskType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DreamGameplay_EMainTaskType()
	{
		if (!Z_Registration_Info_UEnum_EMainTaskType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMainTaskType.InnerSingleton, Z_Construct_UEnum_DreamGameplay_EMainTaskType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMainTaskType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTaskRewards>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTaskRewards cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TaskRewards;
class UScriptStruct* FTaskRewards::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TaskRewards.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TaskRewards.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaskRewards, (UObject*)Z_Construct_UPackage__Script_DreamGameplay(), TEXT("TaskRewards"));
	}
	return Z_Registration_Info_UScriptStruct_TaskRewards.OuterSingleton;
}
template<> DREAMGAMEPLAY_API UScriptStruct* StaticStruct<FTaskRewards>()
{
	return FTaskRewards::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTaskRewards_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskRewards_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DreamGamePlay" },
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe5\xa5\x96\xe5\x8a\xb1" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTaskRewards_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaskRewards>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaskRewards_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplay,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TaskRewards",
		nullptr,
		0,
		sizeof(FTaskRewards),
		alignof(FTaskRewards),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskRewards_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTaskRewards_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTaskRewards()
	{
		if (!Z_Registration_Info_UScriptStruct_TaskRewards.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TaskRewards.InnerSingleton, Z_Construct_UScriptStruct_FTaskRewards_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TaskRewards.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTaskInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTaskInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TaskInfo;
class UScriptStruct* FTaskInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TaskInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TaskInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaskInfo, (UObject*)Z_Construct_UPackage__Script_DreamGameplay(), TEXT("TaskInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TaskInfo.OuterSingleton;
}
template<> DREAMGAMEPLAY_API UScriptStruct* StaticStruct<FTaskInfo>()
{
	return FTaskInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTaskInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Goal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rewards_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rewards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MainType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MainType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DreamGamePlay" },
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTaskInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaskInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "TaskInfo" },
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1ID" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskCommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskInfo, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_ID_MetaData), Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "TaskInfo" },
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskCommon.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "TaskInfo" },
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x8f\x8f\xe8\xbf\xb0" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskCommon.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskInfo, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Goal_MetaData[] = {
		{ "Category", "TaskInfo" },
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9b\xae\xe6\xa0\x87" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskCommon.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskInfo, Goal), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Goal_MetaData), Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Goal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Rewards_MetaData[] = {
		{ "Category", "TaskInfo" },
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe5\xa5\x96\xe5\x8a\xb1" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Rewards = { "Rewards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskInfo, Rewards), Z_Construct_UScriptStruct_FTaskRewards, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Rewards_MetaData), Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Rewards_MetaData) }; // 2652001885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_TaskType_MetaData[] = {
		{ "Category", "TaskInfo" },
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskCommon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_TaskType = { "TaskType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskInfo, TaskType), Z_Construct_UClass_UTaskType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_TaskType_MetaData), Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_TaskType_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_MainType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_MainType_MetaData[] = {
		{ "Category", "TaskInfo" },
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe4\xb8\xbb\xe7\xb1\xbb" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_MainType = { "MainType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskInfo, MainType), Z_Construct_UEnum_DreamGameplay_EMainTaskType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_MainType_MetaData), Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_MainType_MetaData) }; // 2652551922
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_State_MetaData[] = {
		{ "Category", "TaskInfo" },
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskInfo, State), Z_Construct_UEnum_DreamGameplay_ETaskState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_State_MetaData), Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_State_MetaData) }; // 1912500253
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaskInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Goal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_Rewards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_TaskType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_MainType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_MainType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskInfo_Statics::NewProp_State,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaskInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplay,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TaskInfo",
		Z_Construct_UScriptStruct_FTaskInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInfo_Statics::PropPointers),
		sizeof(FTaskInfo),
		alignof(FTaskInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTaskInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTaskInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TaskInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TaskInfo.InnerSingleton, Z_Construct_UScriptStruct_FTaskInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TaskInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskCommon_h_Statics::EnumInfo[] = {
		{ ETaskState_StaticEnum, TEXT("ETaskState"), &Z_Registration_Info_UEnum_ETaskState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1912500253U) },
		{ EMainTaskType_StaticEnum, TEXT("EMainTaskType"), &Z_Registration_Info_UEnum_EMainTaskType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2652551922U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskCommon_h_Statics::ScriptStructInfo[] = {
		{ FTaskRewards::StaticStruct, Z_Construct_UScriptStruct_FTaskRewards_Statics::NewStructOps, TEXT("TaskRewards"), &Z_Registration_Info_UScriptStruct_TaskRewards, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTaskRewards), 2652001885U) },
		{ FTaskInfo::StaticStruct, Z_Construct_UScriptStruct_FTaskInfo_Statics::NewStructOps, TEXT("TaskInfo"), &Z_Registration_Info_UScriptStruct_TaskInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTaskInfo), 2867238811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskCommon_h_2755815501(TEXT("/Script/DreamGameplay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskCommon_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
