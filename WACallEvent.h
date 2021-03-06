//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSString;

@interface WACallEvent : NSObject <NSCoding>
{
    _Bool _incoming;
    _Bool _isCallerKnown;
    int _outcome;
    int _medium;
    int _configuration;
    int _year;
    int _month;
    int _day;
    NSDate *_date;
    double _duration;
    NSString *_peerDisplayName;
    NSString *_peerJID;
    NSString *_whatsAppID;
    NSString *_detailText;
}

@property(nonatomic) _Bool isCallerKnown; // @synthesize isCallerKnown=_isCallerKnown;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(readonly, copy, nonatomic) NSString *whatsAppID; // @synthesize whatsAppID=_whatsAppID;
@property(copy, nonatomic) NSString *peerJID; // @synthesize peerJID=_peerJID;
@property(copy, nonatomic) NSString *peerDisplayName; // @synthesize peerDisplayName=_peerDisplayName;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) int day; // @synthesize day=_day;
@property(readonly, nonatomic) int month; // @synthesize month=_month;
@property(readonly, nonatomic) int year; // @synthesize year=_year;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) int configuration; // @synthesize configuration=_configuration;
@property(nonatomic) int medium; // @synthesize medium=_medium;
@property(nonatomic) int outcome; // @synthesize outcome=_outcome;
@property(nonatomic) _Bool incoming; // @synthesize incoming=_incoming;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *detailTextForDisplay;
@property(readonly, copy, nonatomic) NSString *callDescriptionForVoiceOver;
@property(readonly, copy, nonatomic) NSString *callDescription;
@property(readonly, copy, nonatomic) NSString *callDurationForDisplay;
@property(readonly, copy, nonatomic) NSString *callTimeForDisplay;
@property(readonly, copy, nonatomic) NSString *callDateForDisplay;
@property(readonly, copy, nonatomic) NSString *callDateForHeader;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

