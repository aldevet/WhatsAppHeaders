//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

@class WATableRow;

@interface WAAllowedNetworkInterfacesPicker : WAStaticTableViewController
{
    WATableRow *_neverRow;
    WATableRow *_wifiRow;
    WATableRow *_cellularRow;
    unsigned long long _mediaType;
}

- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (void)updateCheckMarks;
- (void)selectInterface:(long long)arg1;
- (void)setupTableView;
- (void)viewDidLoad;
- (id)initForMediaType:(unsigned long long)arg1 title:(id)arg2;

@end
