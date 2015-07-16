//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WACloudInteractionOperation_Kit.h"

@class NSMutableSet, NSString, WABackup, WACloudBackupManager_Kit;

@interface WAUploadBackupOperation_Kit : WACloudInteractionOperation_Kit
{
    WABackup *_backup;
    NSString *_localPath;
    unsigned long long _totalBackupSize;
    NSMutableSet *_recordIDsToDelete;
}

- (void).cxx_destruct;
- (id)createFileRecordsWithBackup:(id)arg1;
- (id)createBackupInfoRecord;
- (void)uploadBackupInZone:(id)arg1;
- (void)loadExistingFiles:(id)arg1;
- (void)createRecordZone:(id)arg1;
- (void)loadRecordZone;
- (void)cancelBackup;
- (void)run;
- (id)recordForFile:(id)arg1;
@property(readonly, nonatomic) WACloudBackupManager_Kit *manager;
- (id)initWithBackup:(id)arg1 localPath:(id)arg2;

@end
