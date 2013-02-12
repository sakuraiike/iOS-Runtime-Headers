/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSURL, SUComposeReviewView, SURatingAlertView;

@interface SUComposeReviewViewController : SUViewController <UIAlertViewDelegate> {
    NSInteger _assetType;
    SUComposeReviewView *_composeView;
    unsigned long long _itemIdentifier;
    SURatingAlertView *_ratingAlert;
    NSURL *_url;
}

@property(retain) NSURL *url;
@property NSInteger assetType;
@property unsigned long long itemIdentifier;

- (void)_cancel;
- (void)_fetchReviewInfo;
- (void)_submit;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (NSInteger)assetType;
- (void)composeReviewViewValidityChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned long long)itemIdentifier;
- (void)loadView;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;
- (void)setAssetType:(NSInteger)arg1;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end