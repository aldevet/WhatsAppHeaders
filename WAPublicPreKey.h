//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface WAPublicPreKey : NSObject
{
    int _keyId;
    NSData *_keyData;
    NSData *_keySignature;
}

@property(retain, nonatomic) NSData *keySignature; // @synthesize keySignature=_keySignature;
@property(nonatomic) int keyId; // @synthesize keyId=_keyId;
@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
- (void).cxx_destruct;
- (id)initWithId:(int)arg1 data:(id)arg2 signature:(id)arg3;

@end
