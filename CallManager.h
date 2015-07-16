//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSTimer, UILocalNotification, WATimer;

@interface CallManager : NSObject
{
    _Bool _pendingCall;
    UILocalNotification *_localCallNotification;
    unsigned int _previousAudioCategory;
    int _muteEnable;
    NSMutableArray *_offlineStanzaList;
    WATimer *_outgoingCallTimer;
    NSDate *_callWatchDogStartTs;
    int _timeoutSecs;
    id _outgoingSoundActivity;
    id _incomingSoundActivity;
    id _callActivity;
    unsigned int _callSoundPlayer;
    NSObject<OS_dispatch_queue> *_recording_write_queue;
    _Bool _voipInited;
    NSObject<OS_dispatch_queue> *_voip_queue;
    NSTimer *_vibrationTimer;
    int _callWakeupSource;
    int _callUISource;
    _Bool _isCallerKnown;
    _Bool _isCaller;
    _Bool _callConnected;
    _Bool _callFailed;
    _Bool _callTimedout;
    _Bool _callEndedByUser;
    _Bool _relayBindsFailed;
    _Bool _callInterrupted;
    _Bool _callInterruptedByPeer;
    _Bool _callMutedByPeer;
    _Bool _callRejected;
    _Bool _shouldAutoAcceptTheCallFromPush;
    _Bool _restartAudioStreamOnCallActive;
    _Bool _rxTrafficStopped;
    _Bool _callRejectedViaNotificationAction;
    NSString *_peerJid;
    NSString *_peerDisplayName;
    NSString *_peerPhoneLabel;
    NSString *_peerFirstName;
    NSString *_rejectReason;
    NSString *_callIdFromPush;
    NSString *_callOfferPushName;
    NSString *_callOfferElapsedTime;
    NSString *_callIdFromLocalNotification;
    NSString *_callIdFromOffer;
    NSString *_callPeerPlatform;
    NSString *_callPeerVersion;
}

