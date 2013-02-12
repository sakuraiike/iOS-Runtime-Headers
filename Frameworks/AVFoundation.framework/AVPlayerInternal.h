/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayerItem, AVPropertyStorage, AVWeakReference, CALayer, NSArray, NSError, NSMutableDictionary, NSMutableSet;

@interface AVPlayerInternal : NSObject {
    CALayer *caLayer;
    AVPlayerItem *currentItem;
    BOOL didSetInitialVideoCompositor;
    NSArray *displaysUsedForPlayback;
    NSError *error;
    struct OpaqueFigPlayer { } *figPlayer;
    NSInteger figPlayerType;
    NSMutableSet *items;
    AVPlayerItem *lastItem;
    BOOL logPerformanceData;
    BOOL needsToCreateFigPlayer;
    NSMutableDictionary *pendingFigPlayerProperties;
    AVPropertyStorage *propertyStorage;
    struct dispatch_queue_s { } *stateDispatchQueue;
    NSInteger status;
    BOOL waitsUntilItemsAreReadyForInspectionBeforeEnqueuingIntoFigPlayer;
    AVWeakReference *weakReference;
}

@end