//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WATableViewController.h"

@class NSMutableArray;

@interface GroupViewController : WATableViewController
{
    NSMutableArray *_groupList;
    _Bool _showCancelButton;
    id <GroupViewControllerDelegate> _delegate;
}

@property(nonatomic) _Bool showCancelButton; // @synthesize showCancelButton=_showCancelButton;
@property(nonatomic) __weak id <GroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)viewDidLoad;
- (void)cancelAction:(id)arg1;
- (void)dealloc;
- (id)init;

@end
