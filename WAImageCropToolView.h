//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIImageView;

@interface WAImageCropToolView : UIView
{
    struct CGSize _effectiveSize;
    struct CGRect _initialCropRect;
    struct CGRect _initialCropRectNormalized;
    struct CGRect _lastCropRect;
    struct CGPoint _initialTouchPosition;
    _Bool _dragging;
    unsigned long long _adjustmentMask;
    UIImageView *_borderView;
    UIImageView *_topLeftHandle;
    UIImageView *_topRightHandle;
    UIImageView *_bottomLeftHandle;
    UIImageView *_bottomRightHandle;
    NSArray *_horizontalLines;
    NSArray *_verticalLines;
    _Bool _cropMaskHidden;
    id <WAImageCropToolViewDelegate> _delegate;
    double _minAspectRatio;
    double _maxAspectRatio;
    struct CGRect _normalizedCropRect;
}

@property(nonatomic) double maxAspectRatio; // @synthesize maxAspectRatio=_maxAspectRatio;
@property(nonatomic) double minAspectRatio; // @synthesize minAspectRatio=_minAspectRatio;
@property(nonatomic) _Bool cropMaskHidden; // @synthesize cropMaskHidden=_cropMaskHidden;
@property(nonatomic) __weak id <WAImageCropToolViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect normalizedCropRect; // @synthesize normalizedCropRect=_normalizedCropRect;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)cropRectDidChangeTo:(struct CGRect)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (_Bool)pointIsInsideCroppedArea:(struct CGPoint)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)rectForImage;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutGrid;
- (void)layoutSubviews;
- (void)alignWithView:(id)arg1;
- (void)constrainAspectRatioForVideo;
- (void)constrainAspectRatioForImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

