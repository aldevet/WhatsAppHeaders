//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDictionary, WAMessage;

@interface WAMessageInfo : NSManagedObject
{
}

@property(readonly, nonatomic) double lastTimestamp;

// Remaining properties
@property(retain, nonatomic) WAMessage *message; // @dynamic message;
@property(retain, nonatomic) NSDictionary *receiptInfo; // @dynamic receiptInfo;

@end
