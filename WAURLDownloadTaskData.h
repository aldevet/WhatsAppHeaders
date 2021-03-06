//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAURLTaskData.h"

@class NSData, NSURL;

@interface WAURLDownloadTaskData : WAURLTaskData
{
    NSURL *_fileURL;
    NSData *_resumeData;
}

@property(retain, nonatomic) NSData *resumeData; // @synthesize resumeData=_resumeData;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (void)transformDownloadedFileAtURLIfNeeded:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validateDownloadedFileAtURL:(id)arg1 forTask:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

