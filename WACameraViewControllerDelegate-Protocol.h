//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, WACameraViewController, WAMediaPickerAsset;

@protocol WACameraViewControllerDelegate <NSObject>
- (void)cameraViewController:(WACameraViewController *)arg1 didSelectMediaPickerAsset:(WAMediaPickerAsset *)arg2 cancelSelectionHandler:(void (^)(void))arg3;
- (void)cameraViewController:(WACameraViewController *)arg1 didFinishWithMediaItems:(NSArray *)arg2;
- (void)cameraViewControllerDidCancel:(WACameraViewController *)arg1;
@end

