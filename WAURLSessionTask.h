//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSHTTPURLResponse, NSString, NSURLRequest, WAURLTaskData;

@interface WAURLSessionTask : NSObject
{
    NSError *_error;
    id <WAURLSessionDownloadTaskHandler> _task;
}

@property(retain, nonatomic) id <WAURLSessionDownloadTaskHandler> task; // @synthesize task=_task;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)reportStatsWitResult:(int)arg1;
- (_Bool)prepareForRetryWithError:(id)arg1;
@property(readonly, copy, nonatomic) NSString *shortIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) WAURLTaskData *taskData;
@property(readonly, copy, nonatomic) NSString *fileType;
@property(readonly, nonatomic) long long countOfBytesReceived;
@property(readonly, nonatomic) NSHTTPURLResponse *response;
@property(readonly, nonatomic) NSURLRequest *currentRequest;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) float progress;
- (void)suspend;
- (void)resume;

@end

