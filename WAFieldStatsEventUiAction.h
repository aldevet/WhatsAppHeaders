//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAFieldStatsEvent.h"

@interface WAFieldStatsEventUiAction : WAFieldStatsEvent
{
    double _ui_action_preloaded;
    double _ui_action_type;
    double _ui_action_t;
}

@property(nonatomic) double ui_action_t; // @synthesize ui_action_t=_ui_action_t;
@property(nonatomic) double ui_action_type; // @synthesize ui_action_type=_ui_action_type;
@property(nonatomic) double ui_action_preloaded; // @synthesize ui_action_preloaded=_ui_action_preloaded;
- (void)submit;
- (id)init;

@end
