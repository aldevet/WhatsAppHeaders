//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, WAChatSession;

@interface XMPPRequestWebClientChatSessionState : NSObject
{
    _Bool _archived;
    _Bool _needsClear;
    _Bool _readOnly;
    _Bool _active;
    _Bool _readAhead;
    NSString *_jid;
    WAChatSession *_chatSession;
    NSArray *_recentMessages;
    long long _muteTime;
    long long _unreadCount;
}

@property(nonatomic) _Bool readAhead; // @synthesize readAhead=_readAhead;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(nonatomic) long long muteTime; // @synthesize muteTime=_muteTime;
@property(retain, nonatomic) NSArray *recentMessages; // @synthesize recentMessages=_recentMessages;
@property(nonatomic) _Bool needsClear; // @synthesize needsClear=_needsClear;
@property(nonatomic, getter=isArchived) _Bool archived; // @synthesize archived=_archived;
@property(retain, nonatomic) WAChatSession *chatSession; // @synthesize chatSession=_chatSession;
@property(copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;

@end
