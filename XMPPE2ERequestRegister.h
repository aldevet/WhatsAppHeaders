//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPRequest.h"

@interface XMPPE2ERequestRegister : XMPPRequest
{
}

- (void)didFailWithError:(id)arg1;
- (void)didSuceedWithResponse:(id)arg1;
- (id)initWithRegistrationId:(int)arg1 identity:(struct ec_public_key *)arg2 preKeys:(id)arg3 signedPreKey:(id)arg4 completion:(CDUnknownBlockType)arg5;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end

