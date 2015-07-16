//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "GroupViewControllerDelegate.h"
#import "PeopleViewControllerDelegate.h"

@class GroupViewController, NSArray, NSMutableDictionary;

@interface PeopleMultiPickerNavigationController : UINavigationController <GroupViewControllerDelegate, PeopleViewControllerDelegate>
{
    GroupViewController *_groupController;
    NSMutableDictionary *_peopleViewControllers;
    unsigned long long _pickerMode;
    long long _selectionLimit;
    long long _tag;
    NSArray *_selectedContacts;
}

@property(retain, nonatomic) NSArray *selectedContacts; // @synthesize selectedContacts=_selectedContacts;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) long long selectionLimit; // @synthesize selectionLimit=_selectionLimit;
@property(nonatomic) unsigned long long pickerMode; // @synthesize pickerMode=_pickerMode;
- (void).cxx_destruct;
- (void)peopleViewControllerDidCancel:(id)arg1;
- (void)peopleViewController:(id)arg1 didSelectContacts:(id)arg2;
- (void)groupViewControllerDidCancel:(id)arg1;
- (void)groupViewController:(id)arg1 didSelectGroupWithID:(id)arg2;
- (void)viewDidLoad;
- (void)loadPeopleViewController:(int)arg1;
- (void)loadGroupViewController;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <PeopleMultiPickerNavigationControllerDelegate><UINavigationControllerDelegate> delegate; // @dynamic delegate;

@end

