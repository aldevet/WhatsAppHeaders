//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WABackupOperation.h"

@class WAActionManager;

@interface WAFinishOperation : WABackupOperation
{
    WAActionManager *_manager;
    unsigned long long _code;
}

- (void).cxx_destruct;
- (void)run;
- (id)initWithActionManager:(id)arg1 code:(unsigned long long)arg2;

@end
