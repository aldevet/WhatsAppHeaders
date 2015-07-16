//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_group>;

@interface WAVideoScrubberThumbnailBar : UIView
{
    struct CGSize _thumbnailSize;
    struct CGSize _thumbnailImageSize;
    struct CGRect _previousBounds;
    NSMutableArray *_visibleThumbnailViews;
    NSMutableArray *_transitionThumbnailViews;
    CDStruct_e83c9415 _expandedTimeRange;
    long long _pivotIndex;
    long long _taskID;
    CDStruct_e83c9415 _preparedTimeRange;
    NSObject<OS_dispatch_group> *_animationDispatchGroup;
    _Bool _needsRegenerateThumbnails;
    _Bool _suppressThumbnailLayout;
    NSDictionary *_lastThumbnailCache;
    _Bool _thumbnailingEnabled;
    id <WAVideoScrubberThumbnailBarDataSource> _dataSource;
    NSMutableDictionary *_thumbnailCache;
    CDStruct_1b6d18a9 _videoDuration;
}

@property(retain, nonatomic) NSMutableDictionary *thumbnailCache; // @synthesize thumbnailCache=_thumbnailCache;
@property(nonatomic, getter=isThumbnailingEnabled) _Bool thumbnailingEnabled; // @synthesize thumbnailingEnabled=_thumbnailingEnabled;
@property(readonly, nonatomic) CDStruct_1b6d18a9 videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) __weak id <WAVideoScrubberThumbnailBarDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)bestKeyForTime:(double)arg1 inThumbnailCache:(id)arg2;
- (id)bestCachedImageAtTime:(CDStruct_1b6d18a9)arg1;
- (void)addImageToCache:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)cachedImageAtTime:(CDStruct_1b6d18a9)arg1;
- (id)cacheKeyFromTime:(CDStruct_1b6d18a9)arg1;
- (void)revertTimeRangeWithAnimationDuration:(double)arg1;
- (void)expandToTimeRange:(CDStruct_e83c9415)arg1 animationDuration:(double)arg2 aroundTime:(CDStruct_1b6d18a9)arg3;
- (void)prepareThumbnailsForTimeRange:(CDStruct_e83c9415)arg1;
- (void)generateThumbnailsInViews:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 useCache:(_Bool)arg3;
- (void)populateUsingCacheThumbnailsInViews:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (void)layoutRegeneratingThumbnailsIfNeeded:(_Bool)arg1;
- (void)setNeedsRegenerateThumbnails;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithVideoDuration:(CDStruct_1b6d18a9)arg1;

@end

