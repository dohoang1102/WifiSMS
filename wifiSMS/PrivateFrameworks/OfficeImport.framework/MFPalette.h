/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;



@interface MFPalette : NSObject <MFObject>
{
    NSMutableArray *m_colours;
}

+ (id)paletteWithColours:(id)arg1;

- (id)init;
- (id)initWithColours:(id)arg1;
- (void)dealloc;
- (NSInteger)selectInto:(id)arg1;
- (BOOL)setEntries:(NSInteger)arg1 :(id)arg2;
- (BOOL)resize:(NSInteger)arg1;
- (id)getColour:(NSInteger)arg1;

@end
