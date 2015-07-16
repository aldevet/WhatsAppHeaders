//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAViewController.h"

@class UIMotionEffectGroup, WAOverlayImageView;

@interface WAChatBackgroundViewController : WAViewController
{
    UIMotionEffectGroup *_parallaxEffect;
    WAOverlayImageView *_wallpaperImageView;
}

@property(retain, nonatomic) WAOverlayImageView *wallpaperImageView; // @synthesize wallpaperImageView=_wallpaperImageView;
- (void).cxx_destruct;
- (void)resizeWallpaper;
- (void)reloadWallpaper;
- (void)updateLayoutForCurrentOrientation;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

