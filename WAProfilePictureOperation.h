//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSString;

@interface WAProfilePictureOperation : NSOperation
{
    _Bool _isExecuting;
    _Bool _isFinished;
    NSString *_jid;
}

+ (id)operationForJID:(id)arg1;
@property(copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (void)finish;
- (void)start;

@end

