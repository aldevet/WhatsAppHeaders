//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WASQLiteDebugger : NSObject
{
}

+ (id)SQLResultStringFromInteger:(int)arg1;
+ (void)checkIntegrityOfDatabaseAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)processingQueue;
+ (void)runSQLiteMetaCommand:(id)arg1 output:(struct __sFILE *)arg2;
+ (void)closeSQLiteShell;
+ (void)openSQLiteShellForDatabaseAtPath:(id)arg1 readOnly:(_Bool)arg2;
+ (void)initialize;

@end

