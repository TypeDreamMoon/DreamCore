// ByDreamMoonStudio. https://dmstudio.top - DREAM MOON 2024 -

#pragma once

#include "CoreMinimal.h"
#include "InventoryCommon.generated.h"

class UItemObject;
// Struct
USTRUCT(BlueprintType, DisplayName="添加物品输出", Category="DreamGamePlay")
struct FItemAddOut
{
	GENERATED_USTRUCT_BODY()

	FItemAddOut();
	FItemAddOut(bool inSuccess, int inRemainCount);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="是否成功")
	bool bSuccess;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="剩余数量")
	int RemainCount;
};

USTRUCT(BlueprintType, DisplayName="移除物品输出", Category="DreamGamePlay")
struct FItemRemoveOut
{
	GENERATED_USTRUCT_BODY()

	FItemRemoveOut();
	FItemRemoveOut(bool Success, int inRemainCount);
	FItemRemoveOut(bool Success);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="是否成功")
	bool bSuccess;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="剩余数量")
	int RemainCount;
};

UENUM(BlueprintType, DisplayName = "物品类型", Category="DreamGamePlay")
enum class EItemType : uint8
{
	EIT_None = 0 UMETA(DisplayName = "NONE"),
	EIT_Weapon = 1 UMETA(DisplayName = "武器"),
	EIT_Prop = 2 UMETA(DisplayName = "道具")
};

USTRUCT(DisplayName="物品HUD显示信息")
struct FItemHudDisplayInfoStruct : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="物品名称")
	FText Name = FText::FromString("DefaultName");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="物品描述")
	FText Description = FText::FromString("DefaultDescription");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="物品图标")
	UTexture2D* Thumb = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="物品等级颜色")
	FLinearColor Color;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="物品类型")
	EItemType Type = EItemType::EIT_None;
};

USTRUCT(DisplayName="ItemStruct")
struct FItemObjectStruct : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	FItemObjectStruct();

	FItemObjectStruct(UItemObject* ItemObject);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="物品Actor")
	AActor* Actor = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="物品ID")
	int ID = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="物品HUD显示信息")
	FItemHudDisplayInfoStruct ItemHudInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="物品是否可叠加")
	bool IsStackable = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="最大叠加数量")
	int MaxStackCount = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="物品数量")
	int Count = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="物品标签")
	TArray<FName> ItemTags;
};
