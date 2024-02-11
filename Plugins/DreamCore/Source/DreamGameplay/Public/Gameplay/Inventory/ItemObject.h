// ByDreamMoonStudio. https://dmstudio.top - DREAM MOON 2024 -

#pragma once

#include "CoreMinimal.h"
#include "Gameplay/Inventory/InventoryCommon.h"
#include "UObject/Object.h"
#include "ItemObject.generated.h"

/**
 * 
 */

UCLASS(DisplayName="物品对象", Blueprintable, Category="DreamGamePlay")
class DREAMGAMEPLAY_API UItemObject : public UObject
{
	GENERATED_BODY()

	UItemObject();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="物品插槽ID")
	int SlotID = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="物品Actor")
	AActor* Actor = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="物品ID")
	int ID = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="物品HUD显示信息")
	FItemHudDisplayInfoStruct DisplayInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="物品是否可叠加")
	bool IsStackable = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="最大叠加数量")
	int MaxStackCount = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="物品数量")
	int Count = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="物品标签")
	TArray<FName> ItemTags;

public:
	UFUNCTION(BlueprintPure, DisplayName="获取物品是否可叠加", Category="InventoryComponent|Tools")
	bool GetItemIsStack();

	UFUNCTION(BlueprintCallable, DisplayName="初始化物品对象", Category="InventoryComponent|Tools")
	FItemObjectStruct InitItemObject(FItemObjectStruct inStruct);

	UFUNCTION(BlueprintCallable, DisplayName="获取物品信息", Category="InventoryComponent|Tools")
	FItemObjectStruct GetItemInfo();

	UFUNCTION(BlueprintImplementableEvent, DisplayName="使用物品")
	void UseItem();

	UFUNCTION(BlueprintImplementableEvent, DisplayName="移除物品")
	void RemoveItem();


	UFUNCTION(BlueprintPure, DisplayName="物品已满?", Category="InventoryComponent|Tools")
	bool IsFull();
};
