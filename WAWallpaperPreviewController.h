//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAViewController.h"

#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIButton, UIImage, UIImageView, UIMotionEffectGroup, UIScrollView, UITableView, UIView;

@interface WAWallpaperPreviewController : WAViewController <UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UIView *_bottomView;
    UIScrollView *_pagingScrollView;
    NSMutableArray *_scrollViewPages;
    UIScrollView *_scrollView;
    UIImageView *_imageView;
    UITableView *_tableViewMessages;
    UIButton *_buttonParallaxOnOff;
    UIMotionEffectGroup *_parallaxEffect;
    _Bool _parallaxEnabled;
    NSArray *_messagesLeft;
    NSArray *_messagesMiddle;
    NSArray *_messagesRight;
    NSArray *_messagesSinglePhoto;
    _Bool _libraryMode;
    id <WAWallpaperPreviewControllerDelegate> _delegate;
    long long _libraryImageIndex;
    UIImage *_image;
}

+ (id)controllerWithLibraryImageIndex:(unsigned long long)arg1;
+ (id)controllerWithImage:(id)arg1;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long libraryImageIndex; // @synthesize libraryImageIndex=_libraryImageIndex;
@property(nonatomic) _Bool libraryMode; // @synthesize libraryMode=_libraryMode;
@property(nonatomic) __weak id <WAWallpaperPreviewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowWithCellData:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sampleChatMessagesForTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)updateScrollViewAfterEnablingMotion:(_Bool)arg1;
- (void)checkIfMotionShouldBeDisabledUnintentionally;
- (void)updateBlurEffectsForParallaxButton:(id)arg1;
- (void)updateParallaxOnOffButtonState;
- (void)setParallaxEffectEnabled:(_Bool)arg1;
- (void)parallaxOnOffAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)doneAction:(id)arg1;
- (void)bottomButtonAnyTouch:(id)arg1;
- (id)imageForCurrentZoomRect;
- (void)reloadSingleImage;
- (void)tilePages;
- (void)setCurrentPageIndex:(unsigned long long)arg1;
- (void)scrollToPageAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)unloadScrollViewPageAtIndex:(long long)arg1;
- (void)loadScrollViewPageAtIndex:(long long)arg1 asynchronously:(_Bool)arg2;
- (id)parallaxOnOffButton;
- (id)sampleConversationTable;
- (void)presentFromViewController:(id)arg1 animated:(_Bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

