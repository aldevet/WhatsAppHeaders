//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary;

@interface ExecutionTimeProfiler : NSObject
{
    NSMutableDictionary *beginDates;
    NSMutableDictionary *endDates;
    NSDate *beginDate;
    NSDate *endDate;
}

@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate;
- (void).cxx_destruct;
- (id)result;
- (double)timeFromStart;
- (double)totalTime;
- (void)endTask:(id)arg1;
- (void)beginTask:(id)arg1;
- (void)end;
- (void)begin;
- (id)init;

@end

