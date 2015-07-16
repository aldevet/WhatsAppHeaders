//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIImage, WAChatComposer, WAContactInfo;

@protocol WAChatComposerDelegate <NSObject>
- (void)chatComposerDidCancel:(WAChatComposer *)arg1;
- (void)chatComposer:(WAChatComposer *)arg1 didFinishWithContacts:(NSArray *)arg2 subject:(NSString *)arg3 picture:(UIImage *)arg4;
- (void)chatComposer:(WAChatComposer *)arg1 didFinishWithContactInfo:(WAContactInfo *)arg2;

@optional
- (void)chatComposerDidAskToInviteFriends:(WAChatComposer *)arg1;
@end

