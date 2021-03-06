//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAFieldStatsEvent.h"

@class NSString;

@interface WAFieldStatsEventUnban : WAFieldStatsEvent
{
    double _account_create_ts;
    NSString *_app_version;
    double _asn;
    double _ban_flag_fake_s40;
    double _ban_flag_modded;
    double _ban_flag_needs_legit;
    double _ban_flag_pinger;
    double _ban_flag_was_modded;
    double _ban_gen;
    double _ban_is_compliant;
    NSString *_ban_origin;
    NSString *_ban_reason;
    NSString *_ip;
    double _is_pardon;
    double _is_unban_on_email;
    double _platform;
    NSString *_reviewed_origin;
    double _temp_ban_gen;
    NSString *_unban_origin;
    NSString *_watch_reason;
}

@property(retain, nonatomic) NSString *watch_reason; // @synthesize watch_reason=_watch_reason;
@property(retain, nonatomic) NSString *unban_origin; // @synthesize unban_origin=_unban_origin;
@property(nonatomic) double temp_ban_gen; // @synthesize temp_ban_gen=_temp_ban_gen;
@property(retain, nonatomic) NSString *reviewed_origin; // @synthesize reviewed_origin=_reviewed_origin;
@property(nonatomic) double platform; // @synthesize platform=_platform;
@property(nonatomic) double is_unban_on_email; // @synthesize is_unban_on_email=_is_unban_on_email;
@property(nonatomic) double is_pardon; // @synthesize is_pardon=_is_pardon;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(retain, nonatomic) NSString *ban_reason; // @synthesize ban_reason=_ban_reason;
@property(retain, nonatomic) NSString *ban_origin; // @synthesize ban_origin=_ban_origin;
@property(nonatomic) double ban_is_compliant; // @synthesize ban_is_compliant=_ban_is_compliant;
@property(nonatomic) double ban_gen; // @synthesize ban_gen=_ban_gen;
@property(nonatomic) double ban_flag_was_modded; // @synthesize ban_flag_was_modded=_ban_flag_was_modded;
@property(nonatomic) double ban_flag_pinger; // @synthesize ban_flag_pinger=_ban_flag_pinger;
@property(nonatomic) double ban_flag_needs_legit; // @synthesize ban_flag_needs_legit=_ban_flag_needs_legit;
@property(nonatomic) double ban_flag_modded; // @synthesize ban_flag_modded=_ban_flag_modded;
@property(nonatomic) double ban_flag_fake_s40; // @synthesize ban_flag_fake_s40=_ban_flag_fake_s40;
@property(nonatomic) double asn; // @synthesize asn=_asn;
@property(retain, nonatomic) NSString *app_version; // @synthesize app_version=_app_version;
@property(nonatomic) double account_create_ts; // @synthesize account_create_ts=_account_create_ts;
- (void).cxx_destruct;
- (void)submit;
- (id)init;

@end

