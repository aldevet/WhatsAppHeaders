//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WABlockedContactInfo : NSObject
{
    NSString *_name;
    NSString *_phoneNumber;
    NSString *_jid;
    NSString *_label;
}

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithJID:(id)arg1;
- (id)initWithContactInfo:(id)arg1;

@end

