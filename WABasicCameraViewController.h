//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAViewController.h"

#import "WACameraControllerDelegate.h"

@class CMMotionManager, NSString, UIView, WACameraController;

@interface WABasicCameraViewController : WAViewController <WACameraControllerDelegate>
{
    UIView *_previewSnapshot;
    _Bool _allowAutoRotation;
    id <UIViewControllerTransitionCoordinator> _rotationTransitionCoordinator;
    CMMotionManager *_motionManager;
    long long _lastDeviceOrientationForCapture;
    WACameraController *_cameraController;
    UIView *_containerView;
    long long _deviceOrientationForInterface;
}

+ (_Bool)statusBarHidden;
+ (long long)cameraMode;
@property(readonly, nonatomic) long long deviceOrientationForInterface; // @synthesize deviceOrientationForInterface=_deviceOrientationForInterface;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) WACameraController *cameraController; // @synthesize cameraController=_cameraController;
- (void).cxx_destruct;
- (void)videoRecordingDidCancel;
- (void)videoRecordingDidFinishRecordingToFile:(id)arg1;
- (void)videoRecordingDidFailWithError:(id)arg1;
- (void)cameraControllerDidCancelVideoRecording:(id)arg1;
- (void)cameraController:(id)arg1 videoRecordingDidFinishRecordingToFile:(id)arg2;
- (void)cameraController:(id)arg1 videoRecordingDidFailWithError:(id)arg2;
- (void)cameraControllerDidReceiveRuntimeErrorNotification:(id)arg1;
- (void)cameraController:(id)arg1 didDetectQRCode:(id)arg2;
- (void)cameraControllerDidChangeFlashActiveState:(id)arg1;
- (void)cameraControllerDidUpdateFaceObjects:(id)arg1;
- (void)cameraControllerDidChangePreviewImageSize:(id)arg1;
- (void)cameraControllerDidResetPointOfInterest:(id)arg1;
- (void)cameraControllerSessionDidStopRunning:(id)arg1;
- (void)cameraControllerSessionDidBeginRunning:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)rotateToFinalOrientation;
- (void)performDarkenAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performBlurOutAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)updateDeviceOrientationForCaptureFromCurrentDeviceOrientation;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)deviceOrientationDidChangeWithAnimation:(_Bool)arg1;
@property(readonly, nonatomic) long long deviceOrientationForCapture;
- (void)stopAccelerometerUpdatesIfNeeded;
- (void)startAccelerometerUpdatesIfNeeded;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)tearDownCameraController;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)didCreateCameraController;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

