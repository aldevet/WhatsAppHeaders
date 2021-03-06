//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImageView, WAMapView, WAStaticPinCalloutView;

@interface WAStaticPinController : NSObject
{
    UIImageView *_imageViewPin;
    UIImageView *_imageViewPinHole;
    UIImageView *_imageViewPinFloating;
    UIImageView *_imageViewPinShadow;
    WAStaticPinCalloutView *_pinCallout;
    _Bool _droppingPinFromTop;
    _Bool _pinHidden;
    _Bool _pinFloating;
    _Bool _pinCalloutVisible;
    id <WAStaticPinControllerDelegate> _delegate;
    WAMapView *_mapView;
}

+ (id)controllerAttachedToWAMapView:(id)arg1;
@property(retain, nonatomic) WAMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic, getter=isPinCalloutVisible) _Bool pinCalloutVisible; // @synthesize pinCalloutVisible=_pinCalloutVisible;
@property(nonatomic, getter=isPinFloating) _Bool pinFloating; // @synthesize pinFloating=_pinFloating;
@property(nonatomic, getter=isPinHidden) _Bool pinHidden; // @synthesize pinHidden=_pinHidden;
@property(retain, nonatomic) id <WAStaticPinControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configurePinCalloutWithPlacemark:(id)arg1 showActivity:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setPinCalloutVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)pinCalloutTapped;
- (void)reportDropCompletionToDelegate;
- (void)animateFloatingPinWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animatePinWithCompletion:(CDUnknownBlockType)arg1;
- (void)dropPinFromTop;
- (void)preparePinToBeDropped;
- (void)setPinFloating:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dropPin;
- (void)liftPin;
- (void)setPinHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGPoint)originForFloatingPinShadowWithHeight:(double)arg1;
- (struct CGPoint)originForFloatingPinShadowWhenFloating:(_Bool)arg1;
- (struct CGPoint)originForFloatingPinWhenFloating:(_Bool)arg1;
- (struct CGRect)mapBounds;
- (void)layout;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

