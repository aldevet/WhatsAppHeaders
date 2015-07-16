//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAMediaUploadOperationBase.h"

#import "NSStreamDelegate.h"
#import "NSURLConnectionDelegate.h"

@class NSData, NSInputStream, NSMutableData, NSOutputStream, NSString, NSURLConnection;

@interface WAMediaStreamUploadOperation : WAMediaUploadOperationBase <NSStreamDelegate, NSURLConnectionDelegate>
{
    NSString *_fileName;
    _Bool _isExecuting;
    _Bool _isFinished;
    NSString *_uploadURL;
    NSString *_uploadIp;
    NSString *_uploadHost;
    NSMutableData *_receiveData;
    _Bool _mediaComplete;
    int _uploadPhase;
    int _waitCount;
    NSString *_streamingHash;
    NSURLConnection *_urlConnection;
    NSData *_bodyPrefixData;
    NSData *_bodyFileData;
    NSData *_bodySuffixData;
    NSOutputStream *_producerStream;
    NSInputStream *_consumerStream;
    const char *_currentBuffer;
    unsigned long long _bufferOffset;
    unsigned long long _bufferLimit;
    unsigned long long _fileOffset;
    NSString *_mediaLocalPath;
}

@property(retain, nonatomic) NSString *mediaLocalPath; // @synthesize mediaLocalPath=_mediaLocalPath;
@property(nonatomic) unsigned long long fileOffset; // @synthesize fileOffset=_fileOffset;
@property(nonatomic) unsigned long long bufferLimit; // @synthesize bufferLimit=_bufferLimit;
@property(nonatomic) unsigned long long bufferOffset; // @synthesize bufferOffset=_bufferOffset;
@property(nonatomic) const char *currentBuffer; // @synthesize currentBuffer=_currentBuffer;
@property(retain, nonatomic) NSInputStream *consumerStream; // @synthesize consumerStream=_consumerStream;
@property(retain, nonatomic) NSOutputStream *producerStream; // @synthesize producerStream=_producerStream;
@property(retain, nonatomic) NSData *bodySuffixData; // @synthesize bodySuffixData=_bodySuffixData;
@property(retain, nonatomic) NSData *bodyFileData; // @synthesize bodyFileData=_bodyFileData;
@property(retain, nonatomic) NSData *bodyPrefixData; // @synthesize bodyPrefixData=_bodyPrefixData;
@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
@property(retain, nonatomic) NSString *streamingHash; // @synthesize streamingHash=_streamingHash;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)processNextUploadChunk;
- (void)uploadRequestFailedWithError:(id)arg1;
- (void)uploadRequestFinishedWithResult:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)uploadError;
- (_Bool)shouldProceed;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)finish;
- (void)startHTTPUploadToIp:(id)arg1;
- (void)start;
- (void)dealloc;
- (void)assignMessage:(id)arg1 delegate:(id)arg2;
- (id)initWithMediaLocalPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
