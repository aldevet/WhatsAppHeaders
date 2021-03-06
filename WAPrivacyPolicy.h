//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WAPrivacyPolicy : NSObject
{
    unsigned long long _privacySetting[3];
    long long _pendingRequestId[3];
    _Bool _needRefetch;
}

+ (id)stringForSetting:(unsigned long long)arg1;
+ (void)resetPolicy;
+ (id)sharedPolicy;
- (void)setPrivacy:(unsigned long long)arg1 forCategory:(unsigned long long)arg2;
- (unsigned long long)settingForCategory:(unsigned long long)arg1;
- (void)loadPrivacySettingsIfNeeded;
- (void)ignoreResultsOfPendingRequests;
- (void)resetValues;
- (id)init;

@end

