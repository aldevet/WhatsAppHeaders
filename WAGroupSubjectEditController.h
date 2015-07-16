//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WATableViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, UILabel, UITableViewCell, UITextField, UIView;

@interface WAGroupSubjectEditController : WATableViewController <UITextFieldDelegate>
{
    UIView *_headerView;
    UITextField *_textField;
    UITableViewCell *_textFieldCell;
    UILabel *_labelCharCount;
    NSString *_preloadedSubjectText;
    id <WAGroupSubjectEditControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WAGroupSubjectEditControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *preloadedSubjectText; // @synthesize preloadedSubjectText=_preloadedSubjectText;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldValueChanged:(id)arg1;
- (void)saveAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)headerView;
- (void)updateCharCount;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

