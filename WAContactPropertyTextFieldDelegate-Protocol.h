//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WAContactPropertyTextField;

@protocol WAContactPropertyTextFieldDelegate <NSObject>

@optional
- (void)contactPropertyTextFieldValueChanged:(WAContactPropertyTextField *)arg1;
- (_Bool)contactPropertyTextFieldShouldReturn:(WAContactPropertyTextField *)arg1;
- (void)contactPropertyTextFieldDidEndEditing:(WAContactPropertyTextField *)arg1;
- (_Bool)contactPropertyTextFieldShouldEndEditing:(WAContactPropertyTextField *)arg1;
- (void)contactPropertyTextFieldDidBeginEditing:(WAContactPropertyTextField *)arg1;
- (_Bool)contactPropertyTextFieldShouldBeginEditing:(WAContactPropertyTextField *)arg1;
@end

