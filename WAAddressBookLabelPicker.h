//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WATableViewController.h"

#import "UIScrollViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSString, UITableViewCell, UITextField, WAContactProperty;

@interface WAAddressBookLabelPicker : WATableViewController <UITextFieldDelegate, UIScrollViewDelegate>
{
    NSArray *_predefinedLabels;
    UITableViewCell *_textFieldCell;
    UITextField *_textField;
    WAContactProperty *_contactProperty;
    id <WAAddressBookLabelPickerDelegate> _delegate;
}

+ (id)pickerWithDelegate:(id)arg1;
@property(nonatomic) __weak id <WAAddressBookLabelPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAContactProperty *contactProperty; // @synthesize contactProperty=_contactProperty;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)doneAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
