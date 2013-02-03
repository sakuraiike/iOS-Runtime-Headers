/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>;

@interface MPMediaDownloadObserver : NSObject {
    BOOL _hasPendingProgressHandlerExecution;
    BOOL _invalidated;
    long long _pid;
    id _progressHandler;
    NSObject<OS_dispatch_queue> *_queue;
    int _retainCount;
}

@property(readonly) BOOL canCancel;
@property(getter=isCurrentlyPlayable,readonly) BOOL currentlyPlayable;
@property(readonly) double downloadProgress;
@property(readonly) long long persistentID;
@property(copy) id progressHandler;
@property(getter=isRestoreDownload,readonly) BOOL restoreDownload;

+ (id)newObserverForDownloadIdentifier:(id)arg1 downloadStatus:(int)arg2 downloadPersistentID:(long long)arg3;
+ (id)newObserverForDownloadIdentifier:(id)arg1 downloadStatus:(int)arg2 itemPersistentID:(long long)arg3;
+ (id)newObserverForMediaItem:(id)arg1;
+ (id)sharedITunesStoreDownloadManager;

- (BOOL)_isDeallocating;
- (void)_onQueue_invalidate;
- (void)_onQueue_setShouldFireProgressHandler;
- (BOOL)_tryRetain;
- (BOOL)canCancel;
- (void)cancelDownload;
- (void)dealloc;
- (double)downloadProgress;
- (id)init;
- (void)invalidate;
- (BOOL)isCurrentlyPlayable;
- (BOOL)isRestoreDownload;
- (long long)persistentID;
- (id)progressHandler;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)setProgressHandler:(id)arg1;

@end