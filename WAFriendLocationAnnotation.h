//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAnnotation.h"

@class CLLocation, NSString;

@interface WAFriendLocationAnnotation : NSObject <MKAnnotation>
{
    NSString *_fullName;
    int lastUpdateMinutes;
    CLLocation *_friendLocation;
    NSString *_jid;
    NSString *_contactName;
    NSString *_subtitle;
}

@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(retain, nonatomic) NSString *jid; // @synthesize jid=_jid;
@property(retain, nonatomic) CLLocation *friendLocation; // @synthesize friendLocation=_friendLocation;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)updateSubtitle;
- (id)initForJid:(id)arg1 location:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

