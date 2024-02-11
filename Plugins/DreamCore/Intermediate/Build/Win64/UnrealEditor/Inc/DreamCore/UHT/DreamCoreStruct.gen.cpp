// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamCore/Public/Data/DreamCoreStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamCoreStruct() {}
// Cross Module References
	DREAMCORE_API UClass* Z_Construct_UClass_UDreamCoreStruct();
	DREAMCORE_API UClass* Z_Construct_UClass_UDreamCoreStruct_NoRegister();
	DREAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDWorldInfo();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_DreamCore();
// End Cross Module References
	void UDreamCoreStruct::StaticRegisterNativesUDreamCoreStruct()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDreamCoreStruct);
	UClass* Z_Construct_UClass_UDreamCoreStruct_NoRegister()
	{
		return UDreamCoreStruct::StaticClass();
	}
	struct Z_Construct_UClass_UDreamCoreStruct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDreamCoreStruct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserDefinedStruct,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamCoreStruct_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDreamCoreStruct_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Data/DreamCoreStruct.h" },
		{ "ModuleRelativePath", "Public/Data/DreamCoreStruct.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDreamCoreStruct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDreamCoreStruct>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDreamCoreStruct_Statics::ClassParams = {
		&UDreamCoreStruct::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamCoreStruct_Statics::Class_MetaDataParams), Z_Construct_UClass_UDreamCoreStruct_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDreamCoreStruct()
	{
		if (!Z_Registration_Info_UClass_UDreamCoreStruct.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDreamCoreStruct.OuterSingleton, Z_Construct_UClass_UDreamCoreStruct_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDreamCoreStruct.OuterSingleton;
	}
	template<> DREAMCORE_API UClass* StaticClass<UDreamCoreStruct>()
	{
		return UDreamCoreStruct::StaticClass();
	}
	UDreamCoreStruct::UDreamCoreStruct(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamCoreStruct);
	UDreamCoreStruct::~UDreamCoreStruct() {}

static_assert(std::is_polymorphic<FDWorldInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDWorldInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DWorldInfo;
class UScriptStruct* FDWorldInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DWorldInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DWorldInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDWorldInfo, (UObject*)Z_Construct_UPackage__Script_DreamCore(), TEXT("DWorldInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DWorldInfo.OuterSingleton;
}
template<> DREAMCORE_API UScriptStruct* StaticStruct<FDWorldInfo>()
{
	return FDWorldInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDWorldInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDWorldInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "D\xe4\xb8\x96\xe7\x95\x8c\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ModuleRelativePath", "Public/Data/DreamCoreStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDWorldInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDWorldInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDWorldInfo_Statics::NewProp_LevelName_MetaData[] = {
		{ "Category", "DWorldInfo" },
		{ "DisplayName", "\xe5\x9c\xb0\xe5\x9b\xbe\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/Data/DreamCoreStruct.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDWorldInfo_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDWorldInfo, LevelName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDWorldInfo_Statics::NewProp_LevelName_MetaData), Z_Construct_UScriptStruct_FDWorldInfo_Statics::NewProp_LevelName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDWorldInfo_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "DWorldInfo" },
		{ "DisplayName", "\xe5\x9c\xb0\xe5\x9b\xbe" },
		{ "ModuleRelativePath", "Public/Data/DreamCoreStruct.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDWorldInfo_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDWorldInfo, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDWorldInfo_Statics::NewProp_Level_MetaData), Z_Construct_UScriptStruct_FDWorldInfo_Statics::NewProp_Level_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDWorldInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDWorldInfo_Statics::NewProp_LevelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDWorldInfo_Statics::NewProp_Level,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDWorldInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DreamCore,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"DWorldInfo",
		Z_Construct_UScriptStruct_FDWorldInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDWorldInfo_Statics::PropPointers),
		sizeof(FDWorldInfo),
		alignof(FDWorldInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDWorldInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDWorldInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDWorldInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDWorldInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_DWorldInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DWorldInfo.InnerSingleton, Z_Construct_UScriptStruct_FDWorldInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DWorldInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_Data_DreamCoreStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_Data_DreamCoreStruct_h_Statics::ScriptStructInfo[] = {
		{ FDWorldInfo::StaticStruct, Z_Construct_UScriptStruct_FDWorldInfo_Statics::NewStructOps, TEXT("DWorldInfo"), &Z_Registration_Info_UScriptStruct_DWorldInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDWorldInfo), 1050516807U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_Data_DreamCoreStruct_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDreamCoreStruct, UDreamCoreStruct::StaticClass, TEXT("UDreamCoreStruct"), &Z_Registration_Info_UClass_UDreamCoreStruct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDreamCoreStruct), 3302219918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_Data_DreamCoreStruct_h_1953356518(TEXT("/Script/DreamCore"),
		Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_Data_DreamCoreStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_Data_DreamCoreStruct_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_Data_DreamCoreStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamCore_Public_Data_DreamCoreStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
