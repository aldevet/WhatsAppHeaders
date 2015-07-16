//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WABackupOperation.h"

@class NSArray, NSString;

@interface WATarFileOperation : WABackupOperation
{
    unsigned long long _tarStepsComplete;
    unsigned long long _stepsToComplete;
    _Bool _succeeded;
    NSArray *_files;
    NSString *_prefix;
    NSString *_path;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (void).cxx_destruct;
- (void)run;
- (double)progress;
- (_Bool)succeeded;
- (id)initWithPath:(id)arg1 files:(id)arg2;

@end
