// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplay/Public/Gameplay/Inventory/ItemObject.h"
#include "DreamGameplay/Public/Gameplay/Inventory/InventoryCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_UItemObject();
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_UItemObject_NoRegister();
	DREAMGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct();
	DREAMGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FItemObjectStruct();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DreamGameplay();
// End Cross Module References
	DEFINE_FUNCTION(UItemObject::execIsFull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemObject::execGetItemInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FItemObjectStruct*)Z_Param__Result=P_THIS->GetItemInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemObject::execInitItemObject)
	{
		P_GET_STRUCT(FItemObjectStruct,Z_Param_inStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FItemObjectStruct*)Z_Param__Result=P_THIS->InitItemObject(Z_Param_inStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemObject::execGetItemIsStack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemIsStack();
		P_NATIVE_END;
	}
	static FName NAME_UItemObject_RemoveItem = FName(TEXT("RemoveItem"));
	void UItemObject::RemoveItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_UItemObject_RemoveItem),NULL);
	}
	static FName NAME_UItemObject_UseItem = FName(TEXT("UseItem"));
	void UItemObject::UseItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_UItemObject_UseItem),NULL);
	}
	void UItemObject::StaticRegisterNativesUItemObject()
	{
		UClass* Class = UItemObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemInfo", &UItemObject::execGetItemInfo },
			{ "GetItemIsStack", &UItemObject::execGetItemIsStack },
			{ "InitItemObject", &UItemObject::execInitItemObject },
			{ "IsFull", &UItemObject::execIsFull },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemObject_GetItemInfo_Statics
	{
		struct ItemObject_eventGetItemInfo_Parms
		{
			FItemObjectStruct ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemObject_GetItemInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemObject_eventGetItemInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemObjectStruct, METADATA_PARAMS(0, nullptr) }; // 1712027032
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemObject_GetItemInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_GetItemInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemObject_GetItemInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "InventoryComponent|Tools" },
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe7\x89\xa9\xe5\x93\x81\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/ItemObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemObject_GetItemInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemObject, nullptr, "GetItemInfo", nullptr, nullptr, Z_Construct_UFunction_UItemObject_GetItemInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemObject_GetItemInfo_Statics::ItemObject_eventGetItemInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemObject_GetItemInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItemObject_GetItemInfo_Statics::ItemObject_eventGetItemInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemObject_GetItemInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemObject_GetItemInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemObject_GetItemIsStack_Statics
	{
		struct ItemObject_eventGetItemIsStack_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UItemObject_GetItemIsStack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ItemObject_eventGetItemIsStack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemObject_GetItemIsStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemObject_eventGetItemIsStack_Parms), &Z_Construct_UFunction_UItemObject_GetItemIsStack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemObject_GetItemIsStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_GetItemIsStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemObject_GetItemIsStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "InventoryComponent|Tools" },
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe7\x89\xa9\xe5\x93\x81\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe5\x8f\xa0\xe5\x8a\xa0" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/ItemObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemObject_GetItemIsStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemObject, nullptr, "GetItemIsStack", nullptr, nullptr, Z_Construct_UFunction_UItemObject_GetItemIsStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemIsStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemObject_GetItemIsStack_Statics::ItemObject_eventGetItemIsStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemIsStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemObject_GetItemIsStack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemIsStack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItemObject_GetItemIsStack_Statics::ItemObject_eventGetItemIsStack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemObject_GetItemIsStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemObject_GetItemIsStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemObject_InitItemObject_Statics
	{
		struct ItemObject_eventInitItemObject_Parms
		{
			FItemObjectStruct inStruct;
			FItemObjectStruct ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemObject_InitItemObject_Statics::NewProp_inStruct = { "inStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemObject_eventInitItemObject_Parms, inStruct), Z_Construct_UScriptStruct_FItemObjectStruct, METADATA_PARAMS(0, nullptr) }; // 1712027032
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemObject_InitItemObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemObject_eventInitItemObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemObjectStruct, METADATA_PARAMS(0, nullptr) }; // 1712027032
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemObject_InitItemObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_InitItemObject_Statics::NewProp_inStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_InitItemObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemObject_InitItemObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "InventoryComponent|Tools" },
		{ "DisplayName", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe7\x89\xa9\xe5\x93\x81\xe5\xaf\xb9\xe8\xb1\xa1" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/ItemObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemObject_InitItemObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemObject, nullptr, "InitItemObject", nullptr, nullptr, Z_Construct_UFunction_UItemObject_InitItemObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_InitItemObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemObject_InitItemObject_Statics::ItemObject_eventInitItemObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_InitItemObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemObject_InitItemObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_InitItemObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItemObject_InitItemObject_Statics::ItemObject_eventInitItemObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemObject_InitItemObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemObject_InitItemObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemObject_IsFull_Statics
	{
		struct ItemObject_eventIsFull_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UItemObject_IsFull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ItemObject_eventIsFull_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemObject_IsFull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemObject_eventIsFull_Parms), &Z_Construct_UFunction_UItemObject_IsFull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemObject_IsFull_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_IsFull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemObject_IsFull_Statics::Function_MetaDataParams[] = {
		{ "Category", "InventoryComponent|Tools" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe5\xb7\xb2\xe6\xbb\xa1?" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/ItemObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemObject_IsFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemObject, nullptr, "IsFull", nullptr, nullptr, Z_Construct_UFunction_UItemObject_IsFull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_IsFull_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemObject_IsFull_Statics::ItemObject_eventIsFull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_IsFull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemObject_IsFull_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_IsFull_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItemObject_IsFull_Statics::ItemObject_eventIsFull_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemObject_IsFull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemObject_IsFull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemObject_RemoveItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemObject_RemoveItem_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe7\xa7\xbb\xe9\x99\xa4\xe7\x89\xa9\xe5\x93\x81" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/ItemObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemObject_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemObject, nullptr, "RemoveItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemObject_RemoveItem_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UItemObject_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemObject_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemObject_UseItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemObject_UseItem_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe4\xbd\xbf\xe7\x94\xa8\xe7\x89\xa9\xe5\x93\x81" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/ItemObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemObject_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemObject, nullptr, "UseItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_UseItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemObject_UseItem_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UItemObject_UseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemObject_UseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemObject);
	UClass* Z_Construct_UClass_UItemObject_NoRegister()
	{
		return UItemObject::StaticClass();
	}
	struct Z_Construct_UClass_UItemObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsStackable_MetaData[];
#endif
		static void NewProp_IsStackable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStackable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ItemTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplay,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemObject_GetItemInfo, "GetItemInfo" }, // 2755749384
		{ &Z_Construct_UFunction_UItemObject_GetItemIsStack, "GetItemIsStack" }, // 519268445
		{ &Z_Construct_UFunction_UItemObject_InitItemObject, "InitItemObject" }, // 3716676610
		{ &Z_Construct_UFunction_UItemObject_IsFull, "IsFull" }, // 2957825039
		{ &Z_Construct_UFunction_UItemObject_RemoveItem, "RemoveItem" }, // 3927347373
		{ &Z_Construct_UFunction_UItemObject_UseItem, "UseItem" }, // 175414396
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DreamGamePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe5\xaf\xb9\xe8\xb1\xa1" },
		{ "IncludePath", "Gameplay/Inventory/ItemObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/ItemObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemObject_Statics::NewProp_SlotID_MetaData[] = {
		{ "Category", "ItemObject" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe6\x8f\x92\xe6\xa7\xbdID" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/ItemObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemObject_Statics::NewProp_SlotID = { "SlotID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemObject, SlotID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::NewProp_SlotID_MetaData), Z_Construct_UClass_UItemObject_Statics::NewProp_SlotID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemObject_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "ItemObject" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81""Actor" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/ItemObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemObject_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemObject, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::NewProp_Actor_MetaData), Z_Construct_UClass_UItemObject_Statics::NewProp_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemObject_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "ItemObject" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81ID" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/ItemObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemObject_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemObject, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::NewProp_ID_MetaData), Z_Construct_UClass_UItemObject_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemObject_Statics::NewProp_DisplayInfo_MetaData[] = {
		{ "Category", "ItemObject" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81HUD\xe6\x98\xbe\xe7\xa4\xba\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/ItemObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemObject_Statics::NewProp_DisplayInfo = { "DisplayInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemObject, DisplayInfo), Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::NewProp_DisplayInfo_MetaData), Z_Construct_UClass_UItemObject_Statics::NewProp_DisplayInfo_MetaData) }; // 3231882402
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemObject_Statics::NewProp_IsStackable_MetaData[] = {
		{ "Category", "ItemObject" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe5\x8f\xa0\xe5\x8a\xa0" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/ItemObject.h" },
	};
#endif
	void Z_Construct_UClass_UItemObject_Statics::NewProp_IsStackable_SetBit(void* Obj)
	{
		((UItemObject*)Obj)->IsStackable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemObject_Statics::NewProp_IsStackable = { "IsStackable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemObject), &Z_Construct_UClass_UItemObject_Statics::NewProp_IsStackable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::NewProp_IsStackable_MetaData), Z_Construct_UClass_UItemObject_Statics::NewProp_IsStackable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemObject_Statics::NewProp_MaxStackCount_MetaData[] = {
		{ "Category", "ItemObject" },
		{ "DisplayName", "\xe6\x9c\x80\xe5\xa4\xa7\xe5\x8f\xa0\xe5\x8a\xa0\xe6\x95\xb0\xe9\x87\x8f" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/ItemObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemObject_Statics::NewProp_MaxStackCount = { "MaxStackCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemObject, MaxStackCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::NewProp_MaxStackCount_MetaData), Z_Construct_UClass_UItemObject_Statics::NewProp_MaxStackCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemObject_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "ItemObject" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe9\x87\x8f" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/ItemObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemObject_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemObject, Count), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::NewProp_Count_MetaData), Z_Construct_UClass_UItemObject_Statics::NewProp_Count_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UItemObject_Statics::NewProp_ItemTags_Inner = { "ItemTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemObject_Statics::NewProp_ItemTags_MetaData[] = {
		{ "Category", "ItemObject" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe6\xa0\x87\xe7\xad\xbe" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/ItemObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UItemObject_Statics::NewProp_ItemTags = { "ItemTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemObject, ItemTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::NewProp_ItemTags_MetaData), Z_Construct_UClass_UItemObject_Statics::NewProp_ItemTags_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemObject_Statics::NewProp_SlotID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemObject_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemObject_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemObject_Statics::NewProp_DisplayInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemObject_Statics::NewProp_IsStackable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemObject_Statics::NewProp_MaxStackCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemObject_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemObject_Statics::NewProp_ItemTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemObject_Statics::NewProp_ItemTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemObject_Statics::ClassParams = {
		&UItemObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UItemObject()
	{
		if (!Z_Registration_Info_UClass_UItemObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemObject.OuterSingleton, Z_Construct_UClass_UItemObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemObject.OuterSingleton;
	}
	template<> DREAMGAMEPLAY_API UClass* StaticClass<UItemObject>()
	{
		return UItemObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemObject);
	UItemObject::~UItemObject() {}
	struct Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_ItemObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_ItemObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemObject, UItemObject::StaticClass, TEXT("UItemObject"), &Z_Registration_Info_UClass_UItemObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemObject), 519199138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_ItemObject_h_3989653922(TEXT("/Script/DreamGameplay"),
		Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_ItemObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_ItemObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
