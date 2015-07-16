//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString, UIColor, UILabel;

@interface WAItemCaptionPreviewControl : UIControl
{
    UILabel *_captionLabel;
    UILabel *_blendingLabel;
    _Bool _isPlaceholder;
    UIColor *_placeholderCaptionColor;
    UIColor *_captionColor;
    int _style;
}

+ (struct CGSize)preferredSizeForText:(id)arg1 maximumWidth:(double)arg2;
+ (id)captionLabel;
+ (void)initialize;
@property(nonatomic) int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)showText:(id)arg1 blendedWithText:(id)arg2 blendAmount:(float)arg3;
- (void)configureLabel:(id)arg1 forText:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
@property(copy, nonatomic) NSString *text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

