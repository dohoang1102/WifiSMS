/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSIndexSet;



@interface GQDTNumberFormat : NSObject <GQDNameMappable>
{
    char *mUid;
    struct __CFString { } *mFormatString;
    struct __CFString { } *mCurrencyCode;
    long mDecimalPlaces;
    BOOL mUseAccountingStyle;
    BOOL mShowThousandsSeparator;
    NSInteger mValueType;
    NSInteger mNegativeStyle;
    NSInteger mFractionAccuracy;
    BOOL mFormatStringRequiresSuppressionOfMinusSign;
    double mScaleFactor;
    BOOL mIsCustom;
    BOOL mRequiresFractionReplacement;
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
    unsigned short mIndexFromRightOfLastDigitPlaceholder;
    unsigned char mBase;
    unsigned short mBasePlaces;
    BOOL mBaseUsesMinusSign;
    BOOL mUseScientificFormattingAutomatically;
    BOOL mIgnoreDecimalPlacesForZeroValue;
    BOOL mIsTextFormat;
    BOOL mFormatContainsSpecialTokens;
    BOOL mFormatContainsIntegerToken;
    NSArray *mInterstitialStrings;
    NSIndexSet *mInterstitialStringInsertionIndexes;
    unsigned char mMinimumIntegerWidth;
    unsigned char mDecimalWidth;
    struct __CFString { } *mSuffixString;
}

+ (const struct StateSpec { int (**x1)(); char *x2; NSInteger x3; NSInteger x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;
+ (BOOL)needToSuppressMinusSignForFormatString:(struct __CFString { }*)arg1;
+ (id)numberFormatWithValueType:(NSInteger)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(NSInteger)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(NSInteger)arg8 suffixString:(struct __CFString { }*)arg9;

- (void)dealloc;
- (BOOL)hasValidDecimalPlaces;
- (id)stringFromDouble:(double)arg1;
- (struct __CFString { }*)createStringFromDouble:(double)arg1;
- (NSInteger)valueType;
- (BOOL)useAccountingStyle;
- (NSInteger)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (id)initWithValueType:(NSInteger)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(NSInteger)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(NSInteger)arg8 suffixString:(struct __CFString { }*)arg9 scaleFactor:(double)arg10 base:(unsigned short)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(BOOL)arg13 isCustom:(BOOL)arg14 interstitialStrings:(id)arg15 interstitialStringInsertionIndexes:(id)arg16 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg17 minimumIntegerWidth:(unsigned char)arg18 decimalWidth:(unsigned char)arg19 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg20 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg21 isTextFormat:(BOOL)arg22 formatName:(id)arg23;
- (id)fractionStringFromDouble:(double)arg1;
- (id)baseStringFromDouble:(double)arg1;
- (void)setUseScientificFormattingAutomatically:(BOOL)arg1;
- (id)numberFormatBySettingNegativeStyle:(NSInteger)arg1;
- (id)numberFormatBySettingValueType:(NSInteger)arg1;
- (id)formatString;
- (id)currencyCode;
- (BOOL)showThousandsSeparator;
- (id)customNumberFormatTokens;
- (BOOL)isCustom;
- (BOOL)isTextFormat;
- (NSInteger)fractionAccuracy;

@end
