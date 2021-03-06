//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WACloudInteractionOperation.h"

@class NSString, WACloudBackupManager_Documents, WASharedMetadataQuery;

@interface WACloudInteractionBackupOperation_Documents : WACloudInteractionOperation
{
    WASharedMetadataQuery *_query;
    _Bool _failed;
    WACloudBackupManager_Documents *_manager;
    NSString *_remoteBackupPath;
}

@property(retain, nonatomic) NSString *remoteBackupPath; // @synthesize remoteBackupPath=_remoteBackupPath;
@property(readonly, nonatomic) WACloudBackupManager_Documents *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (id)pathForRemoteFile:(id)arg1;
- (void)cancel;
- (void)startQuery;
- (void)destroyQuery:(_Bool)arg1;
- (void)finishOperation:(id)arg1;
- (_Bool)processResults:(id)arg1;
- (void)processQuery:(id)arg1;
- (void)processFiles:(id)arg1;
- (void)run;
- (_Bool)succeeded;
- (void)dealloc;
- (id)initWithManager:(id)arg1;

@end

