//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPRequest.h"

@interface XMPPRequestGetProfilePictureIDsForJIDs : XMPPRequest
{
}

- (void)didFailWithError:(id)arg1;
- (void)didSuceedWithResponse:(id)arg1;
- (id)initWithJIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end

