//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPRequest.h"

@interface XMPPRequestUploadURL : XMPPRequest
{
}

- (void)didFailWithError:(id)arg1;
- (void)didSuceedWithResponse:(id)arg1;
- (id)initWithFileHash:(id)arg1 origHash:(id)arg2 fileSize:(unsigned long long)arg3 mediaType:(unsigned long long)arg4 mediaIndex:(long long)arg5 totalMediaCount:(long long)arg6 completion:(CDUnknownBlockType)arg7;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end
