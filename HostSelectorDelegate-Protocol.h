//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HostSelector, NSString;

@protocol HostSelectorDelegate <NSObject>
- (void)hostSelectorDidCancel:(HostSelector *)arg1;
- (void)hostSelector:(HostSelector *)arg1 didEnterHostname:(NSString *)arg2;
@end

