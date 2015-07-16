//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPStanzaElement.h"

@class NSDate, NSDictionary, NSError, NSString;

@interface XMPPStanza : XMPPStanzaElement
{
    NSDictionary *_connectionInfo;
}

+ (id)generateSID;
+ (id)generateUniqueIdentifier;
@property(retain, nonatomic) NSDictionary *connectionInfo; // @synthesize connectionInfo=_connectionInfo;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isReceivedWithActiveWebClientSession) _Bool receivedWithActiveWebClientSession;
@property(readonly, nonatomic) int offlineCount;
@property(readonly, nonatomic) _Bool offline;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSString *errorCode;
@property(readonly, nonatomic) NSDate *timestamp;
@property(retain, nonatomic) NSString *participant;
@property(retain, nonatomic) NSString *fromJID;
@property(retain, nonatomic) NSString *toJID;
@property(retain, nonatomic) NSString *uniqueIdentifier;
- (id)initWithName:(id)arg1 fromJID:(id)arg2 toJID:(id)arg3;
- (id)initWithStanzaElement:(id)arg1;

@end
