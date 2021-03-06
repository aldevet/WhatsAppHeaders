//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WABubbleView.h"

@class UILabel;

@interface WALargeEmojiBubbleView : WABubbleView
{
    UILabel *_emojiLabel;
}

+ (struct CGSize)sizeForMaxWidth:(double)arg1 timestampString:(id)arg2 messageStatus:(unsigned long long)arg3 fromName:(id)arg4 pushName:(id)arg5 showListIcon:(_Bool)arg6 isIncoming:(_Bool)arg7;
+ (double)heightForName:(id)arg1;
@property(readonly, nonatomic) UILabel *emojiLabel; // @synthesize emojiLabel=_emojiLabel;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)animate;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithIncomingState:(_Bool)arg1 delegate:(id)arg2;

@end

