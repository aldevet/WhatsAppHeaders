//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WATableViewController.h"

#import "WAImageToImageTransitioning.h"
#import "WAMediaGallery.h"
#import "WAThumbsTableViewCellDelegate.h"

@class NSIndexPath, NSMutableArray, NSMutableSet, NSOperationQueue, NSString, UIBarButtonItem, UIImageView, UILabel, UIView, WAMediaManager;

@interface WAThumbsViewController : WATableViewController <WAImageToImageTransitioning, WAThumbsTableViewCellDelegate, WAMediaGallery>
{
    UIView *_mediaCountView;
    UILabel *_mediaCountLabel;
    UIView *_noMediaView;
    UIImageView *_noMediaImageView;
    UILabel *_noMediaTitleLabel;
    UILabel *_noMediaTextLabel;
    UIBarButtonItem *_editBarButton;
    UIBarButtonItem *_cancelBarButton;
    UIBarButtonItem *_deleteBarButton;
    UIBarButtonItem *_shareItemsBarButton;
    UIBarButtonItem *_doneBarButton;
    _Bool _editing;
    NSMutableSet *_selectedIndexPaths;
    NSOperationQueue *_thumbnailLoadingOpQueue;
    long long _thumbnailCountPerRow;
    _Bool _needsAutoScroll;
    _Bool _isPerformingFancyRotation;
    UIImageView *_beforeRotationSnapshotImageView;
    UIImageView *_afterRotationSnapshotImageView;
    UIView *_whiteBackgroundView;
    NSIndexPath *_thumbnailIndexPathToRestore;
    struct CGPoint _contentOffsetAtStartOfRotation;
    UIView *_transitionAnimationSourceView;
    NSIndexPath *_messageIndexPathForTransitionAnimation;
    NSMutableArray *_selectedMessagesBeforeMediaManagerContentChange;
    _Bool _mediaManagerUpdateInProgress;
    WAMediaManager *_mediaManager;
    id <WAMediaGalleryControllerDelegate> _delegate;
    NSIndexPath *_indexPathOfMessageToScrollToWhenAppearing;
}

@property(retain, nonatomic) NSIndexPath *indexPathOfMessageToScrollToWhenAppearing; // @synthesize indexPathOfMessageToScrollToWhenAppearing=_indexPathOfMessageToScrollToWhenAppearing;
@property(nonatomic) __weak id <WAMediaGalleryControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAMediaManager *mediaManager; // @synthesize mediaManager=_mediaManager;
- (void).cxx_destruct;
- (void)handleInteractiveDismissGesture:(id)arg1;
- (void)finishTransitionWithView:(id)arg1 context:(id)arg2;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (void)forwardMediaItems:(id)arg1 toContactInfo:(id)arg2;
- (void)shareSelectedItems:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)scrollToThumbnailAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (id)indexPathOfThumbnailAtCenterOfView;
- (id)tableViewSnapshot;
- (void)tableViewCell:(id)arg1 tappedImageAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)updateFooter;
- (void)scrollAutomaticallyToRelevantItem;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)exit:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)editAction:(id)arg1;
- (void)mediaManagerDidChangeContent:(id)arg1;
- (void)mediaManagerWillChangeContent:(id)arg1;
- (void)presentMediaAtIndexPath:(id)arg1;
- (void)deleteSelectedMedia;
- (void)updateEditingWithAnimation:(_Bool)arg1;
- (void)updateSelection;
- (void)updateLayoutToOrientation:(long long)arg1;
- (void)relayoutNoMediaViews;
- (id)uniqueIdentifier;
- (id)initWithStyle:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

