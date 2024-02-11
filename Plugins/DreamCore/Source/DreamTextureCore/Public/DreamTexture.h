// CORE BY DREAM MOON https://dmstudio.top

#pragma once
#define LOCTEXT_NAMESPACE "DreamTexture"
DECLARE_LOG_CATEGORY_EXTERN(DreamTextureLog, VeryVerbose, All)

namespace DreamTexture
{
	namespace Tools
	{
		/**
		 * 获取全部像素颜色
		 * @param UTexture2D* inTexture: 输入的纹理
		 * @param RETURN TArray<FLinearColor>: 全部颜色
		 */
		TArray<FLinearColor>	DREAMTEXTURECORE_API GetAllPixelColor(UTexture2D* inTexture);

		/**
		 * 获取指定像素的颜色
		 * @param UTexture2D* inTexture: 输入的纹理
		 * @param int32 inX: 像素x坐标
		 * @param int32 inY: 像素y坐标
		 * @param RETURN FLinearColor: 像素颜色
		 * 注意：该函数会自动判断像素是否超出范围，超出范围会返回FLinearColor::Black
		 */
		FLinearColor			DREAMTEXTURECORE_API GetPixelColor(UTexture2D* inTexture, int32 inX = 0, int32 inY = 0);

		/**
		 * 获取主色调
		 * @param UTexture2D* inTexture: 输入的纹理
		 * @param RETURN FLinearColor: 主色调
		 */
		FLinearColor            DREAMTEXTURECORE_API GetTextureMainColor(UTexture2D* inTexture);

		/**
		 * 获取纹理大小
		 * @param UTexture2D* inTexture: 输入的纹理
		 * @param RETURN FIntPoint: 纹理大小
		 */
		FIntPoint				DREAMTEXTURECORE_API GetTextureSize(UTexture2D* inTexture);
	}
}
#undef LOCTEXT_NAMESPACE