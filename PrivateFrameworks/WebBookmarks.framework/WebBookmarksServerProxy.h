/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class <WebBookmarksClientDelegateProtocol>, XPCProxy<WebBookmarksServerProtocol>;

@interface WebBookmarksServerProxy : NSObject <WebBookmarksClientProtocol, XPCProxyTarget> {
    <WebBookmarksClientDelegateProtocol> *_delegate;
    XPCProxy<WebBookmarksServerProtocol> *_serverProxy;
}

@property <WebBookmarksClientDelegateProtocol> * delegate;

- (void)addReadingListItems:(id)arg1;
- (void)clearAllCloudTabDevices;
- (void)clearTabsForCurrentDevice;
- (void)dealloc;
- (id)delegate;
- (void)didFinishFetching;
- (void)didStartFetchingReadingListItem:(id)arg1;
- (void)didStopFetchingReadingListItem:(id)arg1;
- (void)didToggleCloudTabs:(BOOL)arg1 terminateAfterUpdating:(BOOL)arg2;
- (void)didTogglePrivateBrowsing:(BOOL)arg1;
- (void)didUpdateReadingListFetchingProgress:(id)arg1;
- (id)init;
- (void)invalidate;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)setDelegate:(id)arg1;
- (void)startReadingListFetcher;

@end