//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface WAURLTaskStats : NSObject <NSSecureCoding, NSCopying>
{
    int _mediaType;
    int _result;
    double _startTime;
    double _durationBeforeSuspend;
    long long _mediaSize;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long mediaSize; // @synthesize mediaSize=_mediaSize;
@property(nonatomic) int result; // @synthesize result=_result;
@property(nonatomic) double durationBeforeSuspend; // @synthesize durationBeforeSuspend=_durationBeforeSuspend;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
- (void)reset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

