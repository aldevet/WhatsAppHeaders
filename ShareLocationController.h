//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAViewController.h"

#import "CLLocationManagerDelegate.h"
#import "MKMapViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIToolbarDelegate.h"
#import "WALinkLabelDelegate.h"
#import "WAMapViewDelegate.h"

@class CAAnimation, CLLocation, CLLocationManager, NSArray, NSMutableArray, NSString, NSTimer, UIBarButtonItem, UISearchBar, UITableView, UITableViewCell, UIToolbar, UIView, WAHTTPFetcher, WALinkLabel, WAMapTypeSegmentedControl, WAMapView, WAPulsingCircleView;

@interface ShareLocationController : WAViewController <MKMapViewDelegate, WAMapViewDelegate, UISearchBarDelegate, UIToolbarDelegate, WALinkLabelDelegate, UITableViewDataSource, UITableViewDelegate, UISearchDisplayDelegate, CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    NSString *_placeSearchCriteria;
    WALinkLabel *_viewAttribution;
    UITableViewCell *_cellSendMyLocation;
    WAPulsingCircleView *_pulsingCircle;
    NSTimer *_pulseAnimationUpdateTimer;
    CAAnimation *_lastKnownPulseAnimation;
    NSArray *_places;
    NSMutableArray *_searchHistory;
    CLLocation *_searchLocation;
    CLLocation *_lastUpdatedLocation;
    double _searchRadius;
    WAHTTPFetcher *_fetcher;
    _Bool _displayShadow;
    long long _lastKnownOrientation;
    _Bool _moreResultsAvailable;
    NSString *_nextResultsPageURLString;
    long long _loadingMoreRowIndex;
    UITableViewCell *_cellLoadingMore;
    long long _expandCollapseRowIndex;
    long long _searchingRowIndex;
    _Bool _zoomToPlacesWhenMapExpands;
    _Bool _locationUnavailableAlertShown;
    _Bool _locationServicesDisabledAlertShown;
    _Bool _fullHeightLayout;
    _Bool _showCollapseButton;
    _Bool _placeListExpanded;
    id <ShareLocationControllerDelegate> _delegate;
    UISearchBar *_searchBar;
    UIView *_viewMapContainer;
    WAMapView *_mapView;
    UIView *_horizontalMapDivider;
    UIView *_verticalMapDivider;
    UITableView *_tableViewPlaces;
    UIToolbar *_toolbarMapType;
    WAMapTypeSegmentedControl *_scMapType;
    UIBarButtonItem *_barButtonCancel;
    UIBarButtonItem *_barButtonRefresh;
    NSString *_accuracyStr;
}

@property(nonatomic) _Bool placeListExpanded; // @synthesize placeListExpanded=_placeListExpanded;
@property(nonatomic) _Bool showCollapseButton; // @synthesize showCollapseButton=_showCollapseButton;
@property(nonatomic) _Bool fullHeightLayout; // @synthesize fullHeightLayout=_fullHeightLayout;
@property(copy, nonatomic) NSString *accuracyStr; // @synthesize accuracyStr=_accuracyStr;
@property(retain, nonatomic) UIBarButtonItem *barButtonRefresh; // @synthesize barButtonRefresh=_barButtonRefresh;
@property(retain, nonatomic) UIBarButtonItem *barButtonCancel; // @synthesize barButtonCancel=_barButtonCancel;
@property(retain, nonatomic) WAMapTypeSegmentedControl *scMapType; // @synthesize scMapType=_scMapType;
@property(retain, nonatomic) UIToolbar *toolbarMapType; // @synthesize toolbarMapType=_toolbarMapType;
@property(retain, nonatomic) UITableView *tableViewPlaces; // @synthesize tableViewPlaces=_tableViewPlaces;
@property(retain, nonatomic) UIView *verticalMapDivider; // @synthesize verticalMapDivider=_verticalMapDivider;
@property(retain, nonatomic) UIView *horizontalMapDivider; // @synthesize horizontalMapDivider=_horizontalMapDivider;
@property(retain, nonatomic) WAMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) UIView *viewMapContainer; // @synthesize viewMapContainer=_viewMapContainer;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <ShareLocationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)mapView:(id)arg1 didSelectLocation:(id)arg2;
- (void)mapView:(id)arg1 didSelectPlacemark:(id)arg2 location:(id)arg3;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (long long)positionForBar:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)wa_applicationWillEnterForeground;
- (void)wa_fontSizeDidChange;
- (void)wa_tintColorDidChange;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)cancelController;
- (void)finishControllerWithWAPlace:(id)arg1;
- (void)showDetailsForWAPlace:(id)arg1;
- (void)expandOrCollapsePlaceList;
- (void)refreshAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)mapTypeChangedAction:(id)arg1;
- (id)fullPathToSearchHistoryFile;
- (void)addSearchHistoryItem:(id)arg1;
- (void)setAttribution:(id)arg1;
- (void)startLocationUpdatesIfNecessary;
- (void)checkStateOfLocationServices;
- (void)processLocationError:(id)arg1;
- (void)processUpdatedLocation:(id)arg1;
- (void)searchUsingBestKnownLocation;
- (void)searchWithCriteria:(id)arg1;
- (void)searchForPlaces;
- (_Bool)searchCache:(id)arg1;
- (void)processFoursquarePlaceSearchData:(id)arg1 error:(id)arg2;
- (void)searchWithFoursquare;
- (void)processGooglePlaceSearchData:(id)arg1 error:(id)arg2;
- (void)searchWithGoogle;
- (void)sendCurrentLocation;
- (void)stopPlaceSearch;
- (void)useResults:(id)arg1 add:(_Bool)arg2 cache:(_Bool)arg3 moreAvailable:(_Bool)arg4;
- (void)updatePulseAnimation:(id)arg1;
- (void)updateLayoutForCurrentOrientation;
- (void)dealloc;
- (id)initWithShareDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
