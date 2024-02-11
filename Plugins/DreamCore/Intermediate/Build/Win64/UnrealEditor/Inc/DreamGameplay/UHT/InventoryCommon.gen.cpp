// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplay/Public/Gameplay/Inventory/InventoryCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryCommon() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DREAMGAMEPLAY_API UEnum* Z_Construct_UEnum_DreamGameplay_EItemType();
	DREAMGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FItemAddOut();
	DREAMGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct();
	DREAMGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FItemObjectStruct();
	DREAMGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FItemRemoveOut();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_DreamGameplay();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemAddOut;
class UScriptStruct* FItemAddOut::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemAddOut.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemAddOut.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemAddOut, (UObject*)Z_Construct_UPackage__Script_DreamGameplay(), TEXT("ItemAddOut"));
	}
	return Z_Registration_Info_UScriptStruct_ItemAddOut.OuterSingleton;
}
template<> DREAMGAMEPLAY_API UScriptStruct* StaticStruct<FItemAddOut>()
{
	return FItemAddOut::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemAddOut_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemainCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddOut_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DreamGamePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Struct\n" },
#endif
		{ "DisplayName", "\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x89\xa9\xe5\x93\x81\xe8\xbe\x93\xe5\x87\xba" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FItemAddOut_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemAddOut>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddOut_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "ItemAddOut" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemAddOut_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FItemAddOut*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemAddOut_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemAddOut), &Z_Construct_UScriptStruct_FItemAddOut_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddOut_Statics::NewProp_bSuccess_MetaData), Z_Construct_UScriptStruct_FItemAddOut_Statics::NewProp_bSuccess_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddOut_Statics::NewProp_RemainCount_MetaData[] = {
		{ "Category", "ItemAddOut" },
		{ "DisplayName", "\xe5\x89\xa9\xe4\xbd\x99\xe6\x95\xb0\xe9\x87\x8f" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemAddOut_Statics::NewProp_RemainCount = { "RemainCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAddOut, RemainCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddOut_Statics::NewProp_RemainCount_MetaData), Z_Construct_UScriptStruct_FItemAddOut_Statics::NewProp_RemainCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemAddOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddOut_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddOut_Statics::NewProp_RemainCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemAddOut_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplay,
		nullptr,
		&NewStructOps,
		"ItemAddOut",
		Z_Construct_UScriptStruct_FItemAddOut_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddOut_Statics::PropPointers),
		sizeof(FItemAddOut),
		alignof(FItemAddOut),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddOut_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemAddOut_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddOut_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemAddOut()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemAddOut.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemAddOut.InnerSingleton, Z_Construct_UScriptStruct_FItemAddOut_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemAddOut.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemRemoveOut;
class UScriptStruct* FItemRemoveOut::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemRemoveOut.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemRemoveOut.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemRemoveOut, (UObject*)Z_Construct_UPackage__Script_DreamGameplay(), TEXT("ItemRemoveOut"));
	}
	return Z_Registration_Info_UScriptStruct_ItemRemoveOut.OuterSingleton;
}
template<> DREAMGAMEPLAY_API UScriptStruct* StaticStruct<FItemRemoveOut>()
{
	return FItemRemoveOut::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemRemoveOut_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemainCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemRemoveOut_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DreamGamePlay" },
		{ "DisplayName", "\xe7\xa7\xbb\xe9\x99\xa4\xe7\x89\xa9\xe5\x93\x81\xe8\xbe\x93\xe5\x87\xba" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemRemoveOut_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemRemoveOut>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemRemoveOut_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "ItemRemoveOut" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemRemoveOut_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FItemRemoveOut*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemRemoveOut_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemRemoveOut), &Z_Construct_UScriptStruct_FItemRemoveOut_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRemoveOut_Statics::NewProp_bSuccess_MetaData), Z_Construct_UScriptStruct_FItemRemoveOut_Statics::NewProp_bSuccess_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemRemoveOut_Statics::NewProp_RemainCount_MetaData[] = {
		{ "Category", "ItemRemoveOut" },
		{ "DisplayName", "\xe5\x89\xa9\xe4\xbd\x99\xe6\x95\xb0\xe9\x87\x8f" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemRemoveOut_Statics::NewProp_RemainCount = { "RemainCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemRemoveOut, RemainCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRemoveOut_Statics::NewProp_RemainCount_MetaData), Z_Construct_UScriptStruct_FItemRemoveOut_Statics::NewProp_RemainCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemRemoveOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemRemoveOut_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemRemoveOut_Statics::NewProp_RemainCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemRemoveOut_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplay,
		nullptr,
		&NewStructOps,
		"ItemRemoveOut",
		Z_Construct_UScriptStruct_FItemRemoveOut_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRemoveOut_Statics::PropPointers),
		sizeof(FItemRemoveOut),
		alignof(FItemRemoveOut),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRemoveOut_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemRemoveOut_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRemoveOut_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemRemoveOut()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemRemoveOut.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemRemoveOut.InnerSingleton, Z_Construct_UScriptStruct_FItemRemoveOut_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemRemoveOut.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
	static UEnum* EItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DreamGameplay_EItemType, (UObject*)Z_Construct_UPackage__Script_DreamGameplay(), TEXT("EItemType"));
		}
		return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
	}
	template<> DREAMGAMEPLAY_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_DreamGameplay_EItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DreamGameplay_EItemType_Statics::Enumerators[] = {
		{ "EItemType::EIT_None", (int64)EItemType::EIT_None },
		{ "EItemType::EIT_Weapon", (int64)EItemType::EIT_Weapon },
		{ "EItemType::EIT_Prop", (int64)EItemType::EIT_Prop },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DreamGameplay_EItemType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DreamGamePlay" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "EIT_None.DisplayName", "NONE" },
		{ "EIT_None.Name", "EItemType::EIT_None" },
		{ "EIT_Prop.DisplayName", "\xe9\x81\x93\xe5\x85\xb7" },
		{ "EIT_Prop.Name", "EItemType::EIT_Prop" },
		{ "EIT_Weapon.DisplayName", "\xe6\xad\xa6\xe5\x99\xa8" },
		{ "EIT_Weapon.Name", "EItemType::EIT_Weapon" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DreamGameplay_EItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DreamGameplay,
		nullptr,
		"EItemType",
		"EItemType",
		Z_Construct_UEnum_DreamGameplay_EItemType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DreamGameplay_EItemType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DreamGameplay_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DreamGameplay_EItemType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DreamGameplay_EItemType()
	{
		if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_DreamGameplay_EItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FItemHudDisplayInfoStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemHudDisplayInfoStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemHudDisplayInfoStruct;
class UScriptStruct* FItemHudDisplayInfoStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemHudDisplayInfoStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemHudDisplayInfoStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct, (UObject*)Z_Construct_UPackage__Script_DreamGameplay(), TEXT("ItemHudDisplayInfoStruct"));
	}
	return Z_Registration_Info_UScriptStruct_ItemHudDisplayInfoStruct.OuterSingleton;
}
template<> DREAMGAMEPLAY_API UScriptStruct* StaticStruct<FItemHudDisplayInfoStruct>()
{
	return FItemHudDisplayInfoStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumb_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Thumb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81HUD\xe6\x98\xbe\xe7\xa4\xba\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemHudDisplayInfoStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ItemHudDisplayInfoStruct" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemHudDisplayInfoStruct, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ItemHudDisplayInfoStruct" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe6\x8f\x8f\xe8\xbf\xb0" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemHudDisplayInfoStruct, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Thumb_MetaData[] = {
		{ "Category", "ItemHudDisplayInfoStruct" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Thumb = { "Thumb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemHudDisplayInfoStruct, Thumb), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Thumb_MetaData), Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Thumb_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "ItemHudDisplayInfoStruct" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe7\xad\x89\xe7\xba\xa7\xe9\xa2\x9c\xe8\x89\xb2" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemHudDisplayInfoStruct, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Color_MetaData), Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Color_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "ItemHudDisplayInfoStruct" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemHudDisplayInfoStruct, Type), Z_Construct_UEnum_DreamGameplay_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Type_MetaData) }; // 576839298
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Thumb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplay,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ItemHudDisplayInfoStruct",
		Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::PropPointers),
		sizeof(FItemHudDisplayInfoStruct),
		alignof(FItemHudDisplayInfoStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemHudDisplayInfoStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemHudDisplayInfoStruct.InnerSingleton, Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemHudDisplayInfoStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FItemObjectStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemObjectStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemObjectStruct;
class UScriptStruct* FItemObjectStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemObjectStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemObjectStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemObjectStruct, (UObject*)Z_Construct_UPackage__Script_DreamGameplay(), TEXT("ItemObjectStruct"));
	}
	return Z_Registration_Info_UScriptStruct_ItemObjectStruct.OuterSingleton;
}
template<> DREAMGAMEPLAY_API UScriptStruct* StaticStruct<FItemObjectStruct>()
{
	return FItemObjectStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemObjectStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemHudInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemHudInfo;
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
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemObjectStruct_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "ItemStruct" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemObjectStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "ItemObjectStruct" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81""Actor" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemObjectStruct, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_Actor_MetaData), Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "ItemObjectStruct" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81ID" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemObjectStruct, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_ID_MetaData), Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_ItemHudInfo_MetaData[] = {
		{ "Category", "ItemObjectStruct" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81HUD\xe6\x98\xbe\xe7\xa4\xba\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_ItemHudInfo = { "ItemHudInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemObjectStruct, ItemHudInfo), Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_ItemHudInfo_MetaData), Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_ItemHudInfo_MetaData) }; // 3231882402
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_IsStackable_MetaData[] = {
		{ "Category", "ItemObjectStruct" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe5\x8f\xa0\xe5\x8a\xa0" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_IsStackable_SetBit(void* Obj)
	{
		((FItemObjectStruct*)Obj)->IsStackable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_IsStackable = { "IsStackable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemObjectStruct), &Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_IsStackable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_IsStackable_MetaData), Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_IsStackable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_MaxStackCount_MetaData[] = {
		{ "Category", "ItemObjectStruct" },
		{ "DisplayName", "\xe6\x9c\x80\xe5\xa4\xa7\xe5\x8f\xa0\xe5\x8a\xa0\xe6\x95\xb0\xe9\x87\x8f" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_MaxStackCount = { "MaxStackCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemObjectStruct, MaxStackCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_MaxStackCount_MetaData), Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_MaxStackCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "ItemObjectStruct" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe9\x87\x8f" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemObjectStruct, Count), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_Count_MetaData), Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_Count_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_ItemTags_Inner = { "ItemTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_ItemTags_MetaData[] = {
		{ "Category", "ItemObjectStruct" },
		{ "DisplayName", "\xe7\x89\xa9\xe5\x93\x81\xe6\xa0\x87\xe7\xad\xbe" },
		{ "ModuleRelativePath", "Public/Gameplay/Inventory/InventoryCommon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_ItemTags = { "ItemTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemObjectStruct, ItemTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_ItemTags_MetaData), Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_ItemTags_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemObjectStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_ItemHudInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_IsStackable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_MaxStackCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_ItemTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewProp_ItemTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemObjectStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplay,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ItemObjectStruct",
		Z_Construct_UScriptStruct_FItemObjectStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemObjectStruct_Statics::PropPointers),
		sizeof(FItemObjectStruct),
		alignof(FItemObjectStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemObjectStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemObjectStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemObjectStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemObjectStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemObjectStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemObjectStruct.InnerSingleton, Z_Construct_UScriptStruct_FItemObjectStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemObjectStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryCommon_h_Statics::EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 576839298U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryCommon_h_Statics::ScriptStructInfo[] = {
		{ FItemAddOut::StaticStruct, Z_Construct_UScriptStruct_FItemAddOut_Statics::NewStructOps, TEXT("ItemAddOut"), &Z_Registration_Info_UScriptStruct_ItemAddOut, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemAddOut), 3389704271U) },
		{ FItemRemoveOut::StaticStruct, Z_Construct_UScriptStruct_FItemRemoveOut_Statics::NewStructOps, TEXT("ItemRemoveOut"), &Z_Registration_Info_UScriptStruct_ItemRemoveOut, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemRemoveOut), 4088244605U) },
		{ FItemHudDisplayInfoStruct::StaticStruct, Z_Construct_UScriptStruct_FItemHudDisplayInfoStruct_Statics::NewStructOps, TEXT("ItemHudDisplayInfoStruct"), &Z_Registration_Info_UScriptStruct_ItemHudDisplayInfoStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemHudDisplayInfoStruct), 3231882402U) },
		{ FItemObjectStruct::StaticStruct, Z_Construct_UScriptStruct_FItemObjectStruct_Statics::NewStructOps, TEXT("ItemObjectStruct"), &Z_Registration_Info_UScriptStruct_ItemObjectStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemObjectStruct), 1712027032U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryCommon_h_3924476399(TEXT("/Script/DreamGameplay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryCommon_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Gameplay_Inventory_InventoryCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
