//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarController.h"

@class NSTimer, UILabel, UIView;

@interface WATabBarController : UITabBarController
{
    UIView *_statusBarBackgroundView;
    UILabel *_inCallStatusBarLabel;
    NSTimer *_inCallStatusBarUpdateTimer;
    _Bool _callStatusBarHidden;
}

+ (void)initialize;
@property(nonatomic) _Bool callStatusBarHidden; // @synthesize callStatusBarHidden=_callStatusBarHidden;
- (void).cxx_destruct;
- (id)wrapperView;
@property(readonly, nonatomic) double inCallStatusBarHeight;
- (void)statusBarTapped:(id)arg1;
- (void)updateInCallStatusBarTimer:(id)arg1;
- (void)stopAnimatingCallStatusBar;
- (void)startAnimatingCallStatusBar;
- (void)setCallStatusBarSnapshotMode:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (id)childViewControllerForStatusBarStyle;
- (void)adjustViewForCallStatusBar8;
- (void)adjustViewForCallStatusBar7;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)dealloc;
- (void)updateSettingsCount:(id)arg1;
- (void)backupErrorBadgeUpdated:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (id)init;

@end

