//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAFieldStatsEvent.h"

@interface WAFieldStatsEventUiUsage : WAFieldStatsEvent
{
    double _entry_point;
    double _ui_usage_type;
}

@property(nonatomic) double ui_usage_type; // @synthesize ui_usage_type=_ui_usage_type;
@property(nonatomic) double entry_point; // @synthesize entry_point=_entry_point;
- (void)submit;
- (id)init;

@end

