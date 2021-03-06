//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class NSMutableArray, NSMutableSet, NSString, UIButton;

@interface WAAutomationWindow : UIWindow
{
    UIButton *_screenshotButton;
    UIButton *_showFormButton;
    UIButton *_saveDataButton;
    NSString *_currentSeriesName;
    int _screenshotCounter;
    NSMutableArray *_allLabelInfos;
    NSMutableSet *_allSeriesNames;
    _Bool _isShowingForm;
}

- (void).cxx_destruct;
- (id)allLabelsInView:(id)arg1;
- (id)allVisibleLabels;
- (id)jsonArrayForLabel:(id)arg1;
- (void)saveLabelInfo;
- (void)snapshot;
- (void)saveData:(id)arg1;
- (void)detectTruncations;
- (void)showForm:(id)arg1;
- (id)filePathForJSONData;
- (id)filePathForScreenshot;
- (id)currentIdentifierWithPrefix:(id)arg1;
- (void)takeScreenshot:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

