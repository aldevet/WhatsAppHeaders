//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewControllerInteractiveTransitioning.h"

@protocol WAPercentDrivenInteractiveTransitioning <UIViewControllerInteractiveTransitioning>
@property(copy, nonatomic) CDUnknownBlockType updateHandler;
@property(nonatomic) double completionSpeed;
@property(readonly, nonatomic) double percentComplete;
@property(readonly, nonatomic) double duration;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
@end
