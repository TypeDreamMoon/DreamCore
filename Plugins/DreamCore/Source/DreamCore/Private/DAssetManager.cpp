// ByDreamMoonStudio. https://dmstudio.top - DREAM MOON 2024 -


#include "DAssetManager.h"

UDAssetManager* UDAssetManager::GetDAssetManager()
{
	UDAssetManager* This = Cast<UDAssetManager>(GEngine->AssetManager);
	if (This)
	{
		return This;
	}
	else
	{
		return NewObject<UDAssetManager>();
	}
}

FString UDAssetManager::AsyncLoadObject(FSoftObjectPath Path, FOnPackageLoaded OnPackageLoaded)
{
	FString result;
	result += FString::Printf(TEXT("StartLoad:\t%s\n"), *Path.ToString());

	CurrentLoadPackage = Path.ToString();
	LoadPackageAsync(
		CurrentLoadPackage,
		FLoadPackageAsyncDelegate::CreateLambda([=](const FName& PackageName, UPackage* LoadedPackage, EAsyncLoadingResult::Type Result)
			{
				if (Result == EAsyncLoadingResult::Succeeded)
				{
					//可执行通知进行地图切换，即openlevel
					OnPackageLoaded.ExecuteIfBound();
				}
			}), 0, PKG_ContainsMap);
	return result;
}

float UDAssetManager::GetCurrentLoadProgress(int32& LoadedCount, int32& RequestedCount) const
{
	return GetAsyncLoadPercentage(*CurrentLoadPackage);
}
