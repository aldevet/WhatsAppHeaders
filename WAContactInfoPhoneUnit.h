//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAContactInfoUnit.h"

@class NSManagedObjectID, NSString;

@interface WAContactInfoPhoneUnit : WAContactInfoUnit
{
    NSString *_jid;
    NSManagedObjectID *_waStatusID;
}

+ (id)contactInfoPhoneUnitForWAPhone:(id)arg1;
@property(retain, nonatomic) NSManagedObjectID *waStatusID; // @synthesize waStatusID=_waStatusID;
@property(copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (id)waStatus;
- (id)valueText;
- (id)initWithContactProperty:(id)arg1;
- (id)initWithWAPhone:(id)arg1;

@end

