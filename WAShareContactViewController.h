//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView, WAMergedContact, WAShareContactTableHeaderView, WAVCardNameSharingUnit, WAVCardProfilePhotoSharingUnit;

@interface WAShareContactViewController : WAViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_sharingGroups;
    NSArray *_allSharingUnits;
    WAVCardNameSharingUnit *_nameSharingUnit;
    WAVCardProfilePhotoSharingUnit *_profilePhotoSharingUnit;
    WAShareContactTableHeaderView *_tableHeaderView;
    id <WAShareContactViewControllerDelegate> _delegate;
    UITableView *_tableView;
    WAMergedContact *_mergedContact;
}

+ (id)controllerWithMergedContact:(id)arg1;
@property(retain, nonatomic) WAMergedContact *mergedContact; // @synthesize mergedContact=_mergedContact;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WAShareContactViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)sendContact:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)rebuildSharingGroups;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

