//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "ImageSearchControllerDelegate.h"
#import "WAPhotoMoveAndScaleViewControllerDelegate.h"

@class ImageSearchController, NSString, WAHTTPFetcher, WAPhotoMoveAndScaleViewController;

@interface WebImagePicker : UINavigationController <ImageSearchControllerDelegate, WAPhotoMoveAndScaleViewControllerDelegate>
{
    ImageSearchController *_imageSearchController;
    id <WebImagePickerDelegate> _pickerDelegate;
    WAHTTPFetcher *_httpFetcher;
    WAPhotoMoveAndScaleViewController *_moveAndScaleViewController;
}

- (void).cxx_destruct;
- (void)downloadImageAtURL:(id)arg1;
- (void)photoMoveAndScaleViewController:(id)arg1 didFinishWithImage:(id)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)imageSearchControllerDidCancel:(id)arg1;
- (void)imageSearchController:(id)arg1 didSelectImageWithURL:(id)arg2;
@property(retain, nonatomic) NSString *preloadedSearchText;
- (id)initWithPickerDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

