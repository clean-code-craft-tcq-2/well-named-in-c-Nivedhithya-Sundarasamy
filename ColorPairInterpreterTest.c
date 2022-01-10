#include <assert.h>
#include <stdio.h>
#include "ColorPairCommon.h"

void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorPairFromPairNumber(pairNumber);
    char colorPairNames[16];
    ColorPairToColorPairNames(&colorPair, colorPairNames);
    printf("Color pair name of pair number %d is %s\n", pairNumber, colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColorPair(&colorPair);
    printf("Color pair number for given color pair name is %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

void testColorCodeManual() {
	int NumberOfColorPair = GetNumberOfColorPair();
	ColorPairSet colorpairset[NumberOfColorPair];
	ColorPairSet* colorpairsetptr = GetColorCodeManual(colorpairset);
	int i, ColorPairStartIndex = 1;
	printf(" ----------------- Color Code Manual --------------- \n");
	for (i=ColorPairStartIndex; i<=NumberOfColorPair; i++){
		printf("Pair Number: %d Major and Minor Color Names: %s \n",
			colorpairsetptr[i].PairNumber, colorpairsetptr[i].colorPairNames);
	}
}
	
int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
	testColorCodeManual();
    return 0;
}
