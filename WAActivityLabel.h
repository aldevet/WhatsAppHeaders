//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIActivityIndicatorView, UILabel;

@interface WAActivityLabel : UIView
{
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *text;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 text:(id)arg2;

@end

