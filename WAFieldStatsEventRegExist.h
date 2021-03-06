//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAFieldStatsEvent.h"

@class NSString;

@interface WAFieldStatsEventRegExist : WAFieldStatsEvent
{
    NSString *_app_version;
    NSString *_device_name;
    NSString *_language_code;
    NSString *_location_code;
    double _mcc;
    double _mnc;
    double _network_radio_type;
    NSString *_os_version;
    double _platform;
    double _reg_asn;
    double _reg_bucket;
    double _reg_copiedrc;
    double _reg_entered;
    double _reg_hasinrc;
    double _reg_is_new;
    double _reg_rcmatch;
    double _reg_self_count;
    double _reg_simnum;
    double _reg_sms_count;
    double _reg_status;
    double _reg_voice_count;
}

@property(nonatomic) double reg_voice_count; // @synthesize reg_voice_count=_reg_voice_count;
@property(nonatomic) double reg_status; // @synthesize reg_status=_reg_status;
@property(nonatomic) double reg_sms_count; // @synthesize reg_sms_count=_reg_sms_count;
@property(nonatomic) double reg_simnum; // @synthesize reg_simnum=_reg_simnum;
@property(nonatomic) double reg_self_count; // @synthesize reg_self_count=_reg_self_count;
@property(nonatomic) double reg_rcmatch; // @synthesize reg_rcmatch=_reg_rcmatch;
@property(nonatomic) double reg_is_new; // @synthesize reg_is_new=_reg_is_new;
@property(nonatomic) double reg_hasinrc; // @synthesize reg_hasinrc=_reg_hasinrc;
@property(nonatomic) double reg_entered; // @synthesize reg_entered=_reg_entered;
@property(nonatomic) double reg_copiedrc; // @synthesize reg_copiedrc=_reg_copiedrc;
@property(nonatomic) double reg_bucket; // @synthesize reg_bucket=_reg_bucket;
@property(nonatomic) double reg_asn; // @synthesize reg_asn=_reg_asn;
@property(nonatomic) double platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *os_version; // @synthesize os_version=_os_version;
@property(nonatomic) double network_radio_type; // @synthesize network_radio_type=_network_radio_type;
@property(nonatomic) double mnc; // @synthesize mnc=_mnc;
@property(nonatomic) double mcc; // @synthesize mcc=_mcc;
@property(retain, nonatomic) NSString *location_code; // @synthesize location_code=_location_code;
@property(retain, nonatomic) NSString *language_code; // @synthesize language_code=_language_code;
@property(retain, nonatomic) NSString *device_name; // @synthesize device_name=_device_name;
@property(retain, nonatomic) NSString *app_version; // @synthesize app_version=_app_version;
- (void).cxx_destruct;
- (void)submit;
- (id)init;

@end

