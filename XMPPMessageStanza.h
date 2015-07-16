//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPStanza.h"

@class NSData, NSDate, NSString;

@interface XMPPMessageStanza : XMPPStanza
{
    NSDate *_timeOfArrival;
}

+ (id)createMessageTo:(id)arg1;
+ (unsigned long long)typeForString:(id)arg1;
+ (id)stringForType:(unsigned long long)arg1;
+ (id)stringsForTypes;
@property(retain, nonatomic) NSDate *timeOfArrival; // @synthesize timeOfArrival=_timeOfArrival;
- (void).cxx_destruct;
- (id)log;
- (id)stringForMediaType:(unsigned long long)arg1;
- (unsigned long long)mediaTypeForString:(id)arg1;
- (id)mediaTypeStrings;
- (id)vcard;
- (id)body;
- (id)media;
- (void)addBroadcastListInfoWithName:(id)arg1 recipientJIDs:(id)arg2;
@property(copy, nonatomic) NSString *mediaCaption;
@property(copy, nonatomic) NSString *mediaCollectionName;
@property(copy, nonatomic) NSString *mediaAuthorName;
@property(copy, nonatomic) NSString *mediaTitle;
@property(copy, nonatomic) NSString *mediaReason;
@property(retain, nonatomic) NSString *locationName;
@property(retain, nonatomic) NSString *locationLongitude;
@property(retain, nonatomic) NSString *locationLatitude;
@property(retain, nonatomic) NSString *vCardContactName;
@property(retain, nonatomic) NSString *vCardStringValue;
@property(retain, nonatomic) NSData *thumbnailData;
@property(retain, nonatomic) NSString *fileHash;
@property(nonatomic) long long fileSize;
@property(nonatomic) unsigned long long mediaOrigin;
@property(nonatomic) long long mediaDuration;
@property(retain, nonatomic) NSString *mediaName;
@property(readonly, nonatomic) NSString *mediaHostIp;
@property(retain, nonatomic) NSString *mediaURL;
@property(nonatomic) unsigned long long mediaType;
@property(readonly, nonatomic) NSString *nickname;
@property(retain, nonatomic) NSString *text;
@property(nonatomic) unsigned long long type;
- (void)copyMessageDataFromSharedItem:(id)arg1;
- (unsigned long long)whatsAppMediaTypeFromMessageType:(unsigned long long)arg1;
- (_Bool)copyMessageDataFrom:(id)arg1 encryptIfNeeded:(_Bool)arg2;
@property(readonly, nonatomic) _Bool broadcast;
- (id)initWithFromJID:(id)arg1 toJID:(id)arg2 type:(unsigned long long)arg3;

@end
