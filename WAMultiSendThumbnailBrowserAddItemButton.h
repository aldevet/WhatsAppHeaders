//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAMultiSendThumbnailBrowserItemView.h"

@class UIButton;

@interface WAMultiSendThumbnailBrowserAddItemButton : WAMultiSendThumbnailBrowserItemView
{
    UIButton *_button;
    unsigned long long _buttonType;
}

@property(nonatomic) unsigned long long buttonType; // @synthesize buttonType=_buttonType;
- (void).cxx_destruct;
- (void)updateButtonHighlight:(id)arg1;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
