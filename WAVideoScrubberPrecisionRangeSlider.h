//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface WAVideoScrubberPrecisionRangeSlider : UIView
{
    float _lowerValue;
    float _upperValue;
    float _scaleFactor;
    _Bool _draggingLeftHandle;
    _Bool _draggingRightHandle;
    struct CGPoint _touchStartPoint;
    struct CGPoint _lastTouchPoint;
    float _valueBeforeDragging;
    float _valueDuringDragging;
    float _maximumDifference;
    float _centerValue;
    id <WAVideoScrubberPrecisionRangeSliderDelegate> _delegate;
    double _videoDurationInSeconds;
    double _horizontalInset;
    double _minimumHandleSeparation;
}

@property(readonly, nonatomic) float centerValue; // @synthesize centerValue=_centerValue;
@property(nonatomic) double minimumHandleSeparation; // @synthesize minimumHandleSeparation=_minimumHandleSeparation;
@property(nonatomic) double horizontalInset; // @synthesize horizontalInset=_horizontalInset;
@property(nonatomic) double videoDurationInSeconds; // @synthesize videoDurationInSeconds=_videoDurationInSeconds;
@property(readonly, nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) __weak id <WAVideoScrubberPrecisionRangeSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool draggingRightHandle; // @synthesize draggingRightHandle=_draggingRightHandle;
@property(readonly, nonatomic) _Bool draggingLeftHandle; // @synthesize draggingLeftHandle=_draggingLeftHandle;
@property(nonatomic) float maximumDifference; // @synthesize maximumDifference=_maximumDifference;
@property(readonly, nonatomic) float upperValue; // @synthesize upperValue=_upperValue;
@property(readonly, nonatomic) float lowerValue; // @synthesize lowerValue=_lowerValue;
- (void).cxx_destruct;
- (void)internalChangeScaleFactorTo:(float)arg1 animated:(_Bool)arg2;
- (void)changeScaleFactorTo:(float)arg1 centeredAt:(float)arg2 animationDuration:(double)arg3;
- (void)revertScaleFactorIfNeeded;
- (void)increaseScaleFactor;
- (void)prepareToIncreaseScaleFactor;
- (void)cancelIncreaseScaleFactorAfterDelay;
- (void)increaseScaleFactorAfterDelay;
- (void)finishDragging;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)shouldBeginDraggingWithTouch:(id)arg1;
- (float)minimumRangeWidth;
- (float)expandedScaleFactor;
@property(readonly, nonatomic) UIView *rightHandleView;
@property(readonly, nonatomic) UIView *leftHandleView;
- (void)didEndDragging;
- (void)didBeginDragging;
- (void)didChangeRange;
- (void)getFramesForLeftHandle:(struct CGRect *)arg1 atPosition:(double)arg2 rightHandle:(struct CGRect *)arg3 atPosition:(double)arg4 leftMostVisiblePosition:(double)arg5 rightMostVisiblePosition:(double)arg6;
- (double)horizontalOffsetForValue:(float)arg1;
- (void)layoutSubviews;
- (void)setLowerValue:(float)arg1 upperValue:(float)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

