//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAFieldStatsEvent.h"

@class NSString;

@interface WAFieldStatsEventSupportEmail : WAFieldStatsEvent
{
    NSString *_app_version;
    NSString *_device_name;
    NSString *_language_code;
    double _mcc;
    double _mnc;
    NSString *_network_radio_type_s;
    NSString *_os_version;
    double _platform;
    double _user_id;
}

@property(nonatomic) double user_id; // @synthesize user_id=_user_id;
@property(nonatomic) double platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *os_version; // @synthesize os_version=_os_version;
@property(retain, nonatomic) NSString *network_radio_type_s; // @synthesize network_radio_type_s=_network_radio_type_s;
@property(nonatomic) double mnc; // @synthesize mnc=_mnc;
@property(nonatomic) double mcc; // @synthesize mcc=_mcc;
@property(retain, nonatomic) NSString *language_code; // @synthesize language_code=_language_code;
@property(retain, nonatomic) NSString *device_name; // @synthesize device_name=_device_name;
@property(retain, nonatomic) NSString *app_version; // @synthesize app_version=_app_version;
- (void).cxx_destruct;
- (void)submit;
- (id)init;

@end

