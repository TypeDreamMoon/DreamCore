// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplay/Public/Data/DreamGameplayInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamGameplayInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_UDreamGameplayInterface();
	DREAMGAMEPLAY_API UClass* Z_Construct_UClass_UDreamGameplayInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DreamGameplay();
// End Cross Module References
	DEFINE_FUNCTION(IDreamGameplayInterface::execi_SetDebugMode)
	{
		P_GET_UBOOL(Z_Param_NewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->i_SetDebugMode_Implementation(Z_Param_NewMode);
		P_NATIVE_END;
	}
	struct DreamGameplayInterface_eventi_SetDebugMode_Parms
	{
		bool NewMode;
	};
	void IDreamGameplayInterface::i_SetDebugMode(bool NewMode)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_i_SetDebugMode instead.");
	}
	void UDreamGameplayInterface::StaticRegisterNativesUDreamGameplayInterface()
	{
		UClass* Class = UDreamGameplayInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "i_SetDebugMode", &IDreamGameplayInterface::execi_SetDebugMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDreamGameplayInterface_i_SetDebugMode_Statics
	{
		static void NewProp_NewMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDreamGameplayInterface_i_SetDebugMode_Statics::NewProp_NewMode_SetBit(void* Obj)
	{
		((DreamGameplayInterface_eventi_SetDebugMode_Parms*)Obj)->NewMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDreamGameplayInterface_i_SetDebugMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DreamGameplayInterface_eventi_SetDebugMode_Parms), &Z_Construct_UFunction_UDreamGameplayInterface_i_SetDebugMode_Statics::NewProp_NewMode_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamGameplayInterface_i_SetDebugMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayInterface_i_SetDebugMode_Statics::NewProp_NewMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamGameplayInterface_i_SetDebugMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "DreamGameplayInterface" },
		{ "ModuleRelativePath", "Public/Data/DreamGameplayInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamGameplayInterface_i_SetDebugMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamGameplayInterface, nullptr, "i_SetDebugMode", nullptr, nullptr, Z_Construct_UFunction_UDreamGameplayInterface_i_SetDebugMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayInterface_i_SetDebugMode_Statics::PropPointers), sizeof(DreamGameplayInterface_eventi_SetDebugMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayInterface_i_SetDebugMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamGameplayInterface_i_SetDebugMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayInterface_i_SetDebugMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(DreamGameplayInterface_eventi_SetDebugMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamGameplayInterface_i_SetDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamGameplayInterface_i_SetDebugMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDreamGameplayInterface);
	UClass* Z_Construct_UClass_UDreamGameplayInterface_NoRegister()
	{
		return UDreamGameplayInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDreamGameplayInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDreamGameplayInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplay,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamGameplayInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDreamGameplayInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDreamGameplayInterface_i_SetDebugMode, "i_SetDebugMode" }, // 662012057
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamGameplayInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDreamGameplayInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/DreamGameplayInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDreamGameplayInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDreamGameplayInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDreamGameplayInterface_Statics::ClassParams = {
		&UDreamGameplayInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamGameplayInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDreamGameplayInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDreamGameplayInterface()
	{
		if (!Z_Registration_Info_UClass_UDreamGameplayInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDreamGameplayInterface.OuterSingleton, Z_Construct_UClass_UDreamGameplayInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDreamGameplayInterface.OuterSingleton;
	}
	template<> DREAMGAMEPLAY_API UClass* StaticClass<UDreamGameplayInterface>()
	{
		return UDreamGameplayInterface::StaticClass();
	}
	UDreamGameplayInterface::UDreamGameplayInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamGameplayInterface);
	UDreamGameplayInterface::~UDreamGameplayInterface() {}
	static FName NAME_UDreamGameplayInterface_i_SetDebugMode = FName(TEXT("i_SetDebugMode"));
	void IDreamGameplayInterface::Execute_i_SetDebugMode(UObject* O, bool NewMode)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDreamGameplayInterface::StaticClass()));
		DreamGameplayInterface_eventi_SetDebugMode_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDreamGameplayInterface_i_SetDebugMode);
		if (Func)
		{
			Parms.NewMode=NewMode;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDreamGameplayInterface*)(O->GetNativeInterfaceAddress(UDreamGameplayInterface::StaticClass())))
		{
			I->i_SetDebugMode_Implementation(NewMode);
		}
	}
	struct Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Data_DreamGameplayInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Data_DreamGameplayInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDreamGameplayInterface, UDreamGameplayInterface::StaticClass, TEXT("UDreamGameplayInterface"), &Z_Registration_Info_UClass_UDreamGameplayInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDreamGameplayInterface), 1611610819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Data_DreamGameplayInterface_h_91626638(TEXT("/Script/DreamGameplay"),
		Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Data_DreamGameplayInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamMoonStudio_A2Project_StarChapter_UnrealProject_SCGame_Plugins_Developer_DreamCore_Source_DreamGameplay_Public_Data_DreamGameplayInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
