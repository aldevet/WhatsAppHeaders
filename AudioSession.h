//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AudioSession : NSObject
{
    _Bool _sessionActivated;
    _Bool _speakerActivated;
    _Bool _headsetPluggedIn;
    unsigned int _previousAudioCategory;
    id <AudioSessionDelegate> _delegate;
}

@property(readonly) __weak id <AudioSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) _Bool headsetPluggedIn; // @synthesize headsetPluggedIn=_headsetPluggedIn;
@property(readonly) _Bool speakerActivated; // @synthesize speakerActivated=_speakerActivated;
@property(readonly) _Bool sessionActivated; // @synthesize sessionActivated=_sessionActivated;
- (void).cxx_destruct;
- (_Bool)isHeadsetPluggedIn;
- (_Bool)isSilentMode;
- (double)systemVolume;
- (id)audioRoute;
- (void)deactivateSession;
- (void)activateSession;
- (void)redirectToEarpiece;
- (void)redirectToSpeaker;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
