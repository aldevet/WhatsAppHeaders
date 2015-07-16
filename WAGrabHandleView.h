//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface WAGrabHandleView : UIView
{
    double _radius;
    UIColor *_fillColor;
}

+ (Class)layerClass;
+ (double)preferredHeight;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (void).cxx_destruct;
- (id)bezierPathForCurrentState;
- (double)angleForState:(double)arg1;
@property(nonatomic) double state;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
