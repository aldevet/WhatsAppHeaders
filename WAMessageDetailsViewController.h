//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAChatBaseViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WADateBubbleViewDelegate.h"
#import "WADetailsTableSizeObzerver.h"
#import "WALocationDataSource.h"
#import "WAMessageCellDelegate.h"
#import "WANavigationControllerPopFromAnimating.h"

@class NSDate, NSString, UIScrollView, UITableView, UIView, WAChatCellData, WAConversationHeaderView, WALocationData, WAMessage;

@interface WAMessageDetailsViewController : WAChatBaseViewController <UIScrollViewDelegate, WADateBubbleViewDelegate, UITableViewDelegate, UITableViewDataSource, WAMessageCellDelegate, WALocationDataSource, WADetailsTableSizeObzerver, UIGestureRecognizerDelegate, WANavigationControllerPopFromAnimating>
{
    UITableView *_tableViewDetails;
    UITableView *_tableViewMessage;
    UIView *_messagesTableBorder;
    WAConversationHeaderView *_headerView;
    id <UITableViewDelegate><UITableViewDataSource><WAMessageDetailsTableUpdateDelegate> _detailsTableDelegate;
    UIScrollView *_coverScrollView;
    _Bool _needToSetInitialPosition;
    WAMessage *_message;
    WAChatCellData *_cellData;
    WALocationData *_locationData;
    NSDate *_allowTableRefreshTime;
    _Bool _detailsTableUpdateScheduled;
    NSString *_dateString;
}

- (void).cxx_destruct;
- (void)messageCell:(id)arg1 swipeGestureDidChange:(id)arg2;
- (void)messageCell:(id)arg1 willShowMoreOptionsForTextBlock:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)messageCell:(id)arg1 didSelectTextBlock:(id)arg2;
- (void)replyMessageSenderFromCell:(id)arg1;
- (void)addMessageSenderInCell:(id)arg1;
- (void)deleteMessagesInCell:(id)arg1;
- (void)forwardMessagesInCell:(id)arg1;
- (void)openURL:(id)arg1 fromCell:(id)arg2;
- (void)handleDoubleTapInCell:(id)arg1;
- (void)handleSingleTapInCell:(id)arg1;
- (void)invertSelectionForCell:(id)arg1;
- (void)cancelButtonTappedInCell:(id)arg1;
- (void)viewButtonTappedInCell:(id)arg1;
- (void)downloadButtonTappedInCell:(id)arg1;
- (void)alertButtonTappedInCell:(id)arg1;
- (void)forwardCurrentMessage;
- (void)shareCurrentMessageExternally;
- (id)locationsWithCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)locationDataAtIndex:(long long)arg1;
- (unsigned long long)numberOfLocations;
- (void)wa_fontSizeDidChange;
- (void)needSizeUpdate;
- (void)viewMediaFromMessageCell:(id)arg1;
- (void)openMediaViewerFromMessageCell:(id)arg1;
- (void)playPttFromMessageCell:(id)arg1;
- (void)retrySendingMessageFromCellData:(id)arg1;
- (void)deleteMessagesFromCellData:(id)arg1;
- (void)chatStorageDidDeleteMessages:(id)arg1;
- (void)waMessageUpdated:(id)arg1;
- (id)dateBubbleBlurredImage:(id)arg1;
- (id)dateBubbleBackgroundImageView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateViewPositions;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)messageDateStringFromDate:(id)arg1;
- (void)updateDetailsTable;
- (id)detailsTable;
- (id)messageTable;
- (void)updateLayoutForCurrentOrientation;
- (_Bool)shouldAutorotate;
- (_Bool)usesScreenEdgePanGestureRecognizerForCustomPopTransition;
- (id)popFromAnimationIdentifier;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCellData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

