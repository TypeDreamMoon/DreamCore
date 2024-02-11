// NzK RPG Game Framework By Dream Moon http://dmstudio.top


#include "GameBase/NGameInstance.h"

bool UNGameInstance::GetDebugMode()
{
	return IsDebugMode;
}

void UNGameInstance::SetDebugMode(bool NewMode)
{
	IsDebugMode = NewMode;
}
