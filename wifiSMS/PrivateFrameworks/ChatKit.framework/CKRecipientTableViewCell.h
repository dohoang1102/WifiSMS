/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImageView;

@interface CKRecipientTableViewCell : MFRecipientTableViewCell  {
    UIImageView *_availableIcon;
    BOOL _recipientAvailable;
}

@property(getter=isRecipientAvailable) BOOL recipientAvailable;

+ (id)cellForRecipient:(id)arg1;
+ (id)highlightedAvailableImage;
+ (id)availableImage;

- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isRecipientAvailable;
- (void)setRecipientAvailable:(BOOL)arg1;
- (void)dealloc;

@end
