//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

#import "WAQRCodeScannerViewControllerDelegate.h"

@class NSString;

@interface WAWebClientSettingsViewController : WAStaticTableViewController <WAQRCodeScannerViewControllerDelegate>
{
}

- (void)qrCodeScannerViewControllerDidCancel:(id)arg1;
- (void)qrCodeScannerViewController:(id)arg1 didFinishWithCode:(id)arg2;
- (_Bool)qrCodeScannerViewController:(id)arg1 shouldAcceptCode:(id)arg2;
- (void)scanQRCode;
- (void)endWebClientSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)signOut;
- (void)promptUserToSignOut;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setupTableView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)webClientDidUpdateSessionData:(id)arg1;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

