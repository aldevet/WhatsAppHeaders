//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WAHTTPFetcher;

@interface WAServerStatus : NSObject
{
    WAHTTPFetcher *_fetcher;
    _Bool _email;
    _Bool _last;
    _Bool _sync;
    _Bool _chat;
    _Bool _group;
    _Bool _multimedia;
    _Bool _online;
    _Bool _profile;
    _Bool _push;
    _Bool _registration;
    _Bool _status;
    _Bool _broadcast;
    _Bool _version;
    _Bool _requestError;
    _Bool _requestInProgress;
    long long _numberOfServicesDown;
}

@property(readonly, nonatomic) long long numberOfServicesDown; // @synthesize numberOfServicesDown=_numberOfServicesDown;
@property(readonly, nonatomic) _Bool requestInProgress; // @synthesize requestInProgress=_requestInProgress;
@property(readonly, nonatomic) _Bool requestError; // @synthesize requestError=_requestError;
@property(nonatomic) _Bool version; // @synthesize version=_version;
@property(nonatomic) _Bool broadcast; // @synthesize broadcast=_broadcast;
@property(nonatomic) _Bool status; // @synthesize status=_status;
@property(nonatomic) _Bool registration; // @synthesize registration=_registration;
@property(nonatomic) _Bool push; // @synthesize push=_push;
@property(nonatomic) _Bool profile; // @synthesize profile=_profile;
@property(nonatomic) _Bool online; // @synthesize online=_online;
@property(nonatomic) _Bool multimedia; // @synthesize multimedia=_multimedia;
@property(nonatomic) _Bool group; // @synthesize group=_group;
@property(nonatomic) _Bool chat; // @synthesize chat=_chat;
@property(nonatomic) _Bool sync; // @synthesize sync=_sync;
@property(nonatomic) _Bool last; // @synthesize last=_last;
@property(nonatomic) _Bool email; // @synthesize email=_email;
- (void).cxx_destruct;
- (id)servicesStatusString;
- (id)registrationStatusString;
- (void)cancelRequest;
- (void)parseStatusResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

