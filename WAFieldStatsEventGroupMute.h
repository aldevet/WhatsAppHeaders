//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAFieldStatsEvent.h"

@interface WAFieldStatsEventGroupMute : WAFieldStatsEvent
{
    double _group_size;
    double _group_mute_t;
}

@property(nonatomic) double group_mute_t; // @synthesize group_mute_t=_group_mute_t;
@property(nonatomic) double group_size; // @synthesize group_size=_group_size;
- (void)submit;
- (id)init;

@end
