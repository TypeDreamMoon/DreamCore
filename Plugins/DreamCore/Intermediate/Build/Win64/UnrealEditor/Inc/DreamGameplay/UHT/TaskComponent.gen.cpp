// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplay/Public/Gameplay/Task/TaskComponent.h"
#include "DreamGameplay/Public/Gameplay/Task/TaskCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskComponent() {}
// Cross Module References
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_UTaskComponent();
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_UTaskComponent_NoRegister();
	DREAMGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FTaskInfo();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DreamGameplay();
// End Cross Module References
	DEFINE_FUNCTION(UTaskComponent::execRemoveTask)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTask(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTaskComponent::execAddTask)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTask(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTaskComponent::execFindTaskInfoByID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTaskInfo*)Z_Param__Result=P_THIS->FindTaskInfoByID(Z_Param_ID);
		P_NATIVE_END;
	}
	void UTaskComponent::StaticRegisterNativesUTaskComponent()
	{
		UClass* Class = UTaskComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTask", &UTaskComponent::execAddTask },
			{ "FindTaskInfoByID", &UTaskComponent::execFindTaskInfoByID },
			{ "RemoveTask", &UTaskComponent::execRemoveTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTaskComponent_AddTask_Statics
	{
		struct TaskComponent_eventAddTask_Parms
		{
			int32 ID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTaskComponent_AddTask_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskComponent_eventAddTask_Parms, ID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskComponent_AddTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskComponent_AddTask_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskComponent_AddTask_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xbb\xbb\xe5\x8a\xa1(ByID)" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskComponent_AddTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskComponent, nullptr, "AddTask", nullptr, nullptr, Z_Construct_UFunction_UTaskComponent_AddTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskComponent_AddTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskComponent_AddTask_Statics::TaskComponent_eventAddTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskComponent_AddTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskComponent_AddTask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskComponent_AddTask_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTaskComponent_AddTask_Statics::TaskComponent_eventAddTask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTaskComponent_AddTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskComponent_AddTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTaskComponent_FindTaskInfoByID_Statics
	{
		struct TaskComponent_eventFindTaskInfoByID_Parms
		{
			int32 ID;
			FTaskInfo ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTaskComponent_FindTaskInfoByID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskComponent_eventFindTaskInfoByID_Parms, ID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTaskComponent_FindTaskInfoByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskComponent_eventFindTaskInfoByID_Parms, ReturnValue), Z_Construct_UScriptStruct_FTaskInfo, METADATA_PARAMS(0, nullptr) }; // 2867238811
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskComponent_FindTaskInfoByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskComponent_FindTaskInfoByID_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskComponent_FindTaskInfoByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskComponent_FindTaskInfoByID_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe6\x9f\xa5\xe6\x89\xbe\xe5\x88\x97\xe8\xa1\xa8\xe5\x86\x85\xe4\xbb\xbb\xe5\x8a\xa1\xe4\xbf\xa1\xe6\x81\xaf(ByID)" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskComponent_FindTaskInfoByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskComponent, nullptr, "FindTaskInfoByID", nullptr, nullptr, Z_Construct_UFunction_UTaskComponent_FindTaskInfoByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskComponent_FindTaskInfoByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskComponent_FindTaskInfoByID_Statics::TaskComponent_eventFindTaskInfoByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskComponent_FindTaskInfoByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskComponent_FindTaskInfoByID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskComponent_FindTaskInfoByID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTaskComponent_FindTaskInfoByID_Statics::TaskComponent_eventFindTaskInfoByID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTaskComponent_FindTaskInfoByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskComponent_FindTaskInfoByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTaskComponent_RemoveTask_Statics
	{
		struct TaskComponent_eventRemoveTask_Parms
		{
			int32 ID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTaskComponent_RemoveTask_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskComponent_eventRemoveTask_Parms, ID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskComponent_RemoveTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskComponent_RemoveTask_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskComponent_RemoveTask_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe7\xa7\xbb\xe9\x99\xa4\xe4\xbb\xbb\xe5\x8a\xa1(ByID)" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskComponent_RemoveTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskComponent, nullptr, "RemoveTask", nullptr, nullptr, Z_Construct_UFunction_UTaskComponent_RemoveTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskComponent_RemoveTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskComponent_RemoveTask_Statics::TaskComponent_eventRemoveTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskComponent_RemoveTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskComponent_RemoveTask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskComponent_RemoveTask_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTaskComponent_RemoveTask_Statics::TaskComponent_eventRemoveTask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTaskComponent_RemoveTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskComponent_RemoveTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskComponent);
	UClass* Z_Construct_UClass_UTaskComponent_NoRegister()
	{
		return UTaskComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTaskComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplay,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTaskComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskComponent_AddTask, "AddTask" }, // 1188596776
		{ &Z_Construct_UFunction_UTaskComponent_FindTaskInfoByID, "FindTaskInfoByID" }, // 3694519723
		{ &Z_Construct_UFunction_UTaskComponent_RemoveTask, "RemoveTask" }, // 4291498499
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Category", "DreamGamePlay" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event\n//DECLARE_DYNAMIC_DELEGATE();\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xbb\x84\xe4\xbb\xb6" },
		{ "IncludePath", "Gameplay/Task/TaskComponent.h" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event\nDECLARE_DYNAMIC_DELEGATE();" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTaskComponent_Statics::NewProp_TaskList_Inner = { "TaskList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTaskInfo, METADATA_PARAMS(0, nullptr) }; // 2867238811
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskComponent_Statics::NewProp_TaskList_MetaData[] = {
		{ "Category", "TaskComponent" },
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x97\xe8\xa1\xa8" },
		{ "ModuleRelativePath", "Public/Gameplay/Task/TaskComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTaskComponent_Statics::NewProp_TaskList = { "TaskList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskComponent, TaskList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskComponent_Statics::NewProp_TaskList_MetaData), Z_Construct_UClass_UTaskComponent_Statics::NewProp_TaskList_MetaData) }; // 2867238811
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskComponent_Statics::NewProp_TaskList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskComponent_Statics::NewProp_TaskList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskComponent_Statics::ClassParams = {
		&UTaskComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTaskComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTaskComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTaskComponent()
	{
		if (!Z_Registration_Info_UClass_UTaskComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskComponent.OuterSingleton, Z_Construct_UClass_UTaskComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTaskComponent.OuterSingleton;
	}
	template<> DREAMGAMEPLAY_API UClass* StaticClass<UTaskComponent>()
	{
		return UTaskComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskComponent);
	UTaskComponent::~UTaskComponent() {}
	struct Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTaskComponent, UTaskComponent::StaticClass, TEXT("UTaskComponent"), &Z_Registration_Info_UClass_UTaskComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskComponent), 1913762238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskComponent_h_1737630372(TEXT("/Script/DreamGameplay"),
		Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Task_TaskComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
