//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WAAssetsLibraryManager : NSObject
{
}

+ (id)phAssetWithURL:(id)arg1;
+ (void)showFailedToSaveMediaAlertView;
+ (void)showUnusableVideoAlertViewFromViewController:(id)arg1;
+ (void)showUnusablePhotoAlertViewFromViewController:(id)arg1;
+ (void)showNoPhotoLibraryAccessAlertViewFromViewController:(id)arg1;
+ (id)resizedImageForSending:(id)arg1;
+ (void)saveImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)saveImageInMediaInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)saveMediaAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)shouldSaveMediaAtPathAsVideo:(id)arg1;
+ (void)processNextSaveTaskInQueue:(id)arg1;
+ (void)beginProcessingSaveQueueIfNeeded;
+ (void)enqueueSavingMediaToCameraRollAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)storePathsOfEnqueuedMediaItems;
+ (void)endDeferringSavingMediaToCameraRoll;
+ (void)beginDeferringSavingMediaToCameraRoll;
+ (void)loadBestEditedImageForAssetURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)creationDateForAssetURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)loadSendableImageForAssetURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)loadFullScreenImageForAssetURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchAllAssetsGroupsForMediaTypes:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)checkPhotosPermissionWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)assetsGroupForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)assetForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)assetsFilterForMediaType:(unsigned long long)arg1;
+ (_Bool)authorizationGranted;
+ (id)sharedAssetsLibrary;
+ (void)recoverUnsavedMediaIfNeeded;
+ (void)initialize;

@end

