//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface TextBlock : NSObject
{
    NSMutableArray *_textRects;
    id <TextBlockDelegate> _delegate;
    _Bool _highlighted;
    NSString *_text;
    NSString *_url;
    id _data;
    unsigned long long _type;
    struct _NSRange _range;
}

+ (id)applicationURLForSparrowFromMailtoURL:(id)arg1;
+ (id)applicationURLForGmailFromMailtoURL:(id)arg1;
+ (id)blockWithRange:(struct _NSRange)arg1 text:(id)arg2;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
- (void *)copyPersonRecord;
- (id)actionSheetForMailtoURL:(id)arg1;
- (id)actionSheetForWebURL:(id)arg1;
- (id)actionSheetForPhoneNumber;
- (id)actionSheetForAddress;
- (id)actionSheetWithDelegate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteAllTextRects;
- (void)addTextRect:(id)arg1;
- (id)textRects;
- (id)initWithRange:(struct _NSRange)arg1 text:(id)arg2;

@end

