//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAMultiSendThumbnailBrowserItemView.h"

@class UIImageView, WAMediaPickerVideoAssetOverlayView;

@interface WAMultiSendThumbnailBrowserImageView : WAMultiSendThumbnailBrowserItemView
{
    WAMediaPickerVideoAssetOverlayView *_videoOverlayView;
    UIImageView *_thumbnailView;
}

+ (id)viewWithMediaItem:(id)arg1;
@property(readonly, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
- (void).cxx_destruct;
- (void)configureWithMediaItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

