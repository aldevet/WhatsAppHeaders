//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIImage, UIImageView, WAGradientView;

@interface WACameraWellView : UIView
{
    UIView *_wellContainer;
    WAGradientView *_gradientView;
    UIImageView *_imageView;
    NSMutableArray *_stackedViews;
    UIView *_topSlice;
    long long _currentValue;
    long long _maximumValue;
}

@property(nonatomic) long long maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) long long currentValue; // @synthesize currentValue=_currentValue;
- (void).cxx_destruct;
- (void)reset;
- (id)newStackView;
- (void)animateInImageInWell:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addImage:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UIImage *image;
- (void)adjustImageViewToFit:(id)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

