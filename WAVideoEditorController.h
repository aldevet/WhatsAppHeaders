//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAVideoPreviewViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "WAImageToImageTransitioning.h"
#import "WAMediaPlayerDelegate.h"
#import "WAVideoScrubberDelegate.h"

@class AVAssetImageGenerator, AVAssetTrack, AVMutableComposition, AVMutableCompositionTrack, AVMutableVideoComposition, AVURLAsset, NSString, UIBarButtonItem, UIView, WABorderlessToolbar, WAMediaPlayer, WAVideoScrubber;

@interface WAVideoEditorController : WAVideoPreviewViewController <WAMediaPlayerDelegate, WAVideoScrubberDelegate, UIGestureRecognizerDelegate, WAImageToImageTransitioning>
{
    WAMediaPlayer *_mediaPlayer;
    WAVideoScrubber *_videoScrubber;
    UIView *_videoScrubberContainerView;
    _Bool _videoScrubberHidden;
    AVMutableComposition *_composition;
    AVMutableVideoComposition *_videoComposition;
    AVMutableCompositionTrack *_videoCompositionTrack;
    AVURLAsset *_originalAsset;
    AVAssetTrack *_videoTrack;
    AVAssetTrack *_audioTrack;
    struct CGSize _videoPresentationSize;
    int _slowMotionFactor;
    _Bool _fullscreenMode;
    UIBarButtonItem *_playButtonItem;
    UIBarButtonItem *_pauseButtonItem;
    UIBarButtonItem *_spaceButtonItem;
    AVAssetImageGenerator *_lastImageGenerator;
    WABorderlessToolbar *_toolbar;
    CDStruct_1b6d18a9 _sourceTimeToSeekOnPlayerLoad;
    CDStruct_e83c9415 _compositionSlowMotionTimeRange;
    _Bool _waitingToReprocessVideo;
    _Bool _initialTranscodeStarted;
    UIView *_postSeekSnapshot;
    _Bool _isHidingKeyboard;
}

+ (int)captionBarStyle;
- (void).cxx_destruct;
- (void)finishTransitionWithView:(id)arg1 context:(id)arg2;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (void)mediaPlayerDidEndScrubbing:(id)arg1;
- (void)mediaPlayerDidBeginScrubbing:(id)arg1;
- (void)mediaPlayerDidFinishLoading:(id)arg1;
- (void)mediaPlayerDidPlayToEndTime:(id)arg1;
- (void)mediaPlayerDidChangeCurrentTime:(id)arg1;
- (void)mediaPlayerStatusDidChange:(id)arg1;
- (void)mediaPlayerDidRequestPlaybackStart:(id)arg1;
- (struct CGSize)videoScrubberThumbnailAspectRatio:(id)arg1;
- (void)videoScrubber:(id)arg1 videoFramesAtTimes:(id)arg2 size:(struct CGSize)arg3 tolerance:(CDStruct_1b6d18a9)arg4 block:(CDUnknownBlockType)arg5;
- (void)videoScrubberDidEndScrubbing:(id)arg1;
- (void)videoScrubberDidChangeCurrentTime:(id)arg1;
- (void)videoScrubberDidBeginScrubbing:(id)arg1 pausePlayback:(_Bool)arg2;
- (void)videoScrubberDidChangeSlowMotionTimeRange:(id)arg1;
- (void)videoScrubberDidChangeTrimmedTimeRange:(id)arg1;
- (CDStruct_1b6d18a9)sourceTimeFromPlayerTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)playerTimeFromSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)pauseButtonTapped:(id)arg1;
- (void)playButtonTapped:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewTapped:(id)arg1;
- (void)captionBarDidHideKeyboard:(id)arg1;
- (void)captionBarWillHideKeyboard:(id)arg1;
- (void)captionBarWillShowKeyboard:(id)arg1;
- (void)setProgressViewHidden:(_Bool)arg1;
- (void)updateThumb;
- (void)updateSendButton;
- (void)sendVideo:(id)arg1;
- (id)videoCompositionForTranscode;
- (id)assetToTranscode;
- (CDStruct_e83c9415)timeRangeToExport;
- (_Bool)internalRequiresTranscoding;
- (void)reprocessVideo;
- (void)cancelReprocessVideoAfterDelay;
- (void)reprocessVideoAfterDelay;
- (void)updateMediaPlayerPlaybackTimeRange;
- (void)rebuildCompositionSeekingToSourceTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)isOriginalAssetValid;
- (void)setVideoScrubberHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutInterface;
- (void)loadOriginalAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setFullscreenMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFullscreenMode:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)updateBottomToolbar;
- (id)rotatingFooterView;
- (id)shadowViewInView:(id)arg1;
- (void)setNavigationBarShadowHidden:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)configureVideoScrubber;
- (void)viewDidLoad;
- (void)wa_fontSizeDidChange;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
