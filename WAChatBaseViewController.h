//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAChatBackgroundViewController.h"

#import "ABNewPersonViewControllerDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "ABPersonViewControllerDelegate.h"
#import "TextBlockDelegate.h"
#import "WAInfoInputViewControllerDelegate.h"

@class NSString, UIViewController, WAPttPlayer;

@interface WAChatBaseViewController : WAChatBackgroundViewController <ABPersonViewControllerDelegate, WAInfoInputViewControllerDelegate, ABNewPersonViewControllerDelegate, TextBlockDelegate, ABPeoplePickerNavigationControllerDelegate>
{
    WAPttPlayer *_pttPlayer;
    NSString *_newContactJID;
    _Bool _editingContact;
    UIViewController *_viewControllerToPresentInViewDidAppear;
}

@property(retain, nonatomic) WAPttPlayer *pttPlayer; // @synthesize pttPlayer=_pttPlayer;
@property(retain, nonatomic) UIViewController *viewControllerToPresentInViewDidAppear; // @synthesize viewControllerToPresentInViewDidAppear=_viewControllerToPresentInViewDidAppear;
- (void).cxx_destruct;
- (void)textBlockWillAddToContacts:(id)arg1;
- (void)textBlockWillAddToExistingContact:(id)arg1;
- (void)textBlock:(id)arg1 willAddNewPerson:(void *)arg2;
- (void)textBlock:(id)arg1 willCallPhoneURL:(id)arg2;
- (void)textBlock:(id)arg1 willOpenURL:(id)arg2;
- (void)forwardMessages:(id)arg1 toContactInfo:(id)arg2;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2;
- (void)infoInputViewControllerDidCancel:(id)arg1;
- (void)infoInputViewControllerDidFinish:(id)arg1;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (id)peoplePickerNavigationController;
- (_Bool)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)showActionSheet:(id)arg1;
- (void)addTextBlock:(id)arg1 toPersonRecord:(void *)arg2 onNavigationController:(id)arg3;
- (void *)copyEditablePersonRecordFromPersonRecord:(void *)arg1;
- (void)presentUnknownContactScreenForDataInTextBlock:(id)arg1;
- (void)addInfoInTextBlockToExistingContact:(id)arg1;
- (void)createNewContactFromPersonRecord:(void *)arg1 whatsAppJID:(id)arg2 inNavigationController:(id)arg3;
- (void)handleTextBlockSelection:(id)arg1;
- (void)pausePTTPlayer;
- (_Bool)shouldAutorotate;
- (void)updateLayoutForCurrentOrientation;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
