//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PhoneNumberFormatter : NSObject
{
}

+ (id)numberStringFromPhoneNumberString:(id)arg1;
+ (id)formatNumberForVoiceOver:(id)arg1;
+ (id)clearNumber:(id)arg1;
+ (_Bool)phoneNumber:(id)arg1 meetsMinimumLengthRequirementOfCountry:(id)arg2;
+ (id)formatLocalPhoneNumber:(id)arg1 usingCountryInfo:(id)arg2;
+ (id)formatLocalPhoneNumber:(id)arg1 usingCountryCode:(id)arg2;
+ (id)formatNumber:(id)arg1;
+ (id)countryInfoByCountryCode:(id)arg1;
+ (id)countryInfoByMCC:(id)arg1;
+ (id)countryInfoByIsoCode:(id)arg1;
+ (id)preferredCountries;
+ (id)internalLoadAllCountries;
+ (id)allCountries;
+ (void)loadAsync;
+ (id)removeDigits:(long long)arg1 atEndOfString:(id)arg2;
+ (id)formatNationalNumber:(id)arg1 withCountryInfo:(id)arg2;
+ (id)countryInfoFromNumber:(id)arg1;
+ (id)countryInfoFromRawNumber:(id)arg1;
+ (_Bool)nationalNumber:(id)arg1 containsLeadingDigits:(id)arg2;

@end

