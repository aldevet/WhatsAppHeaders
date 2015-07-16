//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSURLRequest;

@interface WAHTTPFetcher : NSObject
{
    _Bool _validateServerCertificate;
    _Bool _overrideUserAgent;
    _Bool _shouldFetchInBackground;
    NSURLRequest *_request;
    NSData *_postData;
    NSArray *_runLoopModes;
    CDUnknownBlockType _completionHandler;
}

+ (id)httpErrorForStatusCode:(long long)arg1;
+ (id)fetcherWithURLString:(id)arg1;
+ (id)fetcherWithURL:(id)arg1;
+ (id)fetcherWithRequest:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSArray *runLoopModes; // @synthesize runLoopModes=_runLoopModes;
@property(nonatomic) _Bool shouldFetchInBackground; // @synthesize shouldFetchInBackground=_shouldFetchInBackground;
@property(nonatomic) _Bool overrideUserAgent; // @synthesize overrideUserAgent=_overrideUserAgent;
@property(nonatomic) _Bool validateServerCertificate; // @synthesize validateServerCertificate=_validateServerCertificate;
@property(retain) NSData *postData; // @synthesize postData=_postData;
@property(copy, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)stopFetching;
- (void)beginFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)description;
- (id)initWithRequest:(id)arg1;
- (id)init;

@end

