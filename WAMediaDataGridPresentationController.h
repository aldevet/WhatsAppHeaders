//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAMediaDataPresentationController.h"

@class NSMutableArray;

@interface WAMediaDataGridPresentationController : WAMediaDataPresentationController
{
    NSMutableArray *_imageViews;
}

- (void).cxx_destruct;
- (struct CGRect)frameForIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (unsigned long long)indexAtPointInView:(struct CGPoint)arg1;
- (void)transitionFromIndex:(unsigned long long)arg1 toCurrentIndexWithAnimation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidLayoutSubviews;
- (void)didUpdateImageAtIndex:(unsigned long long)arg1 completed:(_Bool)arg2;
- (void)cellDataMessagesDidChange;
- (id)currentImageView;
- (id)initWithChatCellData:(id)arg1;

@end

