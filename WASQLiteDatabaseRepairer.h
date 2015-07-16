//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSTimer;

@interface WASQLiteDatabaseRepairer : NSObject
{
    _Bool _databaseRepairInProgress;
    CDUnknownBlockType _progressHandler;
    NSString *_sourceFilePath;
    NSString *_outputFilePath;
    NSString *_dumpFilePath;
    NSTimer *_progressTrackingTimer;
    unsigned long long _backgroundTaskID;
    double _repairStartTime;
    _Bool _disconnectBeforeRepairing;
}

+ (void)mergePendingJournalIfPossibleForDatabaseAtPath:(id)arg1;
+ (unsigned long long)estimatedDiskSpaceRequiredToRepairDatabaseAtPath:(id)arg1;
@property(nonatomic) _Bool disconnectBeforeRepairing; // @synthesize disconnectBeforeRepairing=_disconnectBeforeRepairing;
- (void).cxx_destruct;
- (void)restoreFromDump;
- (_Bool)isDumpFileValid;
- (void)dumpDatabase;
- (void)finishWithStatus:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performAfterDisconnectingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)repairDatabaseAtPath:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fileSizeProgressTimerHandler:(id)arg1;
- (void)fakeProgressTimerHandler:(id)arg1;
- (void)stopTrackingFileSize;
- (void)startTrackingSizeOfFileAtPath:(id)arg1 estimatedSize:(unsigned long long)arg2 offset:(float)arg3 range:(float)arg4;
- (void)stopFakeProgressTracking;
- (void)startFakeProgressTrackingWithDuration:(double)arg1 offset:(float)arg2 range:(float)arg3;

@end
