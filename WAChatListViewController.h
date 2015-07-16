//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAChatSessionsViewController.h"

#import "ABDisabledControllerDelegate.h"
#import "ForwardPickerDelegate.h"
#import "PhoneConfirmationControllerDelegate.h"
#import "PhoneInputViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UIVideoEditorControllerDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"
#import "WAAllChatsArchivedViewDelegate.h"
#import "WAChatComposerDelegate.h"
#import "WAChatListSearchBarDelegate.h"
#import "WAEmptyChatListViewDelegate.h"
#import "WAMediaGalleryControllerDelegate.h"
#import "WASearchResultsControllerDelegate.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_group>, NSString, UIBarButtonItem, UIPercentDrivenInteractiveTransition, UITableViewCell, WAActivityLabel, WAAllChatsArchivedView, WAChatListHeaderCell, WAChatSession, WAEmptyChatListView, WASearchResultsController;

@interface WAChatListViewController : WAChatSessionsViewController <WASearchResultsControllerDelegate, PhoneInputViewControllerDelegate, ABDisabledControllerDelegate, WAChatComposerDelegate, WAMediaGalleryControllerDelegate, ForwardPickerDelegate, WAEmptyChatListViewDelegate, PhoneConfirmationControllerDelegate, WAAllChatsArchivedViewDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIVideoEditorControllerDelegate, WAChatListSearchBarDelegate, UISearchDisplayDelegate>
{
    CDUnknownBlockType _prepareToSendVideoFileCompletionHandler;
    NSString *_stringForSizingDeleteButton;
    NSString *_stringForSizingExitButton;
    NSMutableDictionary *_chatViewControllers;
    void *_addressBook;
    UIBarButtonItem *_deleteAllButton;
    UIBarButtonItem *_composeButton;
    WAChatListHeaderCell *_headerCell;
    WAActivityLabel *_activityLabel;
    NSString *_activityText;
    unsigned long long _activityCounter;
    double _lastActivityUpdateTime;
    WAEmptyChatListView *_emptyChatListView;
    WAAllChatsArchivedView *_allChatsArchivedView;
    NSString *_lastPresentedJID;
    NSArray *_deletedEmptyChatSessions;
    WASearchResultsController *_searchResultsController;
    double _searchResultCellHeight;
    _Bool _needsRemoveInvalidSearchResults;
    _Bool _needsReloadSearchResultsTableAfterLayout;
    _Bool _isSearchBarAnimationInProgress;
    _Bool _needsHideSearchBarOnLayout;
    _Bool _ignoreScrollViewDidScroll;
    _Bool _animateChangesToSearchResults;
    WAChatSession *_chatSessionForSideSwipe;
    UITableViewCell *_chatSessionCellForSideSwipe;
    UIPercentDrivenInteractiveTransition *_sideSwipeInteractionController;
    _Bool _sideSwipeInteractionInProgress;
    _Bool _sideSwipeIsPresenting;
    NSObject<OS_dispatch_group> *_sideSwipeDispatchGroup;
}

