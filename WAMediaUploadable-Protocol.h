//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol WAMediaUploadable <NSObject>
@property(readonly, copy, nonatomic) NSString *mediaCollectionName;
@property(readonly, nonatomic) long long multiSendMediaCount;
@property(readonly, nonatomic) long long multiSendMediaIndex;
@property(readonly, nonatomic) long long httpRetryCount;
@property(readonly, nonatomic) _Bool isPTT;
@property(readonly, copy, nonatomic) NSString *fileHash;
@property(readonly, nonatomic) unsigned long long mediaType;
@property(readonly, copy, nonatomic) NSString *mediaPath;
@property(readonly, nonatomic) NSString *toJID;
@property(readonly, nonatomic) NSString *stanzaID;
@property(readonly, nonatomic) id <NSObject><NSCopying> uniqueID;
- (void)replaceMediaWithMediaAtPath:(NSString *)arg1;
@end

