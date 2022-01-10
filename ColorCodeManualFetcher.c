#include "ColorPairCommon.h"

ColorPairSet *GetColorCodeManual(ColorPairSet* colorPairSet){
	int ColorPairCount = GetNumberOfColorPair();
	int i, ColorPairStartIndex = 1;
   	ColorPair colorPair[ColorPairCount];

	for (i=ColorPairStartIndex; i<=ColorPairCount; i++){
		colorPairSet[i].PairNumber = i;
		colorPair[i] = GetColorPairFromPairNumber(i);
    	ColorPairToColorPairNames(&colorPair[i], colorPairSet[i].colorPairNames);
	}

   return colorPairSet;
}
