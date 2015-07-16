//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAVideoPreviewViewController.h"

#import "UINavigationControllerDelegate.h"
#import "UIVideoEditorControllerDelegate.h"

@class MPMoviePlayerController, NSString;

@interface WASingleVideoPreviewViewController : WAVideoPreviewViewController <UIVideoEditorControllerDelegate, UINavigationControllerDelegate>
{
    MPMoviePlayerController *_player;
}

- (void).cxx_destruct;
- (void)videoEditorControllerDidCancel:(id)arg1;
- (void)videoEditorController:(id)arg1 didFailWithError:(id)arg2;
- (void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2;
- (void)processTranscodedVideoOfDuration:(double)arg1 atURL:(id)arg2 referenceURL:(id)arg3;
- (void)setProgressViewHidden:(_Bool)arg1;
- (void)sendVideo:(id)arg1;
- (id)fullscreenButtonOniOS7InView:(id)arg1;
- (void)hideFullscreenButton;
- (void)playerDidPostNotification:(id)arg1;
- (void)playerDidEnterFullscreen:(id)arg1;
- (void)playerWillEnterFullscreen:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)captionBarWillHideKeyboard:(id)arg1;
- (void)captionBarWillShowKeyboard:(id)arg1;
- (void)relayoutViews;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
