//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WAMediaDataPresentationController;

@protocol WAMediaDataPresentationControllerDelegate <NSObject>
- (void)mediaDataPresentationControllerDidLayoutView:(WAMediaDataPresentationController *)arg1;
- (void)mediaDataPresentationController:(WAMediaDataPresentationController *)arg1 didLongPressMediaAtIndex:(unsigned long long)arg2;
- (void)mediaDataPresentationController:(WAMediaDataPresentationController *)arg1 didTapMediaAtIndex:(unsigned long long)arg2;
- (void)mediaDataPresentationControllerContentsDidFinishLoadingMedia:(WAMediaDataPresentationController *)arg1;
- (void)mediaDataPresentationController:(WAMediaDataPresentationController *)arg1 contentsDidChangeWithAnimation:(_Bool)arg2;
@end
