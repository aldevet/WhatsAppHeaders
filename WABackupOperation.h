//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@interface WABackupOperation : NSOperation
{
    _Bool _requireDependencies;
}

@property(nonatomic) _Bool requireDependencies; // @synthesize requireDependencies=_requireDependencies;
- (void)addDependencies:(id)arg1;
- (_Bool)dependenciesSucceeded;
- (void)addDependency:(id)arg1;
- (void)run;
- (void)main;
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic) _Bool succeeded;
- (id)init;

@end

