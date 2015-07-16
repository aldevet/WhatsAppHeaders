//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAViewController.h"

#import "ABPersonViewControllerDelegate.h"
#import "CLLocationManagerDelegate.h"
#import "MKMapViewDelegate.h"

@class CLGeocoder, CLLocation, CLLocationManager, MKMapView, NSMutableArray, NSString, UIBarButtonItem, UIImageView, UILabel, UIToolbar, WAConversationHeaderView, WAMapTypeSegmentedControl;

@interface UserLocationViewController : WAViewController <MKMapViewDelegate, CLLocationManagerDelegate, ABPersonViewControllerDelegate>
{
    WAMapTypeSegmentedControl *_segmentedControl;
    UIBarButtonItem *_barButtonSearch;
    UIBarButtonItem *_barButtonAction;
    UIBarButtonItem *_segmentedControlBarItem;
    UIImageView *_noMediaImage;
    UILabel *_noMediaLabelTitle;
    UILabel *_noMediaLabelText;
    WAConversationHeaderView *_headerView;
    long long _lastKnownInterfaceOrientation;
    CLGeocoder *_geocoder;
    CLLocationManager *_locationManager;
    CLLocation *_currentLocation;
    NSMutableArray *_annotations;
    unsigned long long _regionType;
    long long _locationIndex;
    double _zoomLevel;
    _Bool _toolbarVisible;
    _Bool _showMyLocation;
    _Bool _singleLocation;
    _Bool _showMapTypeSelector;
    _Bool _locationAuthorized;
    MKMapView *_mapViewMain;
    UIToolbar *_toolbar;
    id <WALocationDataSource> _dataSource;
}

@property(nonatomic) __weak id <WALocationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) MKMapView *mapViewMain; // @synthesize mapViewMain=_mapViewMain;
@property(nonatomic) _Bool locationAuthorized; // @synthesize locationAuthorized=_locationAuthorized;
@property(nonatomic) _Bool showMapTypeSelector; // @synthesize showMapTypeSelector=_showMapTypeSelector;
@property(nonatomic) _Bool singleLocation; // @synthesize singleLocation=_singleLocation;
@property(nonatomic) _Bool showMyLocation; // @synthesize showMyLocation=_showMyLocation;
- (void).cxx_destruct;
- (_Bool)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)processLocationError:(id)arg1;
- (void)updateLocationDataWithCoordinate:(CDStruct_c3b9c2ee)arg1 withPlacemark:(id)arg2;
- (void)displayExpectedTravelTime:(double)arg1 forAnnotation:(id)arg2;
- (void)calculateExpectedTravelTimeForAnnotation:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)directionsToHere;
- (void)addToContacts;
- (void)searchAction:(id)arg1;
- (void)mapAction:(id)arg1;
- (void)mapTypeChanged:(id)arg1;
- (void)showPlaceInfoAction:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateAnnotationsWithCurrentLocation;
- (void)reloadAnnotations;
- (id)findFirstGroupingWithAnnotations:(id)arg1;
- (void)layoutSubviews;
- (void)setToolbarVisible:(_Bool)arg1;
- (void)setupToolbar;
- (void)updateMapRegion;
- (void)updateHeaderViewToCurrentInterfaceOrientation;
- (void)updateNavBar;
- (id)initWithLocationDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
