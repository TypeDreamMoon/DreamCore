// CORE BY DREAM MOON https://dmstudio.top

#include "DreamTextureCore/Public/DreamTexture.h"

#define LOCTEXT_NAMESPACE "DreamTexture"

DEFINE_LOG_CATEGORY(DreamTextureLog);

TArray<FLinearColor> DreamTexture::Tools::GetAllPixelColor(UTexture2D* inTexture)
{
	int32 Size_X, Size_Y;
	Size_X = inTexture->GetSizeX();
	Size_Y = inTexture->GetSizeY();

	TArray<FLinearColor> ReturnColorData;
	
	TextureCompressionSettings	OldCompressionSettings = inTexture->CompressionSettings;
	//TextureMipGenSettings		OldMipGenSettings = inTexture->MipGenSettings;
	bool						OldSRGB = inTexture->SRGB;

	inTexture->CompressionSettings = TC_VectorDisplacementmap;
	//inTexture->MipGenSettings = TMGS_NoMipmaps;
	inTexture->SRGB = false;
	inTexture->UpdateResource();

	// Lock Texture && Get Texture Data
	const FColor* FormatedImageData = static_cast<const FColor*>( inTexture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_ONLY));

	// Get Pixel Color
	for (int32 X = 0; X < Size_X; X++)
	{
		for (int32 Y = 0; Y < Size_Y; Y++)
		{
			const FColor PixelColor = FormatedImageData[Y * Size_X + X];
			ReturnColorData.Add(PixelColor.ReinterpretAsLinear());
		}
	}

	// Unlock Texture
	inTexture->GetPlatformData()->Mips[0].BulkData.Unlock();

	inTexture->CompressionSettings = OldCompressionSettings;
	//inTexture->MipGenSettings = OldMipGenSettings;
	inTexture->SRGB = OldSRGB;
	inTexture->UpdateResource();

	return ReturnColorData;
}

FLinearColor DreamTexture::Tools::GetPixelColor(UTexture2D* inTexture, int32 inX, int32 inY)
{
	int32 Size_X, Size_Y;
	Size_X = inTexture->GetSizeX();
	Size_Y = inTexture->GetSizeY();

	FLinearColor ReturnColor;

	if (inX > Size_X || inY > Size_Y)
	{
		return FLinearColor::Black;
	}
	else
	{
		TextureCompressionSettings	OldCompressionSettings = inTexture->CompressionSettings;
		//TextureMipGenSettings		OldMipGenSettings = inTexture->MipGenSettings;
		bool						OldSRGB = inTexture->SRGB;

		inTexture->CompressionSettings = TC_VectorDisplacementmap;
		//inTexture->MipGenSettings = TMGS_NoMipmaps;
		inTexture->SRGB = false;
		inTexture->UpdateResource();

		// Lock Texture && Get Texture Data
		const FColor* FormatedImageData = static_cast<const FColor*>( inTexture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_ONLY));

		ReturnColor = FormatedImageData[Size_X + Size_Y].ReinterpretAsLinear();

		// Unlock Texture
		inTexture->GetPlatformData()->Mips[0].BulkData.Unlock();

		inTexture->CompressionSettings = OldCompressionSettings;
		//inTexture->MipGenSettings = OldMipGenSettings;
		inTexture->SRGB = OldSRGB;
		inTexture->UpdateResource();
	}

	return ReturnColor;
}

FLinearColor DreamTexture::Tools::GetTextureMainColor(UTexture2D* inTexture)
{
	TArray<FLinearColor> AllColor = GetAllPixelColor(inTexture);
	FLinearColor colBuffer;
	
	for ( int i = 0 ; i < AllColor.Num() ; i++ )
	{
		if (i == 0)
		{
			colBuffer = AllColor[0];
		}
		else
		{
			colBuffer = AllColor[i] + colBuffer;
		}
	}
	
	colBuffer = colBuffer / AllColor.Num();

	return colBuffer;
}

FIntPoint DreamTexture::Tools::GetTextureSize(UTexture2D* inTexture)
{
	return FIntPoint(inTexture->GetSizeX(), inTexture->GetSizeY());
}

#undef LOCTEXT_NAMESPACE

