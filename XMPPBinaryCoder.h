//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, XMPPEncryption, XMPPTokenizer;

@interface XMPPBinaryCoder : NSObject
{
    XMPPTokenizer *_tokenizer;
    XMPPEncryption *_encryption;
    NSData *_sessionKeyMacIn;
    NSData *_sessionKeyMacOut;
    NSData *_token;
    int _elementCountOut;
    int _elementCountIn;
}

+ (unsigned char)characterFromNibble:(unsigned char)arg1;
- (void).cxx_destruct;
- (id)readList:(id)arg1 offset:(unsigned long long *)arg2 error:(unsigned long long *)arg3;
- (id)decodeNibblesFromData:(id)arg1 discardLast:(_Bool)arg2;
- (id)readString:(id)arg1 offset:(unsigned long long *)arg2 error:(unsigned long long *)arg3;
- (unsigned long long)readListLength:(id)arg1 offset:(unsigned long long *)arg2 error:(unsigned long long *)arg3;
- (id)readElement:(id)arg1 offset:(unsigned long long *)arg2 error:(unsigned long long *)arg3;
- (unsigned char)getToken:(id)arg1 index:(unsigned long long)arg2;
- (unsigned long long)isCanRead:(unsigned long long)arg1 from:(id)arg2 offset:(unsigned long long)arg3 error:(unsigned long long *)arg4;
- (_Bool)isJID:(id)arg1;
- (id)encodeListHeader:(unsigned long long)arg1;
- (id)encodeJID:(id)arg1;
- (id)encodeData:(id)arg1;
- (id)encodeString:(id)arg1;
- (id)encodeList:(id)arg1;
- (id)unserialize:(id)arg1 mustBeEncrypted:(_Bool)arg2 processedBytes:(unsigned long long *)arg3 streamError:(out _Bool *)arg4;
- (id)serialize:(id)arg1 encrypted:(_Bool)arg2 compressed:(_Bool)arg3;
- (id)keepalive;
- (id)header;
- (id)version;
- (id)authBlobForUser:(id)arg1;
- (void)setToken:(id)arg1 andPassword:(id)arg2;
- (id)initForWeb;
- (id)init;

@end

