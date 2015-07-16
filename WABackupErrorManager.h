//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSError, NSNumber, WAAutoBackupSettings;

@interface WABackupErrorManager : NSObject
{
    int _autoBackupCode;
    _Bool _badge;
    int _mask;
    CDUnknownBlockType _formatSize;
    WAAutoBackupSettings *_autoBackupSettings;
}

@property(nonatomic) int mask; // @synthesize mask=_mask;
@property(retain, nonatomic) WAAutoBackupSettings *autoBackupSettings; // @synthesize autoBackupSettings=_autoBackupSettings;
@property(copy, nonatomic) CDUnknownBlockType formatSize; // @synthesize formatSize=_formatSize;
@property(nonatomic) _Bool badge; // @synthesize badge=_badge;
- (void).cxx_destruct;
- (void)reportCodeToFieldStats:(int)arg1;
- (void)save;
- (void)restore;
- (void)reset;
@property(readonly, nonatomic) NSError *error;
- (void)updateError;
- (void)sendErrorUpdatedNotification;
@property(readonly, nonatomic) int code;
- (void)didChangeAutoBackupInterval;
- (void)willChangeAutoBackupInterval;
@property(retain, nonatomic) NSNumber *spaceNeeded;
- (void)reportSpaceNeeded:(unsigned long long)arg1;
- (void)clearError:(int)arg1;
- (void)reportError:(int)arg1;
- (void)set:(_Bool)arg1 error:(int)arg2;
- (void)checkForErrorUpdate:(int)arg1;
- (void)reportErrorWithObject:(id)arg1;
- (void)refresh;
@property(readonly, nonatomic) NSDate *autoBackupStartDate;
@property(readonly, nonatomic) NSDate *autoBackupExpirationDate;
@property(readonly, nonatomic) long long expirationDateMultiplier;
@property(retain, nonatomic) NSDate *customDateMarker;
- (void)updateBadge;
@property(readonly, nonatomic, getter=isBadgeMuted) _Bool badgeMuted;
- (void)sendBadgeUpdatedNotification;
- (void)scheduleBadgeUnmute;
- (void)unmuteBadge;
- (void)muteBadge;
@property(retain, nonatomic) NSDate *badgeMutedDate;
- (void)setOrRemoveObject:(id)arg1 forKey:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)errorForCode:(int)arg1;

@end

