// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameBase/NCharacter.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DreamGpCoreBlueprintFunctionLib.generated.h"

/**
 * 
 */
UCLASS(DisplayName="DreamGameplayCore蓝图函数库")
class DREAMGAMEPLAY_API UDreamGpCoreBlueprintFunctionLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, DisplayName="获取NCharacter", Category="Tools", meta=(WorldContext="WorldContextObject"))
	static ANCharacter* GetNCharacter(const UObject* WorldContextObject, int32 PlayerIndex);
};
