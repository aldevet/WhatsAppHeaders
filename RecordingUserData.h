//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface RecordingUserData : NSObject
{
    NSDate *_startTime;
    void *_fileHanlde;
}

@property(nonatomic) void *fileHanlde; // @synthesize fileHanlde=_fileHanlde;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)initWithDate:(id)arg1 fileHandle:(void *)arg2;

@end

