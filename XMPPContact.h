//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XMPPContact : NSObject
{
    _Bool _whatsapp;
    NSString *_number;
    NSString *_jid;
}

@property(nonatomic) _Bool whatsapp; // @synthesize whatsapp=_whatsapp;
@property(copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
@property(copy, nonatomic) NSString *number; // @synthesize number=_number;
- (void).cxx_destruct;
- (id)description;

@end
