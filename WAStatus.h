//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSNumber, NSString, WAPhone;

@interface WAStatus : NSManagedObject
{
}

- (id)messageToDisplayIfUserIsUncallable;
@property(retain, nonatomic) NSString *text; // @dynamic text;

// Remaining properties
@property(retain, nonatomic) NSNumber *callability; // @dynamic callability;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) NSNumber *encryptionCapable; // @dynamic encryptionCapable;
@property(retain, nonatomic) WAPhone *phone; // @dynamic phone;
@property(retain, nonatomic) NSDate *pictureDate; // @dynamic pictureDate;
@property(retain, nonatomic) NSString *pictureID; // @dynamic pictureID;
@property(retain, nonatomic) NSString *picturePath; // @dynamic picturePath;
@property(retain, nonatomic) NSString *whatsAppID; // @dynamic whatsAppID;

@end
