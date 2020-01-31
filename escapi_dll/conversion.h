#pragma once

typedef void(*IMAGE_TRANSFORM_FN)(
	BYTE*       aDest,
	LONG        aDestStride,
	const BYTE* aSrc,
	LONG        aSrcStride,
	DWORD       aWidthInPixels,
	DWORD       aHeightInPixels,
	DWORD		aBufferLength
	);

struct ConversionFunction
{
	GUID               mSubtype;
	IMAGE_TRANSFORM_FN mXForm;
};

void TransformImage_RGB24(
	BYTE*       aDest,
	LONG        aDestStride,
	const BYTE* aSrc,
	LONG        aSrcStride,
	DWORD       aWidthInPixels,
	DWORD       aHeightInPixels,
	DWORD		aBufferLength
	);

void TransformImage_RGB32(
	BYTE*       aDest,
	LONG        aDestStride,
	const BYTE* aSrc,
	LONG        aSrcStride,
	DWORD       aWidthInPixels,
	DWORD       aHeightInPixels,
	DWORD		aBufferLength
	);

void TransformImage_YUY2(
	BYTE*       aDest,
	LONG        aDestStride,
	const BYTE* aSrc,
	LONG        aSrcStride,
	DWORD       aWidthInPixels,
	DWORD       aHeightInPixels,
	DWORD		aBufferLength
	);

void TransformImage_NV12(
	BYTE*		aDst,
	LONG		aDestStride,
	const BYTE* aSrc,
	LONG		aSrcStride,
	DWORD		aWidthInPixels,
	DWORD		aHeightInPixels,
	DWORD		aBufferLength
	);

void TransformImage_MJPG(
	BYTE*       aDst,
	LONG        aDstStride,
	const BYTE* aSrc,
	LONG        aSrcStride,
	DWORD       aWidthInPixels,
	DWORD       aHeightInPixels,
	DWORD		aBufferLength
	);
extern ConversionFunction gFormatConversions[];
extern const DWORD gConversionFormats;
