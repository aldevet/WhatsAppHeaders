//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface WAMediaPickerVideoAssetOverlayView : UIView
{
    UILabel *_durationLabel;
    UIImageView *_cameraIconImageView;
    UIImageView *_gradientView;
    unsigned long long _iconType;
}

+ (double)preferredHeight;
+ (void)initialize;
@property(nonatomic) unsigned long long iconType; // @synthesize iconType=_iconType;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setDuration:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

