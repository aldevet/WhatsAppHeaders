//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, CLPlacemark, WAMapView;

@protocol WAMapViewDelegate <NSObject>

@optional
- (void)mapView:(WAMapView *)arg1 didSelectLocation:(CLLocation *)arg2;
- (void)mapView:(WAMapView *)arg1 didSelectPlacemark:(CLPlacemark *)arg2 location:(CLLocation *)arg3;
@end

