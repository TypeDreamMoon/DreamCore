// ByDreamMoonStudio. https://dmstudio.top - DREAM MOON 2024 -

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TaskCommon.h"
#include "TaskComponent.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogTask, Log, All);

// Event
//DECLARE_DYNAMIC_DELEGATE();



UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), DisplayName="任务组件", Category="DreamGamePlay")
class DREAMGAMEPLAY_API UTaskComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UTaskComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="任务列表")
	TArray<FTaskInfo> TaskList;

public:
	UFUNCTION(BlueprintPure, DisplayName="查找列表内任务信息(ByID)")
	FTaskInfo FindTaskInfoByID(int ID);

	UFUNCTION(BlueprintCallable, DisplayName="添加任务(ByID)")
	void AddTask(int ID);

	UFUNCTION(BlueprintCallable, DisplayName="移除任务(ByID)")
	void RemoveTask(int ID);
};
