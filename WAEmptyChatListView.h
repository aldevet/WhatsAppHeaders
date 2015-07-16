//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UILabel, UITableView, UITableViewCell, UITextView, UIWebView;

@interface WAEmptyChatListView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    UITableViewCell *_tellAFriendCell;
    UIView *_headerView;
    UITextView *_textView;
    UIWebView *_webView;
    UILabel *_bottomLabel;
    id <WAEmptyChatListViewDelegate> _emptyViewDelegate;
}

@property(nonatomic) __weak id <WAEmptyChatListViewDelegate> emptyViewDelegate; // @synthesize emptyViewDelegate=_emptyViewDelegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)fontSizeDidChange:(id)arg1;
- (void)tintColorDidChange;
- (id)topHelperHTMLStringWithFont:(id)arg1;
- (void)configureTextViewWithFont:(id)arg1 text:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
