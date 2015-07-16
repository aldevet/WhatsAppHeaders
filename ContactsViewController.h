//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAViewController.h"

#import "ABNewPersonViewControllerDelegate.h"

@class NSArray, NSIndexPath, NSString, NSTimer, UIActivityIndicatorView, UILabel, UITableView, UITableViewCell, UIView, WAContactNameLabel;

@interface ContactsViewController : WAViewController <ABNewPersonViewControllerDelegate>
{
    NSArray *_sections;
    NSArray *_searchResults;
    long long _numberOfContacts;
    NSIndexPath *_selectedRowIndexPath;
    _Bool _dataAvailable;
    _Bool _initialLoadingCompleted;
    NSTimer *_dataAvailabilityTimer;
    long long _lastKnownNumberOfContacts;
    long long _centerRowIndexPortrait;
    long long _centerRowIndexLandscape;
    int _groupID;
    UITableView *_tableView;
    UIView *_viewMyNumber;
    WAContactNameLabel *_labelMyNumber;
    UITableViewCell *_cellNoContacts;
    UILabel *_labelNoContacts;
    UITableViewCell *_cellContactsTotal;
    UILabel *_labelContactsTotal;
    UITableViewCell *_cellLoading;
    UIActivityIndicatorView *_aiLoading;
    UILabel *_labelLoading;
}

@property(retain, nonatomic) UILabel *labelLoading; // @synthesize labelLoading=_labelLoading;
@property(retain, nonatomic) UIActivityIndicatorView *aiLoading; // @synthesize aiLoading=_aiLoading;
@property(retain, nonatomic) UITableViewCell *cellLoading; // @synthesize cellLoading=_cellLoading;
@property(retain, nonatomic) UILabel *labelContactsTotal; // @synthesize labelContactsTotal=_labelContactsTotal;
@property(retain, nonatomic) UITableViewCell *cellContactsTotal; // @synthesize cellContactsTotal=_cellContactsTotal;
@property(retain, nonatomic) UILabel *labelNoContacts; // @synthesize labelNoContacts=_labelNoContacts;
@property(retain, nonatomic) UITableViewCell *cellNoContacts; // @synthesize cellNoContacts=_cellNoContacts;
@property(retain, nonatomic) WAContactNameLabel *labelMyNumber; // @synthesize labelMyNumber=_labelMyNumber;
@property(retain, nonatomic) UIView *viewMyNumber; // @synthesize viewMyNumber=_viewMyNumber;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) int groupID; // @synthesize groupID=_groupID;
- (void).cxx_destruct;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2;
- (void)contactsStorageDidUpdateContacts:(id)arg1;
- (void)contactsStorageDidUpdateStatus:(id)arg1;
- (void)chatManagerDidChangePhoneNumer:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)isIndexPathLastRowInTable:(id)arg1;
- (id)contactInfoForTableIndexPath:(id)arg1;
- (id)contactsSectionForTableSection:(long long)arg1;
- (void)adjustSearchbarPositionAndTableviewInsets;
- (void)addContactAction:(id)arg1;
- (void)alignActivityIndicator;
- (void)saveTableScrollPosition;
- (_Bool)showIndexBar;
- (void)reloadContactsTable;
- (void)checkDataAvailability:(id)arg1;
- (void)restoreTableScrollPosition;
- (void)setupDisplayList;
- (void)loadContactsInSection:(id)arg1;
- (void)leaveSearchMode;
- (void)searchWithCriteria:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
