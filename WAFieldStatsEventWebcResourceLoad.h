//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAFieldStatsEvent.h"

@class NSString;

@interface WAFieldStatsEventWebcResourceLoad : WAFieldStatsEvent
{
    double _webc_resource_cached;
    NSString *_webc_resource_name;
    double _webc_resource_duration;
}

@property(nonatomic) double webc_resource_duration; // @synthesize webc_resource_duration=_webc_resource_duration;
@property(retain, nonatomic) NSString *webc_resource_name; // @synthesize webc_resource_name=_webc_resource_name;
@property(nonatomic) double webc_resource_cached; // @synthesize webc_resource_cached=_webc_resource_cached;
- (void).cxx_destruct;
- (void)submit;
- (id)init;

@end
