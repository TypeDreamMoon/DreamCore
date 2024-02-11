// Fill out your copyright notice in the Description page of Project Settings.


#include "DreamGpCoreBlueprintFunctionLib.h"

#include "Kismet/GameplayStatics.h"

ANCharacter* UDreamGpCoreBlueprintFunctionLib::GetNCharacter(const UObject* WorldContextObject, int32 PlayerIndex)
{
	return Cast<ANCharacter>(UGameplayStatics::GetPlayerCharacter(WorldContextObject, PlayerIndex)) ? Cast<ANCharacter>(UGameplayStatics::GetPlayerCharacter(WorldContextObject, PlayerIndex)) : nullptr;
}
