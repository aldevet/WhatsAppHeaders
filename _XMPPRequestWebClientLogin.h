//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_XMPPWebClientRequest.h"

@interface _XMPPRequestWebClientLogin : _XMPPWebClientRequest
{
}

- (void)didFailWithError:(id)arg1;
- (void)didSuceedWithResponse:(id)arg1;
- (id)syncElementWithWebReference:(id)arg1;
- (id)initWithWebReference:(id)arg1 clientToken:(id)arg2 password:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end
