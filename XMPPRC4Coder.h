//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface XMPPRC4Coder : NSObject
{
    NSData *_key;
    struct _CCCryptor *_cryptor;
}

- (void).cxx_destruct;
- (id)process:(id)arg1;
- (void)drop:(long long)arg1;
- (void)reset:(id)arg1;
- (void)dealloc;
- (void)clean;

@end

