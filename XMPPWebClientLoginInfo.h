//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XMPPWebClientLoginInfo : NSObject
{
    _Bool _temporary;
    NSString *_operatingSystem;
    NSString *_browser;
}

@property(nonatomic, getter=isTemporary) _Bool temporary; // @synthesize temporary=_temporary;
@property(copy, nonatomic) NSString *browser; // @synthesize browser=_browser;
@property(copy, nonatomic) NSString *operatingSystem; // @synthesize operatingSystem=_operatingSystem;
- (void).cxx_destruct;

@end
