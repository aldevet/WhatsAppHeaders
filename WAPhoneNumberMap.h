//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface WAPhoneNumberMap : NSObject
{
    NSString *_path;
    NSDictionary *_prefixMap;
    unsigned long long _maxPrefixLength;
    unsigned long long _minPrefixLength;
    NSString *_countryCode;
    NSString *_locale;
}

@property(readonly, copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)loadIfNeeded;
- (id)locationForPhoneNumber:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

