//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAFieldStatsEvent.h"

@interface WAFieldStatsEventICloudRestore : WAFieldStatsEvent
{
    double _icloud_restore_integrity_check_result;
    double _icloud_restore_result;
    double _icloud_restore_start_reason;
    double _icloud_download_t;
    double _icloud_extract_t;
    double _icloud_size;
}

@property(nonatomic) double icloud_size; // @synthesize icloud_size=_icloud_size;
@property(nonatomic) double icloud_extract_t; // @synthesize icloud_extract_t=_icloud_extract_t;
@property(nonatomic) double icloud_download_t; // @synthesize icloud_download_t=_icloud_download_t;
@property(nonatomic) double icloud_restore_start_reason; // @synthesize icloud_restore_start_reason=_icloud_restore_start_reason;
@property(nonatomic) double icloud_restore_result; // @synthesize icloud_restore_result=_icloud_restore_result;
@property(nonatomic) double icloud_restore_integrity_check_result; // @synthesize icloud_restore_integrity_check_result=_icloud_restore_integrity_check_result;
- (void)submit;
- (id)init;

@end

