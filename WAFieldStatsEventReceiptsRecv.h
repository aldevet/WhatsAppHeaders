//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAFieldStatsEvent.h"

@interface WAFieldStatsEventReceiptsRecv : WAFieldStatsEvent
{
    double _message_type;
    double _receipts_type;
    double _receipts_proc_t;
}

@property(nonatomic) double receipts_proc_t; // @synthesize receipts_proc_t=_receipts_proc_t;
@property(nonatomic) double receipts_type; // @synthesize receipts_type=_receipts_type;
@property(nonatomic) double message_type; // @synthesize message_type=_message_type;
- (void)submit;
- (id)init;

@end
