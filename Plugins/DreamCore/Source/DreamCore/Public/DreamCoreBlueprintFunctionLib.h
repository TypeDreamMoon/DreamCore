// CORE BY DREAM MOON https://dmstudio.top

#pragma once

#include "CoreMinimal.h"
#include "Data/DreamCoreEnum.h"
#include "Data/DreamCoreStruct.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "DreamCoreBlueprintFunctionLib.generated.h"

/**
 * 
 */
UCLASS(DisplayName="DreamCore蓝图函数库")
class DREAMCORE_API UDreamCoreBlueprintFunctionLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category="Tools", DisplayName="D世界信息To软对象引用路径")
	static FSoftObjectPath WorldInfoToSoftObjectPath(FDWorldInfo WorldInfo);

	UFUNCTION(BlueprintPure, Category="Tools", DisplayName="GetWorld")
	static TSoftObjectPtr<UWorld> GetWorldInfo(FDWorldInfo WorldInfo);

	//==========================================================
	// [STRING]
	//==========================================================
public:
	UFUNCTION(BlueprintPure, Category="Tools|String", DisplayName="规整化数字(2)")
	static FString NormalizeNumber2(int32 Number);
	
	UFUNCTION(BlueprintPure, Category="Tools|String", DisplayName="规整化数字(3)")
	static FString NormalizeNumber3(int32 Number);

	UFUNCTION(BlueprintPure, Category="Tools|String", DisplayName="规整化数字(4)")
	static FString NormalizeNumber4(int32 Number);

	UFUNCTION(BlueprintPure, Category="Tools|String", DisplayName="规整化数字(5)")
	static FString NormalizeNumber5(int32 Number);
	
	//==========================================================
	// [INI CONFIG]
	//==========================================================
public:
	// 加载配置文件	
	UFUNCTION(BlueprintCallable, Category = "INI", DisplayName="加载配置文件")
	static bool LoadIniFile(FString fileName, FString directory, bool autoCreate = false);

	// 保存配置文件
	UFUNCTION(BlueprintCallable, Category = "INI", DisplayName="保存配置文件")
	static bool SaveIniFile(FString fileName, FString directory);

	// 读取所有 Section
	UFUNCTION(BlueprintPure, Category = "INI", DisplayName="读取所有条目")
	static void AllSection(TArray<FString>& sections);

	// 读取所有节点内容
	UFUNCTION(BlueprintPure, Category = "INI", DisplayName="读取所有条目内容")
	static void AllSectionKey(FString section, TArray<FString>& keys);

	// 读取 int
	UFUNCTION(BlueprintPure, Category = "INI", DisplayName="读取(INT)")
	static int ReadInt(FString section, FString key);

	// 读取 float
	UFUNCTION(BlueprintPure, Category = "INI", DisplayName="读取(FLOAT)")
	static float ReadFloat(FString section, FString key);

	// 读取 bool
	UFUNCTION(BlueprintPure, Category = "INI", DisplayName="读取(BOOL)")
	static bool ReadBool(FString section, FString key);

	// 读取 string
	UFUNCTION(BlueprintPure, Category = "INI", DisplayName="读取(STRING)")
	static FString ReadString(FString section, FString key);

	// 读取 Vector
	UFUNCTION(BlueprintPure, Category = "INI", DisplayName="读取(VECTOR)")
	static FVector ReaVector(FString section, FString key);

	// 读取 Rotator
	UFUNCTION(BlueprintPure, Category = "INI", DisplayName="读取(ROTATOR)")
	static FRotator GetRotator(FString section, FString key);

	// 写入 int
	UFUNCTION(BlueprintCallable, Category = "INI", DisplayName="写入(INT)")
	static void WriteInt(FString section, FString key, int value);

	// 写入 float
	UFUNCTION(BlueprintCallable, Category = "INI", DisplayName="写入(FLOAT)")
	static void WriteFloat(FString section, FString key, float value);

	// 写入 bool
	UFUNCTION(BlueprintCallable, Category = "INI", DisplayName="写入(BOOL)")
	static void WriteBool(FString section, FString key, bool value);

	// 写入 string
	UFUNCTION(BlueprintCallable, Category = "INI", DisplayName="写入(STRING)")
	static void WriteString(FString section, FString key, FString value);

	//写入 Vector
	UFUNCTION(BlueprintCallable, Category = "INI", DisplayName="写入(VECTOR)")
	static void WriteVector(FString section, FString key, FVector value);

	//写入 Rotator
	UFUNCTION(BlueprintCallable, Category = "INI", DisplayName="写入(ROTATOR)")
	static void WriteRotator(FString section, FString key, FRotator value);
	
};
