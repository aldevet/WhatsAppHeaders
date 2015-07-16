//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WATableViewController.h"

#import "HostSelectorDelegate.h"

@class NSString;

@interface DebugViewController : WATableViewController <HostSelectorDelegate>
{
}

- (void)checkDatabaseIntegrity;
- (void)dismissDatabaseStatsViewController;
- (void)hostSelectorDidCancel:(id)arg1;
- (void)hostSelector:(id)arg1 didEnterHostname:(id)arg2;
- (void)xmppConnectionStateDidChange:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)rotateFieldStats;
- (void)unmigrateData;
- (void)askForCallRecordingDelete;
- (void)viewArchivedChats;
- (void)showDebugFullTextSearch;
- (void)simulateExpiredBuild;
- (void)simulateUpgrade;
- (void)requestAllListsFromServer;
- (void)debugMedia;
- (void)deleteOrphanedMessages;
- (void)resetBackupBadgeDate;
- (void)resetBackupDate;
- (void)deleteiCloudBackup;
- (void)debugRestore;
- (void)backupStatistics;
- (void)logiCloudFiles;
- (void)evictiCloudFiles;
- (void)askForURL;
- (void)debugCrash;
- (void)removeRecoveryTokenFile;
- (void)resetRecoveryToken;
- (void)resetIdentity;
- (void)resetPassword;
- (void)resetContacts;
- (void)showFileBrowserInAppGroup;
- (void)showFileBrowserInMainContainer;
- (void)showDatabaseStats;
- (void)toggleEnableEmojiKeyboard:(id)arg1;
- (void)showInputEmojiView;
- (void)showHostPicker;
- (void)wa_fontSizeDidChange;
- (void)wa_tintColorDidChange;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
