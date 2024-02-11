// ByDreamMoonStudio. https://dmstudio.top - DREAM MOON 2024 -

#pragma once
#include "TaskType.h"

#include "TaskCommon.generated.h"

UENUM(BlueprintType, DisplayName = "任务状态", Category="DreamGamePlay")
enum class ETaskState : uint8
{
	ETS_None = 0 UMETA(DisplayName = "None")
};


UENUM(BlueprintType, DisplayName = "任务类型", Category="DreamGamePlay")
enum class EMainTaskType : uint8
{
	ETT_None = 0 UMETA(DisplayName = "None")
};

USTRUCT(BlueprintType, DisplayName="任务奖励", Category="DreamGamePlay")
struct FTaskRewards : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
};

USTRUCT(BlueprintType, DisplayName="任务信息", Category="DreamGamePlay")
struct FTaskInfo : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	static FTaskInfo GetInvalidTask();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="任务ID")
	int ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="任务名称")
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="任务描述")
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="任务目标")
	FText Goal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="任务奖励")
	FTaskRewards Rewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="任务类型")
	UTaskType* TaskType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="任务主类")
	EMainTaskType MainType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="任务状态")
	ETaskState State;
};


