//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPBinaryCoder.h"

@interface WAWebBinaryCoder : XMPPBinaryCoder
{
}

+ (id)sharedWebBinaryCoder;
- (id)unserialize:(id)arg1 encKey:(const void *)arg2 macKey:(const void *)arg3 streamError:(out _Bool *)arg4;
- (id)serialize:(id)arg1 encKey:(const void *)arg2 macKey:(const void *)arg3;

@end

