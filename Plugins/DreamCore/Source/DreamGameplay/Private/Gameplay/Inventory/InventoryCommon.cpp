#include "DreamGameplay/Public/Gameplay/Inventory/InventoryCommon.h"

FItemAddOut::FItemAddOut()
{
	bSuccess = false;
	RemainCount = 0;
}

FItemAddOut::FItemAddOut(bool inSuccess, int inRemainCount)
{
	bSuccess = inSuccess;
	RemainCount = inRemainCount;
}

FItemRemoveOut::FItemRemoveOut()
{
	bSuccess = false;
	RemainCount = 0;
}

FItemRemoveOut::FItemRemoveOut(bool Success, int inRemainCount)
{
	bSuccess = Success;
	RemainCount = inRemainCount;
}

FItemRemoveOut::FItemRemoveOut(bool Success)
{
	bSuccess = Success;
	RemainCount = 0;
}

FItemObjectStruct::FItemObjectStruct(UItemObject* ItemObject)
{
}
