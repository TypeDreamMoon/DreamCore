// ByDreamMoonStudio. https://dmstudio.top - DREAM MOON 2024 -


#include "Gameplay/Inventory/ItemObject.h"

FItemObjectStruct::FItemObjectStruct()
{
}

UItemObject::UItemObject()
{
}

bool UItemObject::GetItemIsStack()
{
	return IsStackable;
}

FItemObjectStruct UItemObject::InitItemObject(FItemObjectStruct inStruct)
{
	return inStruct;
}

FItemObjectStruct UItemObject::GetItemInfo()
{
	return FItemObjectStruct(this);
}

bool UItemObject::IsFull()
{
	if (IsStackable)
	{
		//可以叠加
		if (Count >= MaxStackCount)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		//不可以叠加
		return true;
	}
}
