//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WABubbleView.h"

@class NSArray, TextBlock;

@interface WATextBubbleView : WABubbleView
{
    TextBlock *_selectedTextBlock;
    _Bool _actionSheetShown;
    NSArray *_messages;
}

+ (struct CGSize)sizeForMessages:(id)arg1 maxWidth:(double)arg2 timestampString:(id)arg3 messageStatus:(unsigned long long)arg4 fromName:(id)arg5 pushName:(id)arg6 showListIcon:(_Bool)arg7 isIncoming:(_Bool)arg8;
+ (struct CGSize)sizeForName:(id)arg1 pushName:(id)arg2 maxWidth:(double)arg3;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)openUrl;
- (void)showActionSheet;
- (void)highlightUrl:(_Bool)arg1;
- (id)initWithIncomingState:(_Bool)arg1 delegate:(id)arg2;

@end

