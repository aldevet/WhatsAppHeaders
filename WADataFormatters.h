//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WADataFormatters : NSObject
{
}

+ (id)backupSizeStringFromLongLong:(long long)arg1;
+ (id)sizeStringFromLongLong:(long long)arg1;
+ (id)localizedStringWithFormat:(id)arg1 number:(id)arg2;
+ (id)dayOfTheWeekFromDate:(id)arg1;
+ (id)messageTimestampStringFromDate:(id)arg1;
+ (id)messageDateStringFromDate:(id)arg1;
+ (id)dateTimeStringFromDate:(id)arg1;
+ (id)chatTimestampFromDate:(id)arg1;
+ (id)lastActiveStringFromDate:(id)arg1;
+ (id)lastSeenStringFromDate:(id)arg1;
+ (id)fullWeekdayFormatter;
+ (id)dateFormatterMediumStyleNoYear;
+ (id)sharedCalendar;
+ (id)shortWeekdayFormatter;
+ (id)messageTimestampFormatter;
+ (id)dateTimeFormatterLongStyleNoYear;
+ (id)dateTimeFormatterLongStyle;
+ (id)dateTimeFormatter;
+ (id)timeFormatter;
+ (id)dateFormatterMediumStyle;
+ (id)dateFormatterShortStyle;
+ (id)numberFormatter;
+ (void)currentLocaleDidChange:(id)arg1;
+ (void)initialize;

@end

