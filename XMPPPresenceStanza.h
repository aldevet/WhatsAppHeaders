//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPStanza.h"

@class NSString;

@interface XMPPPresenceStanza : XMPPStanza
{
}

+ (unsigned long long)typeForString:(id)arg1;
+ (id)stringForType:(unsigned long long)arg1;
+ (id)stringsForTypes;
- (id)log;
@property(retain, nonatomic) NSString *nickname;
@property(nonatomic) unsigned long long type;
- (id)initWithFromJID:(id)arg1 toJID:(id)arg2 type:(unsigned long long)arg3;

@end

