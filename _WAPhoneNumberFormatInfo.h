//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface _WAPhoneNumberFormatInfo : NSObject
{
    NSString *_pattern;
    NSString *_format;
    NSArray *_leadingDigitsPatterns;
}

@property(retain, nonatomic) NSArray *leadingDigitsPatterns; // @synthesize leadingDigitsPatterns=_leadingDigitsPatterns;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
- (void).cxx_destruct;
- (id)description;

@end

