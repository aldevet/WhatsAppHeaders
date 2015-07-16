//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIButton, UICollectionView;

@interface WAEmojiKeyboard : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <WAEmojiKeyboardDelegate> _delegate;
    UIView *_pageDotsBarView;
    UIView *_pageDotsContainerView;
    UIView *_keyboardTabBarView;
    UICollectionView *_inputCollectionView;
    UIButton *_switchKeyboardButton;
    long long _numberOfPages;
    long long _currentPageIndex;
    NSMutableArray *_pageDotsViews;
    NSArray *_tabBarButtons;
}

@property(retain, nonatomic) NSArray *tabBarButtons; // @synthesize tabBarButtons=_tabBarButtons;
@property(retain, nonatomic) NSMutableArray *pageDotsViews; // @synthesize pageDotsViews=_pageDotsViews;
@property(nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(retain, nonatomic) UIButton *switchKeyboardButton; // @synthesize switchKeyboardButton=_switchKeyboardButton;
@property(retain, nonatomic) UICollectionView *inputCollectionView; // @synthesize inputCollectionView=_inputCollectionView;
@property(retain, nonatomic) UIView *keyboardTabBarView; // @synthesize keyboardTabBarView=_keyboardTabBarView;
@property(retain, nonatomic) UIView *pageDotsContainerView; // @synthesize pageDotsContainerView=_pageDotsContainerView;
@property(retain, nonatomic) UIView *pageDotsBarView; // @synthesize pageDotsBarView=_pageDotsBarView;
@property(nonatomic) __weak id <WAEmojiKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)returnButtonPressed;
- (void)deleteButtonPressed;
- (void)spaceButtonPressed;
- (void)switchButtonPressed;
- (void)createTabBarButtons;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)updatePageDotsChangedNumberOfPages:(_Bool)arg1;
- (void)updateNumberOfPages:(long long)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
