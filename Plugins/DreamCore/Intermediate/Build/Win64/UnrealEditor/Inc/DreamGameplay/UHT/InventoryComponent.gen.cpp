// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplay/Public/Gameplay/Inventory/InventoryComponent.h"
#include "DreamGameplay/Public/Gameplay/Inventory/InventoryCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_UInventoryComponent();
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_UItemObject_NoRegister();
	DREAMGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature();
	DREAMGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FItemAddOut();
	DREAMGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FItemObjectStruct();
	DREAMGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FItemRemoveOut();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DreamGameplay();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature_Statics
	{
		struct _Script_DreamGameplay_eventOnUseItem_Parms
		{
			FItemObjectStruct ItemInfo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature_Statics::NewProp_ItemInfo = { "ItemInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DreamGameplay_eventOnUseItem_Parms, ItemInfo), Z_Construct_UScriptStruct_FItemObjectStruct, METADATA_PARAMS(0, nullptr) }; // 1712027032
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature_Statics::NewProp_ItemInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa7\x94\xe6\x89\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa7\x94\xe6\x89\x98" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DreamGameplay, nullptr, "OnUseItem__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature_Statics::_Script_DreamGameplay_eventOnUseItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature_Statics::_Script_DreamGameplay_eventOnUseItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem, FItemObjectStruct ItemInfo)
{
	struct _Script_DreamGameplay_eventOnUseItem_Parms
	{
		FItemObjectStruct ItemInfo;
	};
	_Script_DreamGameplay_eventOnUseItem_Parms Parms;
	Parms.ItemInfo=ItemInfo;
	OnUseItem.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UInventoryComponent::execGetDebugString)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_lineCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugString(Z_Param_lineCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execSortItemByCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortItemByCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execSortItemByType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortItemByType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execReSetSlotID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReSetSlotID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execRemoveItemBySlotID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotID);
		P_GET_PROPERTY(FIntProperty,Z_Param_inCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FItemRemoveOut*)Z_Param__Result=P_THIS->RemoveItemBySlotID(Z_Param_SlotID,Z_Param_inCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execRemoveItemByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_itemClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_inCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FItemRemoveOut*)Z_Param__Result=P_THIS->RemoveItemByClass(Z_Param_itemClass,Z_Param_inCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execUseItemBySlotID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotID);
		P_GET_PROPERTY(FIntProperty,Z_Param_inCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseItemBySlotID(Z_Param_SlotID,Z_Param_inCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execUseItemByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_itemClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_inCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseItemByClass(Z_Param_itemClass,Z_Param_inCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execAddItem)
	{
		P_GET_OBJECT(UClass,Z_Param_itemClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_inCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FItemAddOut*)Z_Param__Result=P_THIS->AddItem(Z_Param_itemClass,Z_Param_inCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetItemSlot)
	{
		P_GET_OBJECT(UClass,Z_Param_itemClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetItemSlot(Z_Param_itemClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execCreatItem)
	{
		P_GET_OBJECT(UClass,Z_Param_itemClass);
		P_GET_OBJECT_REF(UItemObject,Z_Param_Out_Object);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreatItem(Z_Param_itemClass,Z_Param_Out_Object,Z_Param_Out_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetItemsByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_itemClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UItemObject*>*)Z_Param__Result=P_THIS->GetItemsByClass(Z_Param_itemClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetItemBySlotID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_slotID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UItemObject**)Z_Param__Result=P_THIS->GetItemBySlotID(Z_Param_slotID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execIsInventoryFull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInventoryFull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execSetInventorySize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInventorySize(Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetInventoryComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInventoryComponent**)Z_Param__Result=P_THIS->GetInventoryComponent();
		P_NATIVE_END;
	}
	void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
	{
		UClass* Class = UInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &UInventoryComponent::execAddItem },
			{ "CreatItem", &UInventoryComponent::execCreatItem },
			{ "GetDebugString", &UInventoryComponent::execGetDebugString },
			{ "GetInventoryComponent", &UInventoryComponent::execGetInventoryComponent },
			{ "GetItemBySlotID", &UInventoryComponent::execGetItemBySlotID },
			{ "GetItemsByClass", &UInventoryComponent::execGetItemsByClass },
			{ "GetItemSlot", &UInventoryComponent::execGetItemSlot },
			{ "IsInventoryFull", &UInventoryComponent::execIsInventoryFull },
			{ "RemoveItemByClass", &UInventoryComponent::execRemoveItemByClass },
			{ "RemoveItemBySlotID", &UInventoryComponent::execRemoveItemBySlotID },
			{ "ReSetSlotID", &UInventoryComponent::execReSetSlotID },
			{ "SetInventorySize", &UInventoryComponent::execSetInventorySize },
			{ "SortItemByCount", &UInventoryComponent::execSortItemByCount },
			{ "SortItemByType", &UInventoryComponent::execSortItemByType },
			{ "UseItemByClass", &UInventoryComponent::execUseItemByClass },
			{ "UseItemBySlotID", &UInventoryComponent::execUseItemBySlotID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryComponent_AddItem_Statics
	{
		struct InventoryComponent_eventAddItem_Parms
		{
			TSubclassOf<UItemObject>  itemClass;
			int32 inCount;
			FItemAddOut ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_inCount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItem_Parms, itemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_inCount = { "inCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItem_Parms, inCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemAddOut, METADATA_PARAMS(0, nullptr) }; // 3389704271
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_itemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_inCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "DGP|InventoryComponent|Function" },
		{ "DisplayName", "\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x89\xa9\xe5\x93\x81" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "AddItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::InventoryComponent_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::InventoryComponent_eventAddItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics
	{
		struct InventoryComponent_eventCreatItem_Parms
		{
			TSubclassOf<UItemObject>  itemClass;
			UItemObject* Object;
			bool bSuccess;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventCreatItem_Parms, itemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventCreatItem_Parms, Object), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((InventoryComponent_eventCreatItem_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventCreatItem_Parms), &Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::NewProp_itemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "DGP|InventoryComponent|Tools" },
		{ "DisplayName", "\xe5\x88\x9b\xe5\xbb\xba\xe8\x83\x8c\xe5\x8c\x85\xe7\x89\xa9\xe5\x93\x81" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "CreatItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::InventoryComponent_eventCreatItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::InventoryComponent_eventCreatItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_CreatItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_CreatItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetDebugString_Statics
	{
		struct InventoryComponent_eventGetDebugString_Parms
		{
			int32 lineCount;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_lineCount;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetDebugString_Statics::NewProp_lineCount = { "lineCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetDebugString_Parms, lineCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventoryComponent_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetDebugString_Statics::NewProp_lineCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "DGP|InventoryComponent|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEBUG\n" },
#endif
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\xb0\x83\xe8\xaf\x95\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEBUG" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetDebugString", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetDebugString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetDebugString_Statics::InventoryComponent_eventGetDebugString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetDebugString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetDebugString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetDebugString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetDebugString_Statics::InventoryComponent_eventGetDebugString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent_Statics
	{
		struct InventoryComponent_eventGetInventoryComponent_Parms
		{
			UInventoryComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetInventoryComponent_Parms, ReturnValue), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "DGP|InventoryComponent|Tools" },
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\x83\x8c\xe5\x8c\x85\xe7\xbb\x84\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetInventoryComponent", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent_Statics::InventoryComponent_eventGetInventoryComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent_Statics::InventoryComponent_eventGetInventoryComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetItemBySlotID_Statics
	{
		struct InventoryComponent_eventGetItemBySlotID_Parms
		{
			int32 slotID;
			UItemObject* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_slotID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemBySlotID_Statics::NewProp_slotID = { "slotID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemBySlotID_Parms, slotID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemBySlotID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemBySlotID_Parms, ReturnValue), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetItemBySlotID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemBySlotID_Statics::NewProp_slotID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemBySlotID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetItemBySlotID_Statics::Function_MetaDataParams[] = {
		{ "Category", "DGP|InventoryComponent|Tools" },
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\x83\x8c\xe5\x8c\x85\xe7\x89\xa9\xe5\x93\x81(SlotID)" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetItemBySlotID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetItemBySlotID", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetItemBySlotID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemBySlotID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetItemBySlotID_Statics::InventoryComponent_eventGetItemBySlotID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemBySlotID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetItemBySlotID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemBySlotID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetItemBySlotID_Statics::InventoryComponent_eventGetItemBySlotID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetItemBySlotID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetItemBySlotID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetItemsByClass_Statics
	{
		struct InventoryComponent_eventGetItemsByClass_Parms
		{
			TSubclassOf<UItemObject>  itemClass;
			TArray<UItemObject*> ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemsByClass_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemsByClass_Parms, itemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemsByClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemsByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemsByClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetItemsByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemsByClass_Statics::NewProp_itemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemsByClass_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemsByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetItemsByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "DGP|InventoryComponent|Tools" },
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\x83\x8c\xe5\x8c\x85\xe7\x89\xa9\xe5\x93\x81(Class)" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetItemsByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetItemsByClass", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetItemsByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemsByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetItemsByClass_Statics::InventoryComponent_eventGetItemsByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemsByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetItemsByClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemsByClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetItemsByClass_Statics::InventoryComponent_eventGetItemsByClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetItemsByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetItemsByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetItemSlot_Statics
	{
		struct InventoryComponent_eventGetItemSlot_Parms
		{
			TSubclassOf<UItemObject>  itemClass;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemSlot_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemSlot_Parms, itemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemSlot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetItemSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemSlot_Statics::NewProp_itemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetItemSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "DGP|InventoryComponent|Tools" },
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8f\x92\xe6\xa7\xbd(Class)" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetItemSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetItemSlot", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetItemSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetItemSlot_Statics::InventoryComponent_eventGetItemSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetItemSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetItemSlot_Statics::InventoryComponent_eventGetItemSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetItemSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetItemSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_IsInventoryFull_Statics
	{
		struct InventoryComponent_eventIsInventoryFull_Parms
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
	void Z_Construct_UFunction_UInventoryComponent_IsInventoryFull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InventoryComponent_eventIsInventoryFull_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_IsInventoryFull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventIsInventoryFull_Parms), &Z_Construct_UFunction_UInventoryComponent_IsInventoryFull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_IsInventoryFull_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_IsInventoryFull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_IsInventoryFull_Statics::Function_MetaDataParams[] = {
		{ "Category", "DGP|InventoryComponent|Tools" },
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\x83\x8c\xe5\x8c\x85\xe6\x98\xaf\xe5\x90\xa6\xe5\xb7\xb2\xe6\xbb\xa1" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_IsInventoryFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "IsInventoryFull", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_IsInventoryFull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_IsInventoryFull_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_IsInventoryFull_Statics::InventoryComponent_eventIsInventoryFull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_IsInventoryFull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_IsInventoryFull_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_IsInventoryFull_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_IsInventoryFull_Statics::InventoryComponent_eventIsInventoryFull_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_IsInventoryFull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_IsInventoryFull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass_Statics
	{
		struct InventoryComponent_eventRemoveItemByClass_Parms
		{
			TSubclassOf<UItemObject>  itemClass;
			int32 inCount;
			FItemRemoveOut ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_inCount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItemByClass_Parms, itemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass_Statics::NewProp_inCount = { "inCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItemByClass_Parms, inCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItemByClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemRemoveOut, METADATA_PARAMS(0, nullptr) }; // 4088244605
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass_Statics::NewProp_itemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass_Statics::NewProp_inCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "DGP|InventoryComponent|Function" },
		{ "DisplayName", "\xe7\xa7\xbb\xe9\x99\xa4\xe7\x89\xa9\xe5\x93\x81(Class)" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveItemByClass", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass_Statics::InventoryComponent_eventRemoveItemByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass_Statics::InventoryComponent_eventRemoveItemByClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID_Statics
	{
		struct InventoryComponent_eventRemoveItemBySlotID_Parms
		{
			int32 SlotID;
			int32 inCount;
			FItemRemoveOut ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_inCount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID_Statics::NewProp_SlotID = { "SlotID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItemBySlotID_Parms, SlotID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID_Statics::NewProp_inCount = { "inCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItemBySlotID_Parms, inCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItemBySlotID_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemRemoveOut, METADATA_PARAMS(0, nullptr) }; // 4088244605
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID_Statics::NewProp_SlotID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID_Statics::NewProp_inCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID_Statics::Function_MetaDataParams[] = {
		{ "Category", "DGP|InventoryComponent|Function" },
		{ "DisplayName", "\xe7\xa7\xbb\xe9\x99\xa4\xe7\x89\xa9\xe5\x93\x81(SlotID)" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveItemBySlotID", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID_Statics::InventoryComponent_eventRemoveItemBySlotID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID_Statics::InventoryComponent_eventRemoveItemBySlotID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_ReSetSlotID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_ReSetSlotID_Statics::Function_MetaDataParams[] = {
		{ "Category", "DGP|InventoryComponent|Function" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x8eSlotID\xe5\xa4\x84\xe5\xbc\x80\xe5\xa7\x8b\xe6\x8e\x92\xe5\xba\x8f\n" },
#endif
		{ "DisplayName", "\xe9\x87\x8d\xe7\xbd\xaeSlotID" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8eSlotID\xe5\xa4\x84\xe5\xbc\x80\xe5\xa7\x8b\xe6\x8e\x92\xe5\xba\x8f" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_ReSetSlotID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "ReSetSlotID", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ReSetSlotID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_ReSetSlotID_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_ReSetSlotID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_ReSetSlotID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_SetInventorySize_Statics
	{
		struct InventoryComponent_eventSetInventorySize_Parms
		{
			int32 Size;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SetInventorySize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSetInventorySize_Parms, Size), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SetInventorySize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SetInventorySize_Statics::NewProp_Size,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_SetInventorySize_Statics::Function_MetaDataParams[] = {
		{ "Category", "DGP|InventoryComponent|Tools" },
		{ "DisplayName", "\xe8\xae\xbe\xe7\xbd\xae\xe8\x83\x8c\xe5\x8c\x85\xe5\xa4\xa7\xe5\xb0\x8f" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SetInventorySize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SetInventorySize", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SetInventorySize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetInventorySize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_SetInventorySize_Statics::InventoryComponent_eventSetInventorySize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetInventorySize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SetInventorySize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetInventorySize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_SetInventorySize_Statics::InventoryComponent_eventSetInventorySize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_SetInventorySize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SetInventorySize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_SortItemByCount_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_SortItemByCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "DGP|InventoryComponent|Function" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe6\x8e\x92\xe5\xba\x8f(Count)" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SortItemByCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SortItemByCount", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SortItemByCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SortItemByCount_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_SortItemByCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SortItemByCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_SortItemByType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_SortItemByType_Statics::Function_MetaDataParams[] = {
		{ "Category", "DGP|InventoryComponent|Function" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe6\x8e\x92\xe5\xba\x8f(Type)" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SortItemByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SortItemByType", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SortItemByType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SortItemByType_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_SortItemByType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SortItemByType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_UseItemByClass_Statics
	{
		struct InventoryComponent_eventUseItemByClass_Parms
		{
			TSubclassOf<UItemObject>  itemClass;
			int32 inCount;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_inCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_UseItemByClass_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventUseItemByClass_Parms, itemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_UseItemByClass_Statics::NewProp_inCount = { "inCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventUseItemByClass_Parms, inCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_UseItemByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_UseItemByClass_Statics::NewProp_itemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_UseItemByClass_Statics::NewProp_inCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_UseItemByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "DGP|InventoryComponent|Function" },
		{ "DisplayName", "\xe4\xbd\xbf\xe7\x94\xa8\xe7\x89\xa9\xe5\x93\x81(Class)" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_UseItemByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "UseItemByClass", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_UseItemByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UseItemByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_UseItemByClass_Statics::InventoryComponent_eventUseItemByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UseItemByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_UseItemByClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UseItemByClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_UseItemByClass_Statics::InventoryComponent_eventUseItemByClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_UseItemByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_UseItemByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_UseItemBySlotID_Statics
	{
		struct InventoryComponent_eventUseItemBySlotID_Parms
		{
			int32 SlotID;
			int32 inCount;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_inCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_UseItemBySlotID_Statics::NewProp_SlotID = { "SlotID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventUseItemBySlotID_Parms, SlotID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_UseItemBySlotID_Statics::NewProp_inCount = { "inCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventUseItemBySlotID_Parms, inCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_UseItemBySlotID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_UseItemBySlotID_Statics::NewProp_SlotID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_UseItemBySlotID_Statics::NewProp_inCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_UseItemBySlotID_Statics::Function_MetaDataParams[] = {
		{ "Category", "DGP|InventoryComponent|Function" },
		{ "DisplayName", "\xe4\xbd\xbf\xe7\x94\xa8\xe7\x89\xa9\xe5\x93\x81(SlotID)" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_UseItemBySlotID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "UseItemBySlotID", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_UseItemBySlotID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UseItemBySlotID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_UseItemBySlotID_Statics::InventoryComponent_eventUseItemBySlotID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UseItemBySlotID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_UseItemBySlotID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UseItemBySlotID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_UseItemBySlotID_Statics::InventoryComponent_eventUseItemBySlotID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_UseItemBySlotID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_UseItemBySlotID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryComponent);
	UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
	{
		return UInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inventoryData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inventoryData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inventoryData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inventorySize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_inventorySize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUseItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUseItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplay,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_AddItem, "AddItem" }, // 2266199385
		{ &Z_Construct_UFunction_UInventoryComponent_CreatItem, "CreatItem" }, // 1807004835
		{ &Z_Construct_UFunction_UInventoryComponent_GetDebugString, "GetDebugString" }, // 2664561435
		{ &Z_Construct_UFunction_UInventoryComponent_GetInventoryComponent, "GetInventoryComponent" }, // 3232997254
		{ &Z_Construct_UFunction_UInventoryComponent_GetItemBySlotID, "GetItemBySlotID" }, // 1270981100
		{ &Z_Construct_UFunction_UInventoryComponent_GetItemsByClass, "GetItemsByClass" }, // 3721504452
		{ &Z_Construct_UFunction_UInventoryComponent_GetItemSlot, "GetItemSlot" }, // 3693862878
		{ &Z_Construct_UFunction_UInventoryComponent_IsInventoryFull, "IsInventoryFull" }, // 1682820277
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveItemByClass, "RemoveItemByClass" }, // 1910875965
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveItemBySlotID, "RemoveItemBySlotID" }, // 1764083008
		{ &Z_Construct_UFunction_UInventoryComponent_ReSetSlotID, "ReSetSlotID" }, // 3874136325
		{ &Z_Construct_UFunction_UInventoryComponent_SetInventorySize, "SetInventorySize" }, // 1226481366
		{ &Z_Construct_UFunction_UInventoryComponent_SortItemByCount, "SortItemByCount" }, // 2334765117
		{ &Z_Construct_UFunction_UInventoryComponent_SortItemByType, "SortItemByType" }, // 3038564575
		{ &Z_Construct_UFunction_UInventoryComponent_UseItemByClass, "UseItemByClass" }, // 3303625907
		{ &Z_Construct_UFunction_UInventoryComponent_UseItemBySlotID, "UseItemBySlotID" }, // 3259281974
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Category", "DreamGamePlay" },
		{ "ClassGroupNames", "Custom" },
		{ "DisplayName", "\xe8\x83\x8c\xe5\x8c\x85\xe7\xbb\x84\xe4\xbb\xb6" },
		{ "IncludePath", "Gameplay/Inventory/InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_inventoryData_Inner = { "inventoryData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_inventoryData_MetaData[] = {
		{ "Category", "DGP|InventoryComponent|Value" },
		{ "DisplayName", "\xe8\x83\x8c\xe5\x8c\x85\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_inventoryData = { "inventoryData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, inventoryData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_inventoryData_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_inventoryData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_inventorySize_MetaData[] = {
		{ "Category", "DGP|InventoryComponent|Value" },
		{ "DisplayName", "\xe8\x83\x8c\xe5\x8c\x85\xe5\xa4\xa7\xe5\xb0\x8f" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_inventorySize = { "inventorySize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, inventorySize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_inventorySize_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_inventorySize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnUseItem_MetaData[] = {
		{ "Category", "DGP|InventoryComponent|Event" },
		{ "DisplayName", "On\xe4\xbd\xbf\xe7\x94\xa8\xe7\x89\xa9\xe5\x93\x81" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnUseItem = { "OnUseItem", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnUseItem), Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnUseItem_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnUseItem_MetaData) }; // 2353128592
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_inventoryData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_inventoryData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_inventorySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnUseItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
		&UInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInventoryComponent()
	{
		if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
	}
	template<> DREAMGAMEPLAY_API UClass* StaticClass<UInventoryComponent>()
	{
		return UInventoryComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
	UInventoryComponent::~UInventoryComponent() {}
	struct Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 3444222378U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_2302890517(TEXT("/Script/DreamGameplay"),
		Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
