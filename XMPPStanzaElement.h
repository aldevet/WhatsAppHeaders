//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString;

@interface XMPPStanzaElement : NSObject
{
    NSMutableDictionary *_attributes;
    NSMutableArray *_children;
    _Bool _compressed;
    NSString *_name;
    NSData *_value;
}

@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
@property(retain, nonatomic) NSData *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool compressed; // @synthesize compressed=_compressed;
- (void).cxx_destruct;
- (id)attributes;
- (id)log;
- (id)description;
- (id)childArrayByName:(id)arg1;
- (id)childByName:(id)arg1 attribute:(id)arg2 value:(id)arg3;
- (id)childByName:(id)arg1;
- (id)childByIndex:(unsigned long long)arg1;
- (unsigned long long)childCount;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1;
- (id)allAttributes;
- (id)attributeByName:(id)arg1;
- (void)setAttributeWithName:(id)arg1 value:(id)arg2;
- (id)initWithName:(id)arg1;

@end

