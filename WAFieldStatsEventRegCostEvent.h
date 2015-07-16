//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAFieldStatsEvent.h"

@class NSString;

@interface WAFieldStatsEventRegCostEvent : WAFieldStatsEvent
{
    NSString *_app_version;
    NSString *_device_name;
    double _mcc;
    double _mnc;
    NSString *_os_version;
    double _platform;
    double _reg_bucket;
    double _reg_provider;
    double _reg_provider_type;
    double _reg_self_count;
    double _reg_sms_count;
    double _reg_voice_count;
    double _reg_cost;
}

@property(nonatomic) double reg_cost; // @synthesize reg_cost=_reg_cost;
@property(nonatomic) double reg_voice_count; // @synthesize reg_voice_count=_reg_voice_count;
@property(nonatomic) double reg_sms_count; // @synthesize reg_sms_count=_reg_sms_count;
@property(nonatomic) double reg_self_count; // @synthesize reg_self_count=_reg_self_count;
@property(nonatomic) double reg_provider_type; // @synthesize reg_provider_type=_reg_provider_type;
@property(nonatomic) double reg_provider; // @synthesize reg_provider=_reg_provider;
@property(nonatomic) double reg_bucket; // @synthesize reg_bucket=_reg_bucket;
@property(nonatomic) double platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *os_version; // @synthesize os_version=_os_version;
@property(nonatomic) double mnc; // @synthesize mnc=_mnc;
@property(nonatomic) double mcc; // @synthesize mcc=_mcc;
@property(retain, nonatomic) NSString *device_name; // @synthesize device_name=_device_name;
@property(retain, nonatomic) NSString *app_version; // @synthesize app_version=_app_version;
- (void).cxx_destruct;
- (void)submit;
- (id)init;

@end

