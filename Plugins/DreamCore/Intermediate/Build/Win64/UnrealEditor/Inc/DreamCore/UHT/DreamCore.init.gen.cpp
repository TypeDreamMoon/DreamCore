// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamCore_init() {}
	DREAMCORE_API UFunction* Z_Construct_UDelegateFunction_DreamCore_OnPackageLoaded__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DreamCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DreamCore()
	{
		if (!Z_Registration_Info_UPackage__Script_DreamCore.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DreamCore_OnPackageLoaded__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DreamCore",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x77E9FF29,
				0xC62FF798,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DreamCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DreamCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DreamCore(Z_Construct_UPackage__Script_DreamCore, TEXT("/Script/DreamCore"), Z_Registration_Info_UPackage__Script_DreamCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x77E9FF29, 0xC62FF798));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
