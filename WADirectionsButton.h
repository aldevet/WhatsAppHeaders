//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class _WADirectionsButtonContentView;

@interface WADirectionsButton : UIButton
{
    _WADirectionsButtonContentView *_contentView;
    double _expectedTravelTime;
}

+ (id)stringFromTimeInterval:(double)arg1;
+ (id)button;
@property(nonatomic) double expectedTravelTime; // @synthesize expectedTravelTime=_expectedTravelTime;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureForLegacyOS;
- (void)configureWithETA;
- (void)configure;
- (void)layoutSubviews;

@end

