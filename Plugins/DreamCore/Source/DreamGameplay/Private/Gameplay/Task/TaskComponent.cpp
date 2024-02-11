// ByDreamMoonStudio. https://dmstudio.top - DREAM MOON 2024 -


#include "Gameplay/Task/TaskComponent.h"


FTaskInfo FTaskInfo::GetInvalidTask()
{
	FTaskInfo buf;
	buf.ID = -1;
	buf.Name = FText::FromString(FString("InvalidTask"));
	buf.Description = FText::FromString(FString("InvalidTask"));
	buf.State = ETaskState::ETS_None;
	buf.Rewards = FTaskRewards();
	buf.TaskType = nullptr;
	buf.MainType = EMainTaskType::ETT_None;
	return buf;
}

// Sets default values for this component's properties
UTaskComponent::UTaskComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTaskComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTaskComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

FTaskInfo UTaskComponent::FindTaskInfoByID(int ID)
{
	for (auto Element : TaskList)
	{
		if (Element.ID == ID)
		{
			return Element;
		}
	}
	return FTaskInfo::GetInvalidTask();
}

void UTaskComponent::AddTask(int ID)
{
}

void UTaskComponent::RemoveTask(int ID)
{
}


