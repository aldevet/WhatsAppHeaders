//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ModuleInfo : NSObject
{
    unsigned int _base;
    NSString *_name;
    NSString *_arch;
}

+ (id)loadedModules;
@property(nonatomic) unsigned int base; // @synthesize base=_base;
@property(retain, nonatomic) NSString *arch; // @synthesize arch=_arch;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

