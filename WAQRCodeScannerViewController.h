//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WABasicCameraViewController.h"

#import "WAWebClientQRHelpViewDelegate.h"

@class NSString, UIActivityIndicatorView, UIButton, UILabel, UIView, WAShapeView, WAWebClientQRHelpView;

@interface WAQRCodeScannerViewController : WABasicCameraViewController <WAWebClientQRHelpViewDelegate>
{
    NSString *_lastQRCode;
    UIView *_shutterView;
    WAShapeView *_maskView;
    UILabel *_titleLabel;
    UIView *_titleBackgroundView;
    WAWebClientQRHelpView *_helpView;
    UIButton *_dismissButton;
    UIActivityIndicatorView *_spinner;
    id <WAQRCodeScannerViewControllerDelegate> _delegate;
}

+ (_Bool)statusBarHidden;
+ (long long)cameraMode;
@property(nonatomic) __weak id <WAQRCodeScannerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissHelpView:(id)arg1;
- (void)webClientQRHelpViewDidCompleteFirstIteration:(id)arg1;
- (void)cameraController:(id)arg1 didDetectQRCode:(id)arg2;
- (void)handleTapToFocus:(id)arg1;
- (void)cameraControllerSessionDidBeginRunning:(id)arg1;
- (void)didCreateCameraController;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)wa_applicationDidEnterBackground;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

