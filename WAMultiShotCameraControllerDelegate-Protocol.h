//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, WAMultiShotCameraController;

@protocol WAMultiShotCameraControllerDelegate <NSObject>
- (void)multiShotCameraController:(WAMultiShotCameraController *)arg1 didSelectVideoAtURL:(NSURL *)arg2 referenceURL:(NSURL *)arg3 caption:(NSString *)arg4;
- (void)multiShotCameraControllerDidCancel:(WAMultiShotCameraController *)arg1;
- (void)multiShotCameraController:(WAMultiShotCameraController *)arg1 didCaptureItems:(NSArray *)arg2;
@end

