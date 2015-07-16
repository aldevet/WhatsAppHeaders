//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIActivityIndicatorView, UIImageView, UILabel;

@interface WAOverlayView : UIView
{
    UILabel *_textLabel;
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_background;
    double _startTime;
}

+ (id)showOverlayInViewController:(id)arg1;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)hideWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadBackground;
@property(retain, nonatomic) NSString *text;
- (id)initWithFrame:(struct CGRect)arg1;

@end

