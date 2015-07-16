//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAViewController.h"

#import "CLLocationManagerDelegate.h"
#import "WAOutlineRoundButtonDelegate.h"

@class CLLocationManager, EKEventStore, EKReminder, MPVolumeView, NSLayoutConstraint, NSString, NSTimer, UIActionSheet, UIImage, UIImageView, UILabel, UITextView, UIView, WABorderlessButton, WACallAcceptRejectButton, WAOutlineRoundButton;

@interface WAVoiceCallViewController : WAViewController <WAOutlineRoundButtonDelegate, CLLocationManagerDelegate>
{
    NSTimer *_timer;
    _Bool _hasTimerFired;
    _Bool _isBackgrounded;
    _Bool _isChangingBackgroundedState;
    UIView *_snapshotOfPresentingView;
    UIImage *_blurredImage;
    MPVolumeView *_audioRouteButton;
    UIActionSheet *_activeAudioRouteActionSheet;
    _Bool _isMonitoringProximity;
    _Bool _receivedRouteChangeNotifications;
    NSString *_peerDisplayName;
    NSString *_peerFirstName;
    _Bool _isPeerKnown;
    _Bool _isIncomingCall;
    UIView *_topButtonsContainer;
    WACallAcceptRejectButton *_rejectCallButton;
    WACallAcceptRejectButton *_acceptOrEndCallButton;
    WAOutlineRoundButton *_muteButton;
    WAOutlineRoundButton *_messageButton;
    WAOutlineRoundButton *_speakerButton;
    WABorderlessButton *_remindButton;
    WABorderlessButton *_incomingMessageButton;
    double _callButtonWidth;
    double _controlButtonWidth;
    double _controlButtonMargin;
    double _borderlessButtonOffsetY;
    UIImageView *_profileImageView;
    UIView *_profileImageShadowView;
    double _baseProfileImageDimension;
    CLLocationManager *_activeLocationManager;
    EKEventStore *_storeNeedingLocationInfo;
    EKReminder *_reminderNeedingLocationInfo;
    double _lastCallStatsTime;
    int _lastPacketLossSum;
    float _callQuality;
    double _lastBatteryPrintTime;
    _Bool _debugInfoHidden;
    long long _lastStatusBarStyle;
    int _callState;
    NSString *_calleeJID;
    id <WAVoiceCallViewControllerDelegate> _delegate;
    UIView *_bottomPanel;
    UIImageView *_backgroundImageView;
    UILabel *_headerLabel;
    UILabel *_callerNameLabel;
    UILabel *_subtitleLabel;
    UIView *_profileImageContainerView;
    UIView *_contentView;
    NSLayoutConstraint *_bottomPanelHeightConstraint;
    NSLayoutConstraint *_profileImageTopMarginConstraint;
    NSLayoutConstraint *_profileImageBottomMarginConstraint;
    UIView *_debugView;
    UITextView *_debugTextView;
    UILabel *_debugStatsLabel;
}

@property(nonatomic) __weak UILabel *debugStatsLabel; // @synthesize debugStatsLabel=_debugStatsLabel;
@property(nonatomic) __weak UITextView *debugTextView; // @synthesize debugTextView=_debugTextView;
@property(retain, nonatomic) UIView *debugView; // @synthesize debugView=_debugView;
@property(nonatomic) __weak NSLayoutConstraint *profileImageBottomMarginConstraint; // @synthesize profileImageBottomMarginConstraint=_profileImageBottomMarginConstraint;
@property(nonatomic) __weak NSLayoutConstraint *profileImageTopMarginConstraint; // @synthesize profileImageTopMarginConstraint=_profileImageTopMarginConstraint;
@property(nonatomic) __weak NSLayoutConstraint *bottomPanelHeightConstraint; // @synthesize bottomPanelHeightConstraint=_bottomPanelHeightConstraint;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *profileImageContainerView; // @synthesize profileImageContainerView=_profileImageContainerView;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UILabel *callerNameLabel; // @synthesize callerNameLabel=_callerNameLabel;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak UIView *bottomPanel; // @synthesize bottomPanel=_bottomPanel;
@property(nonatomic) float callQuality; // @synthesize callQuality=_callQuality;
@property(nonatomic) int callState; // @synthesize callState=_callState;
@property(nonatomic) __weak id <WAVoiceCallViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *calleeJID; // @synthesize calleeJID=_calleeJID;
- (void).cxx_destruct;
- (void)setDebugInfoHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)toggleDebugInfo:(id)arg1;
- (void)audioRouteDidChange:(id)arg1;
- (void)updateInterfaceForCurrentAudioRoute;
- (id)newReminderWithStore:(id)arg1;
- (void)prepareNewReminderWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)createReminderWithGeolocation:(id)arg1 placemark:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)waitForLocationFixAndUpdateReminder;
- (void)remindToCallWhenLeaving;
- (void)remindToCallInOneHour;
- (void)showUnableToCreateReminderError;
- (void)showReminderPermissionsAlertView;
- (void)cancelCallAndAddReminder:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)becomeActiveFromView:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)rejectCallAndGoToChatView;
- (void)rejectCallAndSendMessageText:(id)arg1;
- (void)cancelCallAndSendMessage:(id)arg1;
- (void)toggleMute:(id)arg1;
- (void)showAudioRoutePicker;
- (void)installInvisibleAudioRouteButtonIfNeeded;
- (void)toggleSpeaker:(id)arg1;
- (void)acceptOrEndCall:(id)arg1;
- (void)rejectCall:(id)arg1;
- (void)rejectOrEndCall;
- (void)proximityStateDidChange:(id)arg1;
- (void)stopMonitoringProximity;
- (void)startMonitoringProximityIfNeeded;
- (void)updateProximityMonitoring;
- (void)loadLargeProfileImageAsync;
- (void)setContentViewHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setContentViewiOS6Hidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelOutgoingCall;
- (void)handleCallBusy;
- (void)handleCallTimeout;
- (void)handleCallFailure;
- (void)handleCallTerminationByPeer;
- (void)dismiss;
- (void)setCallState:(int)arg1 animated:(_Bool)arg2;
- (_Bool)isCallEnding;
- (void)callStateDidBecomeActive:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)updateLayoutForCurrentState;
- (void)printBatteryLevel;
- (_Bool)isShowingChatScreenSupported;
- (void)timerFired:(id)arg1;
- (id)outlineRoundButtonBackgroundImageView:(id)arg1;
- (void)relayoutProfileImageView;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (void)setBlurredImageFromView:(id)arg1;
- (void)updateSnapshot;
- (void)prepareToAnimateInFromView:(id)arg1;
- (id)uniqueIdentifier;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithInitialCallState:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
