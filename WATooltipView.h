//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIFont;

@interface WATooltipView : UIView
{
    double _leftRightPadding;
    double _topBottomPadding;
    UIButton *_buttonClose;
    NSString *_text;
    UIFont *_font;
    _Bool _arrowDown;
    struct CGRect _toolTipRect;
    double _arrowOffset;
    _Bool _fadingIn;
    _Bool _fadingOut;
    _Bool _buttonFired;
    struct UIEdgeInsets _textInsets;
}

@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)setTooltipVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setTargetRect:(struct CGRect)arg1 inView:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)drawRectiOS6:(struct CGRect)arg1;
- (void)drawText;
- (void)drawRectiOS7:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)fireButton:(id)arg1;
- (id)siblingView;
- (void)closeAction:(id)arg1;
- (void)dismissTooltip;
- (void)updateOrientation;
- (void)adjustSizeToContent;
- (void)dealloc;
- (id)init;

@end

