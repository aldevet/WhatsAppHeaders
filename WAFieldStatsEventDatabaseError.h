//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAFieldStatsEvent.h"

@class NSString;

@interface WAFieldStatsEventDatabaseError : WAFieldStatsEvent
{
    double _database_error_code;
    NSString *_database_method;
    double _database_type;
}

@property(nonatomic) double database_type; // @synthesize database_type=_database_type;
@property(retain, nonatomic) NSString *database_method; // @synthesize database_method=_database_method;
@property(nonatomic) double database_error_code; // @synthesize database_error_code=_database_error_code;
- (void).cxx_destruct;
- (void)submit;
- (id)init;

@end

