/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDText, NSMutableArray;



@interface WDStory : NSObject 
{
    WDText *mText;
    NSMutableArray *mShapes;
    BOOL mOle;
}


- (id)initWithDocument:(id)arg1 textType:(NSInteger)arg2;
- (void)dealloc;
- (id)text;
- (void)addShape:(id)arg1;
- (NSUInteger)shapeCount;
- (id)shapeAtIndex:(NSUInteger)arg1;
- (id)shapeEnumerator;
- (void)setOle:(BOOL)arg1;
- (BOOL)isOle;

@end
