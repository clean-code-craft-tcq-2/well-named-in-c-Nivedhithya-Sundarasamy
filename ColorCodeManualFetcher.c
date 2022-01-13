#include "ColorPair.h"

ColorPairSet *GetColorCodeManual(ColorPairSet* colorPairSet){
	int ColorPairCount = GetNumberOfColorPair();
	int i, ColorPairStartIndex = 1;
	ColorPair colorPair;

	for (i=ColorPairStartIndex; i<=ColorPairCount; i++){
		colorPairSet[i].PairNumber = i;
		colorPair = GetColorPairFromPairNumber(i);
		ColorPairToColorPairNames(&colorPair, colorPairSet[i].colorPairNames);
	}
   return colorPairSet;
}
