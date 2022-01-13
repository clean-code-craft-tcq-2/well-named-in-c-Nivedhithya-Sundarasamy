enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
   	enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

typedef struct {
	int PairNumber;
	char colorPairNames[16]; 
} ColorPairSet;

extern void ColorPairToColorPairNames(const ColorPair* colorPair, char* buffer);

extern ColorPair GetColorPairFromPairNumber(int pairNumber);

extern int GetPairNumberFromColorPair(const ColorPair* colorPair);

extern int GetNumberOfColorPair();

extern ColorPairSet *GetColorCodeManual(ColorPairSet* colorPairSet);
