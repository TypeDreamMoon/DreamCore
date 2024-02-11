// NzK RPG Game Framework By Dream Moon http://dmstudio.top

#pragma once

#include "CoreMinimal.h"
#include "Data/DreamGameplayInterface.h"
#include "Engine/GameInstance.h"
#include "NGameInstance.generated.h"

/**
 * 
 */
UCLASS(DisplayName="NZK游戏实例")
class DREAMGAMEPLAY_API UNGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(DisplayName="调试模式")
	bool IsDebugMode;

	UFUNCTION(BlueprintPure, DisplayName="获取调试模式")
	bool GetDebugMode();

	UFUNCTION(BlueprintCallable, DisplayName="设置调试模式")
	void SetDebugMode(bool NewMode);
	
	
};