+ (_Bool)isEditButtonOnTheRight;
- (void).cxx_destruct;
- (id)startChatWithContact:(id)arg1 JID:(id)arg2 animated:(_Bool)arg3;
- (id)tableViewSessions;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)processSendURL:(id)arg1;
- (void)forwardFileAtURL:(id)arg1;
- (void)showChatAfterSendingExternalMediaWithMessage:(id)arg1 error:(id)arg2;
- (void)sendExternalMediaAtURL:(id)arg1 toContactInfo:(id)arg2;
- (void)videoEditorControllerDidCancel:(id)arg1;
- (void)videoEditorController:(id)arg1 didFailWithError:(id)arg2;
- (void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2;
- (void)prepareExternalVideoFileForSending:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forwardMessages:(id)arg1 toContactInfo:(id)arg2;
- (id)forwardPicker:(id)arg1 confirmationButtonTitleForContactInfo:(id)arg2;
- (id)forwardPicker:(id)arg1 confirmationTextForContactInfo:(id)arg2;
- (_Bool)forwardPicker:(id)arg1 shouldProceedWithContactInfo:(id)arg2;
- (void)forwardPickerDidCancel:(id)arg1;
- (void)forwardPicker:(id)arg1 didSelectContactInfo:(id)arg2;
- (void)chatComposerDidAskToInviteFriends:(id)arg1;
- (void)chatComposerDidCancel:(id)arg1;
- (void)chatComposer:(id)arg1 didFinishWithContacts:(id)arg2 subject:(id)arg3 picture:(id)arg4;
- (void)chatComposer:(id)arg1 didFinishWithContactInfo:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setChatSearchBarExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)chatListSearchBarWillShowArchivedChats:(id)arg1;
- (void)showAllArchivedChats;
- (void)allChatsArchivedViewDidChooseViewArchivedChats:(id)arg1;
- (void)mediaGalleryController:(id)arg1 interactiveDismissGestureDidChange:(id)arg2;
- (void)mediaGalleryControllerDidExit:(id)arg1;
- (void)mediaGalleryController:(id)arg1 didSelectMediaAtIndexPath:(id)arg2;
- (void)cleanUpAfterSideSwipe;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)prepareForSideSwipe;
- (void)cancelSideSwipeGesture:(id)arg1;
- (void)chatSessionCell:(id)arg1 sideSwipeGestureDidChange:(id)arg2;
- (_Bool)allowSideSwipeGestureToComplete:(id)arg1;
- (_Bool)sideSwipeGestureSupportsLandscapeOrientation;
- (void)phoneInputViewControllerDidCancel:(id)arg1;
- (void)phoneInputViewController:(id)arg1 didFinishWithCountryCode:(id)arg2 phoneNumber:(id)arg3;
- (void)abDisabledViewControllerDidCancel:(id)arg1;
- (void)removeFileAtURL:(id)arg1;
- (void)updateChatSessionCellsInSearchTableView;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchResultsControllerDidUpdateContent:(id)arg1;
- (void)searchResultsController:(id)arg1 didDeleteSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didDeleteRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertRowsAtIndexPaths:(id)arg2;
- (void)searchResultsControllerWillUpdateContent:(id)arg1;
- (_Bool)searchResultsControllerShouldUpdateContent:(id)arg1;
- (void)redrawSeparatorsInTableView:(id)arg1;
- (void)reloadSearchResultsTableView;
- (void)searchResultsControllerDidChangeContent:(id)arg1;
- (void)removeInvalidSearchResults;
- (void)hideSearchBarIfNeeded;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)chatSessionForRowAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (id)tableViewForChatSessionCell:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)didSelectSearchResultsRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableViewCellForSearchResultInTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)tableViewCellForList:(id)arg1 inTableView:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)fetchedResultsSectionIndexFromTableSectionIndex:(unsigned long long)arg1;
- (unsigned long long)tableSectionIndexFromFetchedResultsSectionIndex:(unsigned long long)arg1;
- (id)fetchedResultsIndexPathFromTableIndexPath:(id)arg1;
- (id)tableIndexPathFromFetchedResultsIndexPath:(id)arg1;
- (void)rollbackPendingDeletionOfEligibleChatSessions;
- (void)commitPendingDeletionOfEligibleChatSessions;
- (void)deleteEmptyEligibleChatSessionsImmediately:(_Bool)arg1;
- (void)setNeedsRemoveInvalidSearchResultsIfNeeded;
- (void)chatStorageDidDeleteAllMessagesInChatSession:(id)arg1;
- (void)chatStorageDidDeleteMessagesInChatSession:(id)arg1;
- (void)chatStorageDidDeleteChatSessions:(id)arg1;
- (void)chatStorageWillDeleteChatSession:(id)arg1;
- (void)didLoadDatabase;
- (void)didInsertOrDeleteRows;
- (void)didChangeContent;
- (void)updateUnreadBadgeInTabBar;
- (void)saveUnreadCount;
@property(readonly, nonatomic) unsigned long long numberOfUnreadMessages;
@property(readonly, nonatomic) unsigned long long numberOfUnreadChatSessions;
- (id)predicateForFetchRequest;
- (id)startChatWithContact:(id)arg1 jid:(id)arg2 prefilledText:(id)arg3 pushImmediately:(_Bool)arg4 animated:(_Bool)arg5;
- (id)startChatWithContact:(id)arg1 jid:(id)arg2 pushImmediately:(_Bool)arg3 animated:(_Bool)arg4;
- (void)startChatWithContact:(id)arg1 jid:(id)arg2 prefilledText:(id)arg3;
- (void)startChatWithContactInfo:(id)arg1 prefilledText:(id)arg2;
- (id)existingOrNewChatSessionWithContact:(id)arg1 jid:(id)arg2;
- (id)existingOrNewChatSessionWithABID:(int)arg1 jid:(id)arg2;
- (id)startChatWithSession:(id)arg1 highlightedMessage:(id)arg2 prefilledText:(id)arg3 presentKeyboard:(_Bool)arg4 pushImmediately:(_Bool)arg5 animated:(_Bool)arg6;
- (void)presentChatSessionOfMessage:(id)arg1;
- (void)presentChatSession:(id)arg1;
- (void)emptyChatListViewWillInviteContacts:(id)arg1;
- (void)phoneConfirmationControllerDidCancel:(id)arg1;
- (void)phoneConfirmationControllerDidFinish:(id)arg1;
- (void)deleteAllChats:(id)arg1;
- (void)inviteContacts;
- (void)showBroadcastLists:(id)arg1;
- (void)startGroupChat:(id)arg1;
- (void)startNewChat:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)wa_applicationDidEnterBackground;
- (void)didReceiveMemoryWarning;
- (void)showTooltipIfNeeded;
- (id)backItemTitleForViewController:(id)arg1;
- (id)shortViewControllerTitle;
- (void)formatTitle;
- (void)updateNetworkStatusLabel;
- (void)visibleConnectionStatusDidChange;
- (void)purgeViewControllers;
- (_Bool)isCachedViewControllerAvailableForChatSession:(id)arg1;
- (void)removeCachedViewControllerForChatSession:(id)arg1;
- (void)willUnloadDatabase;
- (_Bool)shouldAutorotate;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)preselectedIndexPathOnAppear;
- (_Bool)shouldShowNoContentView;
- (void)setUpNoContentView:(id)arg1;
- (id)separatorColor;
- (void)updateInterfaceWithAnimation:(_Bool)arg1;
- (void)updateAllChatsArchivedView;
- (id)searchOverlayInView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (void)commonInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