+ (_Bool)isCellularCallActive;
+ (id)getPeerDisplayNameWithJid:(id)arg1;
+ (id)sharedManager;
@property(copy, nonatomic) NSString *callPeerVersion; // @synthesize callPeerVersion=_callPeerVersion;
@property(copy, nonatomic) NSString *callPeerPlatform; // @synthesize callPeerPlatform=_callPeerPlatform;
@property(nonatomic) _Bool callRejectedViaNotificationAction; // @synthesize callRejectedViaNotificationAction=_callRejectedViaNotificationAction;
@property(nonatomic, getter=isRxTrafficStopped) _Bool rxTrafficStopped; // @synthesize rxTrafficStopped=_rxTrafficStopped;
@property(nonatomic) _Bool restartAudioStreamOnCallActive; // @synthesize restartAudioStreamOnCallActive=_restartAudioStreamOnCallActive;
@property(copy, nonatomic) NSString *callIdFromOffer; // @synthesize callIdFromOffer=_callIdFromOffer;
@property(copy, nonatomic) NSString *callIdFromLocalNotification; // @synthesize callIdFromLocalNotification=_callIdFromLocalNotification;
@property(nonatomic) _Bool shouldAutoAcceptTheCallFromPush; // @synthesize shouldAutoAcceptTheCallFromPush=_shouldAutoAcceptTheCallFromPush;
@property(copy, nonatomic) NSString *callOfferElapsedTime; // @synthesize callOfferElapsedTime=_callOfferElapsedTime;
@property(copy, nonatomic) NSString *callOfferPushName; // @synthesize callOfferPushName=_callOfferPushName;
@property(copy, nonatomic) NSString *callIdFromPush; // @synthesize callIdFromPush=_callIdFromPush;
@property(retain, nonatomic) NSString *rejectReason; // @synthesize rejectReason=_rejectReason;
@property(nonatomic) _Bool callRejected; // @synthesize callRejected=_callRejected;
@property(nonatomic, getter=isCallMutedByPeer) _Bool callMutedByPeer; // @synthesize callMutedByPeer=_callMutedByPeer;
@property(nonatomic, getter=isCallInterruptedByPeer) _Bool callInterruptedByPeer; // @synthesize callInterruptedByPeer=_callInterruptedByPeer;
@property(nonatomic, getter=isCallInterrupted) _Bool callInterrupted; // @synthesize callInterrupted=_callInterrupted;
@property(nonatomic) _Bool relayBindsFailed; // @synthesize relayBindsFailed=_relayBindsFailed;
@property(nonatomic) _Bool callEndedByUser; // @synthesize callEndedByUser=_callEndedByUser;
@property(nonatomic) _Bool callTimedout; // @synthesize callTimedout=_callTimedout;
@property(nonatomic) _Bool callFailed; // @synthesize callFailed=_callFailed;
@property(nonatomic) _Bool callConnected; // @synthesize callConnected=_callConnected;
@property(readonly, nonatomic) _Bool isCaller; // @synthesize isCaller=_isCaller;
@property(readonly, nonatomic) _Bool isCallerKnown; // @synthesize isCallerKnown=_isCallerKnown;
@property(copy, nonatomic) NSString *peerFirstName; // @synthesize peerFirstName=_peerFirstName;
@property(copy, nonatomic) NSString *peerPhoneLabel; // @synthesize peerPhoneLabel=_peerPhoneLabel;
@property(copy, nonatomic) NSString *peerDisplayName; // @synthesize peerDisplayName=_peerDisplayName;
@property(copy, nonatomic) NSString *peerJid; // @synthesize peerJid=_peerJid;
- (void).cxx_destruct;
- (void)attemptOutgoingCellularVoiceCallWithPhoneURL:(id)arg1;
- (void)attemptOutgoingVoiceCallWithJID:(id)arg1 bypassEligibilityCheck:(_Bool)arg2 callUISource:(int)arg3;
- (void)cancelCallWatchdog;
- (void)startCallWatchdog:(int)arg1;
- (void)updateAudioCaps:(unsigned long long)arg1;
@property(nonatomic) unsigned long long extraOpusModes;
- (void)autoRemoveCallCaptures;
- (void)closeRecordingFile:(void *)arg1;
- (void)saveCallCapture:(void *)arg1 len:(unsigned long long)arg2 type:(int)arg3 time:(struct pj_time_val)arg4 fileHandle:(void *)arg5;
- (id)getCallCaptureDir;
- (void)stopRecordCall;
- (void)recordCallIfEnabled;
- (void)recordForTapeType:(int)arg1;
- (void *)getRecordFileHandle:(int)arg1;
@property(nonatomic) unsigned long long callRecordingOptions;
- (_Bool)isAutoCallRecordingEnabled;
- (double)parseUserIdFromJid:(id)arg1;
- (void)submitFieldStatsForMissedIncomingCall:(id)arg1;
- (void)submitFieldStats:(CDStruct_4d08f900)arg1;
- (void)notifyIncompatibleNetwork;
- (void)addMissedCallForJid:(id)arg1 ts:(double)arg2;
- (void)addCallEventWithStats:(const struct pjmedia_rtcp_stat *)arg1;
- (void)applyAudioSettings;
- (int)mute:(int)arg1;
- (int)setAudioOutput:(int)arg1;
- (int)endCall:(_Bool)arg1;
- (void)rejectCall:(CDStruct_4ab296ed *)arg1 withReason:(id)arg2;
- (int)rejectCall;
- (int)acceptCall;
- (int)getCallState;
- (_Bool)isCallStarted;
- (_Bool)isCallActive;
- (void)stopCallSound;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopIncomingCallVibration;
- (void)onVibrateTimer;
- (void)startIncomingCallVibration;
- (void)playCallSound:(int)arg1;
- (void)do_voip_cleanup;
- (int)doVoIPInit;
- (_Bool)iPhone5orHigher;
- (void)resetCallDataStatsIfNeeded;
- (void)logVoIP:(const char *)arg1;
- (const char *)getEndPointName:(int)arg1;
- (void)updateNetworkMedium;
- (void)handleNetworkChange;
- (void)sendAckForStanza:(id)arg1 ackType:(id)arg2;
- (void)sendReceiptForStanza:(id)arg1;
- (id)getCallIdFromStanza:(id)arg1;
- (int)convertFromStanza:(id)arg1 buf:(void *)arg2 len:(int *)arg3 maxlen:(int)arg4 msgtype:(char *)arg5 reasonStr:(id *)arg6;
- (void)getRelayElectionFromStanza:(id)arg1 relayElection:(CDStruct_eb6bed09 *)arg2;
- (void)getRelayLatenciesFromStanza:(id)arg1 relayList:(CDStruct_376acc88 *)arg2;
- (void)getVoIPParamsFromStanza:(id)arg1 voipParam:(CDStruct_de279dd0 *)arg2;
- (void)getDefaultAndClientVoIPParams:(CDStruct_de279dd0 *)arg1;
- (void)getRelayInfoFromStanza:(id)arg1 relayInfo:(CDStruct_6a54d6fe *)arg2;
- (void)getTransportCandidatesFromStanza:(id)arg1 candList:(CDStruct_7986d824 *)arg2;
- (id)convertToStanza:(char *)arg1 len:(int)arg2;
- (int)voipStanzaTypeFromString:(id)arg1;
- (id)voipStanzaStringFromType:(int)arg1;
- (void)showLocalCallNotificationWithMissed:(_Bool)arg1;
- (void)handleCallStanzaTimeout:(id)arg1;
- (void)handleCallOfferReceipt:(id)arg1;
- (void)handleCallAck:(id)arg1;
- (void)handleCallStateOnEnteringForeground;
- (_Bool)timeoutCallIfNeeded;
- (void)uninitializeCallState;
- (void)restorePreviousAudioCategory;
- (void)callInterruptionDidEnd:(id)arg1;
- (void)callInterruptionDidBegin:(id)arg1;
- (void)startVoipAudioSession;
- (void)initializeCallStateWithCaller:(_Bool)arg1 peerJid:(id)arg2 pushName:(id)arg3 callOfferElapsedTime:(id)arg4;
- (int)startCallWith:(id)arg1;
- (void)handleCallMuteFromPeer:(id)arg1;
- (void)sendCallMuteToPeerBegin:(_Bool)arg1;
- (void)handleCallInterruptionFromPeer:(id)arg1;
- (void)sendCallInterruptionToPeerBegin:(_Bool)arg1;
- (void)setCallWakeupSource:(id)arg1;
- (void)notifyEndofOffline;
- (id)callIdForStanza:(id)arg1;
- (int)innerTypeForStanza:(id)arg1;
- (void)processIncomingCallStanza:(id)arg1;
- (void)receiptOrAckStanza:(id)arg1;
- (void)handleIncomingCallStanza:(id)arg1;
- (id)init;

@end

