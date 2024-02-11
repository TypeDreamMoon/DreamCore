// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamGameplay_init() {}
	DREAMGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DreamGameplay;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DreamGameplay()
	{
		if (!Z_Registration_Info_UPackage__Script_DreamGameplay.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DreamGameplay_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DreamGameplay",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3457AD3A,
				0x0DB7ABFA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DreamGameplay.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DreamGameplay.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DreamGameplay(Z_Construct_UPackage__Script_DreamGameplay, TEXT("/Script/DreamGameplay"), Z_Registration_Info_UPackage__Script_DreamGameplay, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3457AD3A, 0x0DB7ABFA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
