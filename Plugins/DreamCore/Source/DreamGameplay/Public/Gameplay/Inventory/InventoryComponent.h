// ByDreamMoonStudio. https://dmstudio.top - DREAM MOON 2024 -

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Gameplay/Inventory/InventoryCommon.h"
#include "Gameplay/Inventory/ItemObject.h"
#include "InventoryComponent.generated.h"

//
DECLARE_LOG_CATEGORY_EXTERN(LogInventory, Log, All);

// 委托
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUseItem, FItemObjectStruct, ItemInfo);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), DisplayName="背包组件", Category="DreamGamePlay")
class DREAMGAMEPLAY_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInventoryComponent();

	UFUNCTION(BlueprintPure, DisplayName="获取背包组件", Category="DGP|InventoryComponent|Tools")
	UInventoryComponent* GetInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

public:
	UPROPERTY(DisplayName="背包数据", BlueprintReadWrite, EditAnywhere, Category="DGP|InventoryComponent|Value")
	TArray<UItemObject*> inventoryData;

	UPROPERTY(DisplayName="背包大小", BlueprintReadWrite, EditAnywhere, Category="DGP|InventoryComponent|Value")
	int inventorySize;

	UPROPERTY(DisplayName="On使用物品", BlueprintAssignable, Category="DGP|InventoryComponent|Event")
	FOnUseItem OnUseItem;

public:
	UFUNCTION(BlueprintCallable, DisplayName="设置背包大小", Category="DGP|InventoryComponent|Tools")
	void SetInventorySize(int Size);

	UFUNCTION(BlueprintPure, DisplayName="获取背包是否已满", Category="DGP|InventoryComponent|Tools")
	bool IsInventoryFull();

	UFUNCTION(BlueprintPure, DisplayName="获取背包物品(SlotID)", Category="DGP|InventoryComponent|Tools")
	UItemObject* GetItemBySlotID(int slotID);

	UFUNCTION(BlueprintPure, DisplayName="获取背包物品(Class)", Category="DGP|InventoryComponent|Tools")
	TArray<UItemObject*> GetItemsByClass(TSubclassOf<UItemObject> itemClass);

	UFUNCTION(BlueprintCallable, DisplayName="创建背包物品", Category="DGP|InventoryComponent|Tools")
	void CreatItem(TSubclassOf<UItemObject> itemClass, UItemObject*& Object, bool& bSuccess);

	UFUNCTION(BlueprintPure, DisplayName="获取插槽(Class)", Category="DGP|InventoryComponent|Tools")
	int GetItemSlot(TSubclassOf<UItemObject> itemClass);

	UFUNCTION(BlueprintCallable, DisplayName="添加物品", Category="DGP|InventoryComponent|Function")
	FItemAddOut AddItem(TSubclassOf<UItemObject> itemClass, int inCount);

	UFUNCTION(BlueprintCallable, DisplayName="使用物品(Class)", Category="DGP|InventoryComponent|Function")
	void UseItemByClass(TSubclassOf<UItemObject> itemClass, int inCount);

	UFUNCTION(BlueprintCallable, DisplayName="使用物品(SlotID)", Category="DGP|InventoryComponent|Function")
	void UseItemBySlotID(int SlotID, int inCount);

	UFUNCTION(BlueprintCallable, DisplayName="移除物品(Class)", Category="DGP|InventoryComponent|Function")
	FItemRemoveOut RemoveItemByClass(TSubclassOf<UItemObject> itemClass, int inCount);

	UFUNCTION(BlueprintCallable, DisplayName="移除物品(SlotID)", Category="DGP|InventoryComponent|Function")
	FItemRemoveOut RemoveItemBySlotID(int SlotID, int inCount);

	// 从SlotID处开始排序
	UFUNCTION(BlueprintCallable, DisplayName="重置SlotID", Category="DGP|InventoryComponent|Function")
	void ReSetSlotID();

	UFUNCTION(BlueprintCallable, DisplayName="物品排序(Type)", Category="DGP|InventoryComponent|Function")
	void SortItemByType();

	UFUNCTION(BlueprintCallable, DisplayName="物品排序(Count)", Category="DGP|InventoryComponent|Function")
	void SortItemByCount();

	// DEBUG

	UFUNCTION(BlueprintPure, DisplayName="获取调试字符串", Category="DGP|InventoryComponent|Debug")
	FString GetDebugString(int lineCount);
};
