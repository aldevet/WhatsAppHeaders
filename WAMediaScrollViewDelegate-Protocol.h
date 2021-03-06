//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WAMediaScrollView;

@protocol WAMediaScrollViewDelegate <NSObject>
- (_Bool)isMediaScrollViewInFullScreenMode:(WAMediaScrollView *)arg1;
- (void)mediaScrollViewWillBeginDragging:(WAMediaScrollView *)arg1;
- (void)mediaScrollViewDidEndZooming:(WAMediaScrollView *)arg1;
- (void)mediaScrollViewWillBeginZooming:(WAMediaScrollView *)arg1;
- (void)mediaScrollViewWillBeginZoomBounceAnimation:(WAMediaScrollView *)arg1;
- (void)mediaScrollViewDidZoom:(WAMediaScrollView *)arg1;
- (void)mediaScrollViewDidScroll:(WAMediaScrollView *)arg1;
- (void)mediaScrollViewDidEndScrubbing:(WAMediaScrollView *)arg1;
- (void)mediaScrollViewDidBeginScrubbing:(WAMediaScrollView *)arg1;
- (struct UIEdgeInsets)mediaScrollViewLayoutInset:(WAMediaScrollView *)arg1;
- (_Bool)mediaScrollViewCanShowErrorAlertView:(WAMediaScrollView *)arg1;
- (void)mediaScrollViewWantsFullscreenTimerInvalidated:(WAMediaScrollView *)arg1;
- (void)mediaScrollViewPlaybackDidFinish:(WAMediaScrollView *)arg1;
- (void)mediaScrollViewPlaybackStateDidChange:(WAMediaScrollView *)arg1;
- (void)mediaScrollViewLoadStateDidChange:(WAMediaScrollView *)arg1;
- (void)mediaScrollViewDidFinishLongPress:(WAMediaScrollView *)arg1;
- (void)mediaScrollViewDidReceiveSingleTap:(WAMediaScrollView *)arg1;
@end

