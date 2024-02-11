// Fill out your copyright notice in the Description page of Project Settings.


#include "..\Public\DreamTexCoreBlueprintFunctionLib.h"

#include "DreamTexture.h"

TArray<FLinearColor> UDreamTexCoreBlueprintFunctionLib::GetAllPixelColor(UTexture2D* Texture2D)
{
	return DreamTexture::Tools::GetAllPixelColor(Texture2D);
}

FLinearColor UDreamTexCoreBlueprintFunctionLib::GetPixelColor(UTexture2D* Texture2D, int32 X, int32 Y)
{
	return DreamTexture::Tools::GetPixelColor(Texture2D, X, Y);
}

FLinearColor UDreamTexCoreBlueprintFunctionLib::GetTextureMainColor(UTexture2D* Texture2D)
{
	return DreamTexture::Tools::GetTextureMainColor(Texture2D);
}

FIntPoint UDreamTexCoreBlueprintFunctionLib::GetTextureSize(UTexture2D* Texture2D)
{
	return DreamTexture::Tools::GetTextureSize(Texture2D);
}