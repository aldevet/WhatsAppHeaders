//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, _WAAudioActivity;

@interface WAAudioSessionManager : NSObject
{
    NSMutableArray *_activityStack;
    _WAAudioActivity *_currentAudioActivity;
    _Bool _active;
    NSString *_currentRouteName;
}

+ (id)sharedManager;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, copy, nonatomic) NSString *currentRouteName; // @synthesize currentRouteName=_currentRouteName;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isRoutingToBluetoothHeadset) _Bool routingToBluetoothHeadset;
@property(readonly, nonatomic, getter=isRoutingToHeadset) _Bool routingToHeadset;
@property(readonly, nonatomic, getter=isRoutingToReceiver) _Bool routingToReceiver;
- (void)routeToReceiver;
- (void)routeToSpeaker;
@property(readonly, nonatomic, getter=isRoutingToSpeaker) _Bool routingToSpeaker;
- (_Bool)isRoutingToOutputPortType:(id)arg1;
- (id)descriptionOfAllPorts:(id)arg1;
- (void)handleAudioRouteChangeNotification:(id)arg1;
@property(readonly, nonatomic) float currentVolume;
- (void)audioVolumeDidChange;
- (void)handleAudioSessionInterruptionNotification:(id)arg1;
- (void)updateSessionState;
- (void)endAudioActivity:(id)arg1;
- (id)beginAudioActivityOfType:(int)arg1;
- (unsigned long long)recordPermission;
- (void)requestRecordPermissionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)handleMediaServicesWereResetNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

