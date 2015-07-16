//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString;

@interface WABasicPresentationAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)animateDismissTransition:(id)arg1;
- (void)animatePresentTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

