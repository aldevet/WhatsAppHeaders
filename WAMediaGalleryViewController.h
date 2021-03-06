//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "WAImageToImageTransitioning.h"
#import "WAMediaGallery.h"
#import "WANavigationControllerPopToAnimating.h"

@class NSIndexPath, NSMutableArray, NSMutableIndexSet, NSMutableSet, NSOperationQueue, NSString, UIBarButtonItem, UICollectionView, UIImageView, UILabel, UIView, WAMediaGalleryFlowLayout, WAMediaManager;

@interface WAMediaGalleryViewController : WAViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WAImageToImageTransitioning, WANavigationControllerPopToAnimating, WAMediaGallery>
{
    NSOperationQueue *_thumbnailLoadingOpQueue;
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
    _Bool _footerVisible;
    _Bool _needsAutoScroll;
    _Bool _tallScreen;
    UIView *_transitionAnimationSourceView;
    NSIndexPath *_messageIndexPathForTransitionAnimation;
    NSMutableSet *_selectedIndexPaths;
    NSMutableArray *_selectedMessagesBeforeMediaManagerContentChange;
    _Bool _mediaManagerUpdateInProgress;
    _Bool _ignoreMediaManagerNotifications;
    NSMutableIndexSet *_insertedSections;
    NSMutableArray *_insertedIndexPaths;
    NSMutableIndexSet *_deletedSections;
    NSMutableArray *_deletedIndexPaths;
    _Bool _isPerformingFancyRotation;
    UIImageView *_beforeRotationSnapshotImageView;
    UIImageView *_afterRotationSnapshotImageView;
    UIView *_whiteBackgroundView;
    NSIndexPath *_thumbnailIndexPathToRestore;
    WAMediaGalleryFlowLayout *_portraitLayout;
    WAMediaGalleryFlowLayout *_landscapeLayout;
    WAMediaManager *_mediaManager;
    id <WAMediaGalleryControllerDelegate> _delegate;
    NSIndexPath *_indexPathOfMessageToScrollToWhenAppearing;
    UICollectionView *_collectionView;
}

+ (id)controller;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSIndexPath *indexPathOfMessageToScrollToWhenAppearing; // @synthesize indexPathOfMessageToScrollToWhenAppearing=_indexPathOfMessageToScrollToWhenAppearing;
@property(nonatomic) __weak id <WAMediaGalleryControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAMediaManager *mediaManager; // @synthesize mediaManager=_mediaManager;
- (void).cxx_destruct;
- (void)handleInteractiveDismissGesture:(id)arg1;
- (_Bool)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)arg1;
- (id)popAnimationControllerFromViewController:(id)arg1;
- (id)popAnimationInteractionControllerFromViewController:(id)arg1;
- (void)finishTransitionWithView:(id)arg1 context:(id)arg2;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)addIndexPathForAddedCell:(id)arg1;
- (void)addIndexPathForDeletedCell:(id)arg1;
- (void)mediaManagerDidAddContent:(id)arg1;
- (void)mediaManagerDidDeleteContent:(id)arg1;
- (void)mediaManagerDidChangeContent:(id)arg1;
- (void)mediaManagerWillChangeContent:(id)arg1;
- (void)forwardMediaItems:(id)arg1 toContactInfo:(id)arg2;
- (void)shareSelectedItems:(id)arg1;
- (void)deleteSelectedMedia;
- (void)deleteAction:(id)arg1;
- (void)presentMediaAtIndexPath:(id)arg1;
- (void)exit:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)editAction:(id)arg1;
- (void)updateCollectionViewLayoutToCurrentInterfaceOrientationIfNecessary;
- (void)scrollAutomaticallyToRelevantItem;
- (void)relayoutNoMediaViews;
- (void)updateCollectionViewInsets;
- (void)updateEditingWithAnimation:(_Bool)arg1;
- (void)updateSelection;
- (void)updateFooter;
- (void)updateMainVisibleView;
- (id)uniqueIdentifier;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)collectionViewSnapshot;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

