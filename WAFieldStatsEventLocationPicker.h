//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAFieldStatsEvent.h"

@interface WAFieldStatsEventLocationPicker : WAFieldStatsEvent
{
    double _location_picker_full_screen;
    double _location_picker_out_of_quota;
    double _location_picker_places_response;
    double _location_picker_places_source;
    double _location_picker_result_type;
    double _location_picker_places_count;
    double _location_picker_selected_place_index;
    double _location_picker_spend_t;
}

@property(nonatomic) double location_picker_spend_t; // @synthesize location_picker_spend_t=_location_picker_spend_t;
@property(nonatomic) double location_picker_selected_place_index; // @synthesize location_picker_selected_place_index=_location_picker_selected_place_index;
@property(nonatomic) double location_picker_places_count; // @synthesize location_picker_places_count=_location_picker_places_count;
@property(nonatomic) double location_picker_result_type; // @synthesize location_picker_result_type=_location_picker_result_type;
@property(nonatomic) double location_picker_places_source; // @synthesize location_picker_places_source=_location_picker_places_source;
@property(nonatomic) double location_picker_places_response; // @synthesize location_picker_places_response=_location_picker_places_response;
@property(nonatomic) double location_picker_out_of_quota; // @synthesize location_picker_out_of_quota=_location_picker_out_of_quota;
@property(nonatomic) double location_picker_full_screen; // @synthesize location_picker_full_screen=_location_picker_full_screen;
- (void)submit;
- (id)init;

@end

