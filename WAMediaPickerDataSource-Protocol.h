//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, WAMediaPickerAsset, WAMediaPickerLibraryController;

@protocol WAMediaPickerDataSource <NSObject>
- (void)clearSelection;
- (void)showMaximumSelectionCountExceededError;
- (void)toggleSelectionOfMediaPickerAsset:(WAMediaPickerAsset *)arg1;
- (_Bool)canAddMoreMediaPickerAssets;
- (_Bool)canSelectMediaPickerAsset:(WAMediaPickerAsset *)arg1;
- (NSArray *)selectedAssetIdentifiers;
- (_Bool)allowsMultipleSelection;
- (WAMediaPickerLibraryController *)libraryController;
@end

