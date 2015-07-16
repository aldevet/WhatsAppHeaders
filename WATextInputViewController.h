//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAViewController.h"

#import "UIViewControllerTransitioningDelegate.h"
#import "WAAppearanceAnimating.h"

@class NSString, _WATextInputBoxView;

@interface WATextInputViewController : WAViewController <UIViewControllerTransitioningDelegate, WAAppearanceAnimating>
{
    _WATextInputBoxView *_textBox;
    double _keyboardHeight;
    id <WATextInputViewControllerDelegate> _delegate;
    NSString *_text;
    unsigned long long _maximumLength;
}

@property(nonatomic) unsigned long long maximumLength; // @synthesize maximumLength=_maximumLength;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak id <WATextInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didAnimateDisappearance;
- (void)animateDisappearance;
- (void)willAnimateDisappearance;
- (void)didAnimateAppearance;
- (void)animateAppearance;
- (void)willAnimateAppearance;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)post:(id)arg1;
- (void)cancel:(id)arg1;
- (void)relayoutTextBox;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
