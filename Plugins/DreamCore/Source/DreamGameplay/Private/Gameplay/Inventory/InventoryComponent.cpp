// ByDreamMoonStudio. https://dmstudio.top - DREAM MOON 2024 -
// NEW YEAR!!!


#include "Gameplay/Inventory/InventoryComponent.h"

DEFINE_LOG_CATEGORY(LogInventory)

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

UInventoryComponent* UInventoryComponent::GetInventoryComponent()
{
	return this;
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                        FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInventoryComponent::SetInventorySize(int Size)
{
	inventorySize = Size;
}

bool UInventoryComponent::IsInventoryFull()
{
	int num = inventoryData.Num() + 1;
	return num > inventorySize;
}

UItemObject* UInventoryComponent::GetItemBySlotID(int slotID)
{
	if (slotID == -1)
	{
		UE_LOG(LogInventory, Error, TEXT("InventoryComponent::GetItemBySlotID.slotID is -1!!!"));
		return nullptr;
	}

	if (IsValid(inventoryData[slotID]))
	{
		return inventoryData[slotID];
	}
	else
	{
		return nullptr;
	}
}

TArray<UItemObject*> UInventoryComponent::GetItemsByClass(TSubclassOf<UItemObject> itemClass)
{
	TArray<UItemObject*> Buffer;
	for (auto ItemObject : inventoryData)
	{
		if (ItemObject->ID == itemClass.GetDefaultObject()->ID)
		{
			Buffer.Add(ItemObject);
		}
	}
	return Buffer;
}

void UInventoryComponent::CreatItem(TSubclassOf<UItemObject> itemClass, UItemObject*& Object, bool& bSuccess)
{
	if (!IsInventoryFull())
	{
		UItemObject* newObject = NewObject<UItemObject>(GetInventoryComponent(), itemClass);
		int index = inventoryData.Add(newObject);
		inventoryData[index]->SlotID = index;
		Object = inventoryData[index];
		bSuccess = true;
		return;
	}
	else
	{
		bSuccess = false;
		return;
	}
}

int UInventoryComponent::GetItemSlot(TSubclassOf<UItemObject> itemClass)
{
	if (!itemClass.GetDefaultObject()->IsStackable) { return -1; }
	// for (int i = 0; i < inventoryData.Num(); ++i)
	// {
	// 	if (inventoryData[i]->ID == itemClass.GetDefaultObject()->ID && inventoryData[i]->Count < itemClass.
	// 		GetDefaultObject()->MaxStackCount && !inventoryData[i]->IsFull())
	// 	{
	// 		return i;
	// 	}
	// 	else
	// 	{
	// 		UE_LOG(LogInventory, Warning, TEXT("Item ID : %d is not | %3d / %3d \n"), inventoryData[i]->ID,
	// 		       inventoryData.Num(), i);
	// 	}
	// }
	if (itemClass.GetDefaultObject()->GetItemIsStack())
	{
		for (auto Element : inventoryData)
		{
			if (Element->ID == itemClass.GetDefaultObject()->ID && Element->Count < itemClass.GetDefaultObject()->
				MaxStackCount && !Element->IsFull())
			{
				return inventoryData.Find(Element);
			}
			else
			{
			}
		}
		return -1;
	}
	else
	{
		return -1;
	}
	return -1;
}

FItemAddOut UInventoryComponent::AddItem(TSubclassOf<UItemObject> itemClass, int inCount)
{
	if (itemClass.GetDefaultObject()->GetItemIsStack())
	{
		// Is Stack
		for (int i = 0; i < inCount; ++i)
		{
			int slotID = GetItemSlot(itemClass);
			UItemObject* ItemObject = nullptr;
			bool bIsCreated;

			// 没找到插槽
			if (slotID == -1)
			{
				CreatItem(itemClass, ItemObject, bIsCreated);
				if (bIsCreated)
				{
					continue;
				}
				else
				{
					return FItemAddOut(false, inCount - i);
				}
			}
			else
			{
				ItemObject = GetItemBySlotID(slotID);
				int bufNum = ItemObject->Count + 1; // Get BufferNum = ItemObject.Count + 1

				if (bufNum > ItemObject->MaxStackCount) // if BufferNum > MaxStackCount?
				{
					UItemObject* Object = nullptr;
					bool isCreated;

					CreatItem(itemClass, Object, isCreated);

					if (!isCreated)
					{
						return FItemAddOut(false, inCount - i);
					}
				}
				else
				{
					GetItemBySlotID(slotID)->Count = GetItemBySlotID(slotID)->Count + 1;
				}
			}
		}
		return FItemAddOut(true, 0);
	}
	else
	{
		for (int i = 0; i < inCount; ++i)
		{
			UItemObject* newObj;
			bool isCreated;

			CreatItem(itemClass, newObj, isCreated);
			if (!isCreated)
			{
				return FItemAddOut(false, inCount - i);
			}
		}
		return FItemAddOut(false, inCount);
	}
}

void UInventoryComponent::UseItemByClass(TSubclassOf<UItemObject> itemClass, int inCount)
{
	for (int i = 0; i < inCount; ++i)
	{
		OnUseItem.Broadcast(itemClass.GetDefaultObject()->GetItemInfo());
		int index = GetItemSlot(itemClass);
		GetItemBySlotID(index)->UseItem();
		RemoveItemBySlotID(index, 1);
	}
}

void UInventoryComponent::UseItemBySlotID(int SlotID, int inCount)
{
	for (int i = 0; i < inCount; ++i)
	{
		UItemObject* Object = inventoryData[SlotID];
		Object->UseItem();
		OnUseItem.Broadcast(Object->GetItemInfo());
		RemoveItemBySlotID(SlotID, 1);
	}
}

FItemRemoveOut UInventoryComponent::RemoveItemByClass(TSubclassOf<UItemObject> itemClass, int inCount)
{
	for (int i = 0; i < inCount; ++i)
	{
		UItemObject* ItemObject;
		if (GetItemsByClass(itemClass).IsEmpty()) { return FItemRemoveOut(false, inCount - i); }
		ItemObject = GetItemsByClass(itemClass).Last();
		if (ItemObject->Count - 1 <= 0)
		{
			int index = inventoryData.Find(ItemObject);
			ItemObject->RemoveItem();
			inventoryData.RemoveAt(index);
		}
		else
		{
			ItemObject->Count -= 1;
			ItemObject->RemoveItem();
		}
	}

	return FItemRemoveOut(true);
}

FItemRemoveOut UInventoryComponent::RemoveItemBySlotID(int SlotID, int inCount)
{
	for (int i = 0; i < inCount; ++i)
	{
		UItemObject* ItemObject = GetItemBySlotID(SlotID);
		if (!IsValid(ItemObject)) { return FItemRemoveOut(false, inCount - i); }
		if (ItemObject->Count - 1 <= 0)
		{
			int index = inventoryData.Find(ItemObject);
			ItemObject->RemoveItem();
			inventoryData.RemoveAt(index);
		}
		else
		{
			ItemObject->Count -= 1;
			ItemObject->RemoveItem();
		}
	}

	return FItemRemoveOut(true);
}

void UInventoryComponent::ReSetSlotID()
{
	for (int i = 0; i < inventoryData.Num() - 1; ++i)
	{
		inventoryData[i]->SlotID = i;
	}
}

void UInventoryComponent::SortItemByType()
{
	inventoryData.Sort(
		[](const UItemObject& A, const UItemObject& B)
		{
			return A.DisplayInfo.Type > B.DisplayInfo.Type;
		}
	);
}

void UInventoryComponent::SortItemByCount()
{
	inventoryData.Sort(
		[](const UItemObject& A, const UItemObject& B)
		{
			return A.Count > B.Count;
		}
	);
}

FString UInventoryComponent::GetDebugString(int lineCount)
{
	FString buf;
	for (int i = 0; i < inventoryData.Num(); ++i)
	{
		UItemObject* Element = inventoryData[i];
		buf.Append(buf.Printf(
			TEXT("SLOT ID = %5d : ID = %d : COUNT = %d : MAXCOUNT = %d"), Element->SlotID, Element->ID, Element->Count,
			Element->MaxStackCount));
		if (i % lineCount == 0)
		{
			buf.Append("\n");
		}
		else
		{
			buf.Append("     ");
		}
	}
	return buf;
}
