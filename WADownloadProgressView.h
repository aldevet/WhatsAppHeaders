//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel, WACircularProgressView, WAShapeView, _WADownloadIndefiniteProgressView;

@interface WADownloadProgressView : UIView
{
    UIImageView *_downloadIconView;
    UILabel *_fileSizeLabel;
    WAShapeView *_pillView;
    UIView *_cancelDownloadView;
    WACircularProgressView *_arcView;
    _WADownloadIndefiniteProgressView *_indefiniteProgressView;
    UIView *_containerView;
    _Bool _downloading;
    _Bool _showIndeterminateProgressBarOnly;
    id <WADownloadProgressViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WADownloadProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showIndeterminateProgressBarOnly; // @synthesize showIndeterminateProgressBarOnly=_showIndeterminateProgressBarOnly;
@property(nonatomic) _Bool downloading; // @synthesize downloading=_downloading;
- (void).cxx_destruct;
- (void)handleSingleTap:(id)arg1;
- (void)reset;
- (void)stopAnimation;
- (void)setDownloading:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
@property(nonatomic) float progress;
@property(nonatomic) _Bool downloadIconHidden;
@property(copy, nonatomic) NSString *fileSizeText;
- (id)pillPathInsideRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

