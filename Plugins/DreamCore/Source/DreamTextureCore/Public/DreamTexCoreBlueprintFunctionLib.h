// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DreamTexCoreBlueprintFunctionLib.generated.h"

/**
 * 
 */
UCLASS(DisplayName="DreamTextureCore蓝图函数库")
class DREAMTEXTURECORE_API UDreamTexCoreBlueprintFunctionLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category="Tools", DisplayName="获取Texture所有像素颜色")
	static TArray<FLinearColor> GetAllPixelColor(UTexture2D* Texture2D);

	UFUNCTION(BlueprintCallable, Category="Tools", DisplayName="获取Texture像素颜色")
	static FLinearColor GetPixelColor(UTexture2D* Texture2D, int32 X, int32 Y);
	
	UFUNCTION(BlueprintCallable, Category="Tools", DisplayName="获取Texture主颜色")
	static FLinearColor GetTextureMainColor(UTexture2D* Texture2D);

	UFUNCTION(BlueprintPure, Category="Tools", DisplayName="获取TextureSize")
	static FIntPoint GetTextureSize(UTexture2D* Texture2D);
	
};
