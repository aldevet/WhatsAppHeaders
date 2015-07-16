//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@interface WACropAwareImageView : UIImageView
{
    double _fixedHeight;
    struct CGRect _normalizedCropRect;
}

+ (struct CGRect)transformNormalizedCropRect:(struct CGRect)arg1 forImageOrientation:(long long)arg2;
@property(nonatomic) double fixedHeight; // @synthesize fixedHeight=_fixedHeight;
@property(nonatomic) struct CGRect normalizedCropRect; // @synthesize normalizedCropRect=_normalizedCropRect;
- (void)recalculateImageMetrics;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

