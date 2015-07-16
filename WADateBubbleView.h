//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface WADateBubbleView : UIView
{
    UIImageView *_bubbleImageView;
    UILabel *_titleLabel;
    UIView *_backgroundView;
    UIView *_maskView;
    UIImageView *_blurredBackgroundView;
    UIImageView *_highlightsImageView;
    _Bool _useBlurredBackground;
    float _floating;
    id <WADateBubbleViewDelegate> _delegate;
    long long _sectionIndex;
    struct CGRect _toFrame;
}

+ (double)preferredHeight;
@property(nonatomic) struct CGRect toFrame; // @synthesize toFrame=_toFrame;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) float floating; // @synthesize floating=_floating;
@property(nonatomic) __weak id <WADateBubbleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (struct CGRect)accessibilityFrame;
- (_Bool)isAccessibilityElement;
- (void)fadeOutIfNeededWithAnimation:(_Bool)arg1;
- (void)fadeInWithAnimation:(_Bool)arg1;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

