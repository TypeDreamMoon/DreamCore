// CORE BY DREAM MOON https://dmstudio.top


#include "DreamCoreBlueprintFunctionLib.h"

static	FString		m_strFile = TEXT("");
static  bool		m_bLoadFile = false;

FSoftObjectPath UDreamCoreBlueprintFunctionLib::WorldInfoToSoftObjectPath(FDWorldInfo WorldInfo)
{
	return WorldInfo.Level.ToSoftObjectPath();
}

TSoftObjectPtr<UWorld> UDreamCoreBlueprintFunctionLib::GetWorldInfo(FDWorldInfo WorldInfo)
{
	return WorldInfo.Level;
}

FString UDreamCoreBlueprintFunctionLib::NormalizeNumber2(int32 Number)
{
	return FString::Printf(TEXT("%02d"), Number);
}

FString UDreamCoreBlueprintFunctionLib::NormalizeNumber3(int32 Number)
{
	return FString::Printf(TEXT("%03d"), Number);
}

FString UDreamCoreBlueprintFunctionLib::NormalizeNumber4(int32 Number)
{
	return FString::Printf(TEXT("%04d"), Number);
}

FString UDreamCoreBlueprintFunctionLib::NormalizeNumber5(int32 Number)
{
	return FString::Printf(TEXT("%05d"), Number);
}

bool UDreamCoreBlueprintFunctionLib::LoadIniFile(FString fileName, FString directory, bool autoCreate /*= false*/)
{
	IPlatformFile& platformFile = FPlatformFileManager::Get().GetPlatformFile();
	if (!directory.IsEmpty() && !platformFile.DirectoryExists(*directory))
	{
		platformFile.CreateDirectory(*directory);
	}
 
	m_strFile = directory / fileName;
 
	if (!FPaths::FileExists(m_strFile))
	{
		if (autoCreate)
		{
			FFileHelper::SaveStringToFile(TEXT(""), *m_strFile);
		}
	}
 
	m_strFile = FConfigCacheIni::NormalizeConfigIniPath(m_strFile);
	GConfig->NormalizeConfigIniPath(m_strFile);
 
	GConfig->Flush(true, m_strFile);//刷新配置文件内容，如果想项目只加载一次配置文件。读写里面都有加这段。不然读不到更新后的内容
 
	m_bLoadFile = true;
 
	return true;
}
 
bool UDreamCoreBlueprintFunctionLib::SaveIniFile(FString fileName, FString directory)
{
	GConfig->Flush(false, m_strFile);
 
	return true;
 
}
 
void UDreamCoreBlueprintFunctionLib::AllSection(TArray<FString>& sections)
{
	if (m_bLoadFile)
	{
		GConfig->GetSectionNames(m_strFile, sections);
	}
}
 
void UDreamCoreBlueprintFunctionLib::AllSectionKey(FString section, TArray<FString>& keys)
{
	if (m_bLoadFile)
	{
		GConfig->GetSection(*section, keys, m_strFile);
	}
}
 
int UDreamCoreBlueprintFunctionLib::ReadInt(FString section, FString key)
{
	int defValue = 0;
	if (m_bLoadFile && GConfig->GetInt(*section, *key, defValue, m_strFile))
	{
		return defValue;
	}
 
	return defValue;
}
 
float UDreamCoreBlueprintFunctionLib::ReadFloat(FString section, FString key)
{
	float defValue = 0.0f;
	if (m_bLoadFile && GConfig->GetFloat(*section, *key, defValue, m_strFile))
	{
		return defValue;
	}
 
	return defValue;
}
 
bool UDreamCoreBlueprintFunctionLib::ReadBool(FString section, FString key)
{
	bool defValue = false;
	if (m_bLoadFile && GConfig->GetBool(*section, *key, defValue, m_strFile))
	{
		return defValue;
	}
 
	return defValue;
}
 
FString UDreamCoreBlueprintFunctionLib::ReadString(FString section, FString key)
{
	FString defValue = TEXT("");
	if (m_bLoadFile && GConfig->GetString(*section, *key, defValue, m_strFile))
	{
		return defValue;
	}
 
	return defValue;
}
 
FVector UDreamCoreBlueprintFunctionLib::ReaVector(FString section, FString key)
{
	FVector defValue = FVector(0, 0, 0);
 
	if (m_bLoadFile && GConfig->GetVector(*section, *key, defValue, m_strFile))
	{
		return defValue;
	}
 
	return defValue;
}
 
FRotator UDreamCoreBlueprintFunctionLib::GetRotator(FString section, FString key)
{
	FRotator defValue = FRotator(0, 0, 0);
 
	if (m_bLoadFile && GConfig->GetRotator(*section, *key, defValue, m_strFile))
	{
		return defValue;
	}
 
	return defValue;
}
 
void UDreamCoreBlueprintFunctionLib::WriteInt(FString section, FString key, int value)
{
	if (m_bLoadFile)
	{
		GConfig->SetInt(*section, *key, value, m_strFile);
	}
}
 
void UDreamCoreBlueprintFunctionLib::WriteFloat(FString section, FString key, float value)
{
	if (m_bLoadFile)
	{
		GConfig->SetFloat(*section, *key, value, m_strFile);
	}
 
}
 
void UDreamCoreBlueprintFunctionLib::WriteBool(FString section, FString key, bool value)
{
	if (m_bLoadFile)
	{
		GConfig->SetBool(*section, *key, value, m_strFile);
	}
 
}
 
void UDreamCoreBlueprintFunctionLib::WriteString(FString section, FString key, FString value)
{
	if (m_bLoadFile)
	{
		GConfig->SetString(*section, *key, *value, m_strFile);
	}
}
 
void UDreamCoreBlueprintFunctionLib::WriteVector(FString section, FString key, FVector value)
{
	if (m_bLoadFile)
	{
		GConfig->SetVector(*section, *key, value, m_strFile);
	}
}
 
void UDreamCoreBlueprintFunctionLib::WriteRotator(FString section, FString key, FRotator value)
{
	if (m_bLoadFile)
	{
		GConfig->SetRotator(*section, *key, value, m_strFile);
	}
}
