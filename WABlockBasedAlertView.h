//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertView.h"

@class NSMutableDictionary;

@interface WABlockBasedAlertView : UIAlertView
{
    NSMutableDictionary *_actionMap;
}

+ (void)showErrorMessage:(id)arg1;
+ (void)showErrorInAlertView:(id)arg1;
+ (id)alertViewWithTitle:(id)arg1 message:(id)arg2;
- (void).cxx_destruct;
- (void)show;
- (void)cancelAlertViewWithAnimation:(_Bool)arg1;
- (void)addCancelButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didPresentAlertView:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2;

@end
