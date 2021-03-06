//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface WAOutlineRoundButton : UIButton
{
    UILabel *_bottomLabel;
    UIImageView *_outlineMask;
    UIImageView *_solidMask;
    UIImageView *_outlineImageView;
    UIImageView *_solidImageView;
    UIImage *_normalImage;
    UIImage *_selectedImage;
    UIImageView *_blurredImageView;
    _Bool _selectable;
    id <WAOutlineRoundButtonDelegate> _delegate;
}

+ (id)button;
@property(nonatomic) __weak id <WAOutlineRoundButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSelectable) _Bool selectable; // @synthesize selectable=_selectable;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setPressed:(_Bool)arg1;
@property(copy, nonatomic) NSString *bottomLabelText;
- (void)setIconImage:(id)arg1;
- (void)updateBlurredImage;
- (void)setCenter:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

