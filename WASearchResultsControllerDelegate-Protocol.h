//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexSet, WASearchResultsController;

@protocol WASearchResultsControllerDelegate <NSObject>
- (void)searchResultsControllerDidChangeContent:(WASearchResultsController *)arg1;
- (void)searchResultsControllerDidUpdateContent:(WASearchResultsController *)arg1;
- (void)searchResultsController:(WASearchResultsController *)arg1 didDeleteSections:(NSIndexSet *)arg2;
- (void)searchResultsController:(WASearchResultsController *)arg1 didInsertSections:(NSIndexSet *)arg2;
- (void)searchResultsController:(WASearchResultsController *)arg1 didDeleteRowsAtIndexPaths:(NSArray *)arg2;
- (void)searchResultsController:(WASearchResultsController *)arg1 didInsertRowsAtIndexPaths:(NSArray *)arg2;
- (void)searchResultsControllerWillUpdateContent:(WASearchResultsController *)arg1;
- (_Bool)searchResultsControllerShouldUpdateContent:(WASearchResultsController *)arg1;
@end

