// ByDreamMoonStudio. https://dmstudio.top - DREAM MOON 2024 -

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "DreamCoreStruct.generated.h"

/**
 * 
 */
UCLASS()
class DREAMCORE_API UDreamCoreStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
};

USTRUCT(DisplayName="D世界信息", BlueprintType)
struct FDWorldInfo : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="地图名称")
	FName LevelName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="地图")
	TSoftObjectPtr<UWorld> Level;
};
