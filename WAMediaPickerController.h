//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WANavigationController.h"

#import "PHPhotoLibraryChangeObserver.h"
#import "UIToolbarDelegate.h"
#import "WAMediaPickerDataSource.h"

@class NSMutableArray, NSMutableSet, NSSet, NSString, NSTimer, UILabel, UIToolbar, UIView, WAMediaPickerAsset, WAMediaPickerLibraryController, WAMediaPickerLibraryViewController;

@interface WAMediaPickerController : WANavigationController <PHPhotoLibraryChangeObserver, UIToolbarDelegate, WAMediaPickerDataSource>
{
    long long _originalStatusBarStyle;
    NSSet *_initiallySelectedAssetIdentifiers;
    NSMutableArray *_selectedAssetIdentifiers;
    NSTimer *_updateNavigationBarTimer;
    WAMediaPickerLibraryViewController *_libraryViewController;
    _Bool _alreadyNotifiedDelegateOfFirstApperarance;
    UIView *_alertToolbarContainerView;
    UIToolbar *_alertToolbar;
    UILabel *_alertLabel;
    NSMutableArray *_newlySelectedAssets;
    NSMutableSet *_assetsToUnload;
    WAMediaPickerAsset *_lastSelectedAsset;
    WAMediaPickerLibraryController *_libraryController;
    long long _maximumSelectionCount;
    id _lastUsedAssetCollectionIdentifier;
}

+ (id)mediaPicker;
@property(retain, nonatomic) id lastUsedAssetCollectionIdentifier; // @synthesize lastUsedAssetCollectionIdentifier=_lastUsedAssetCollectionIdentifier;
@property(nonatomic) long long maximumSelectionCount; // @synthesize maximumSelectionCount=_maximumSelectionCount;
@property(retain, nonatomic) WAMediaPickerLibraryController *libraryController; // @synthesize libraryController=_libraryController;
- (void).cxx_destruct;
- (void)showMaximumSelectionCountExceededError;
- (void)recheckSelectedAssetURLsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)recheckSelectedAssetIdentifiers;
- (void)setInitiallySelectedAssetIdentifiers:(id)arg1;
- (id)selectedAssetIdentifiers;
- (void)toggleSelectionOfMediaPickerAsset:(id)arg1;
- (_Bool)allowsMultipleSelection;
- (void)deselectAssetIdentifiers:(id)arg1;
- (void)clearSelection;
- (_Bool)canAddMoreMediaPickerAssets;
- (_Bool)canSelectMediaPickerAsset:(id)arg1;
- (void)setDoneButtonSpinnerHidden:(_Bool)arg1;
- (void)showDoneButtonSpinner;
- (id)mediaPickerItemsFromIdentifiers:(id)arg1 assets:(id)arg2;
- (void)dismiss;
- (void)cancel:(id)arg1;
- (void)unloadPreviouslySelectedAssets;
- (void)updateNavigationBar;
- (void)updateToolbarWithWarningText:(id)arg1;
- (void)updateNavigationBarAndToolbar;
- (void)updateToolbarHiddenStateWithAnimation:(_Bool)arg1;
- (id)toolbarItems;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)positionForBar:(id)arg1;
- (void)setUpAlertToolbar;
- (void)setAlertToolbarText:(id)arg1 animated:(_Bool)arg2;
- (void)notifyViewAppearanceCompletion;
- (void)pushLastUsedAssetCollection;
- (void)presentModallyFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)assetsLibraryChanged:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WAMediaPickerControllerDelegate><UINavigationControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

