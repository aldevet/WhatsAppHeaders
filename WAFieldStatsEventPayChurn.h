//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAFieldStatsEvent.h"

@interface WAFieldStatsEventPayChurn : WAFieldStatsEvent
{
    double _pay_autoext_threshold;
    double _pay_exp_delta_days;
    double _pay_exp_ts;
}

@property(nonatomic) double pay_exp_ts; // @synthesize pay_exp_ts=_pay_exp_ts;
@property(nonatomic) double pay_exp_delta_days; // @synthesize pay_exp_delta_days=_pay_exp_delta_days;
@property(nonatomic) double pay_autoext_threshold; // @synthesize pay_autoext_threshold=_pay_autoext_threshold;
- (void)submit;
- (id)init;

@end
