//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, TextBlock, UIImageView, WAMessageFooterView;

@interface WAMessageTextView : UIView
{
    WAMessageFooterView *_footerView;
    NSArray *_textMessages;
    TextBlock *_selectedTextBlock;
    _Bool _showListIcon;
    UIImageView *_listIconImageView;
    UIView *_listIconSeparatorView;
    unsigned long long _configID;
    _Bool _isHandlingLongPress;
    id <WAMessageTextViewDelegate> _delegate;
}

+ (struct CGSize)preferredSizeForCellData:(id)arg1 maximumWidth:(double)arg2;
@property(nonatomic) __weak id <WAMessageTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)handleLongPress;
- (void)handleSingleTap;
- (void)unhighlightAllTextBlocks;
- (void)highlightTextBlock:(id)arg1;
- (void)configureWithCellData:(id)arg1 animated:(_Bool)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIImageView *listIconImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

