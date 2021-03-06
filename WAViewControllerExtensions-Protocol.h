//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WADropDownAlertView;

@protocol WAViewControllerExtensions <NSObject>
@property(readonly, nonatomic) unsigned long long visibleConnectionStatus;
- (void)dismissAllDropDownAlertViewsWithAnimation:(_Bool)arg1;
- (void)dismissDropDownAlertView:(WADropDownAlertView *)arg1 animated:(_Bool)arg2;
- (void)showDropDownAlertView:(WADropDownAlertView *)arg1 animated:(_Bool)arg2;
- (void)visibleConnectionStatusDidChange;
- (void)performAfterTransitionEnds:(void (^)(void))arg1;
- (void)wa_fontSizeDidChange;
- (void)wa_tintColorDidChange;
- (void)wa_applicationDidEnterBackground;
- (void)wa_applicationWillEnterForeground;
- (NSString *)uniqueIdentifier;
@end

