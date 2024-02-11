// ByDreamMoonStudio. https://dmstudio.top - DREAM MOON 2024 -

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "DAssetManager.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_DELEGATE(FOnPackageLoaded);

UCLASS()
class DREAMCORE_API UDAssetManager : public UAssetManager
{
	GENERATED_BODY()

public:
	FString CurrentLoadPackage;

public:
	UFUNCTION(BlueprintPure, CallInEditor, DisplayName="DAssetManager")
	static UDAssetManager* GetDAssetManager();

	UFUNCTION(BlueprintCallable, CallInEditor)
	FString AsyncLoadObject(FSoftObjectPath Path, FOnPackageLoaded OnPackageLoaded);

	UFUNCTION(BlueprintCallable, CallInEditor)
	float GetCurrentLoadProgress(int32& LoadedCount, int32& RequestedCount) const;
	
};
