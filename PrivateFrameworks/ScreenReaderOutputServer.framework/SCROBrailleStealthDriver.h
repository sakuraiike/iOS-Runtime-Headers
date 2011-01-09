/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSString;



@interface SCROBrailleStealthDriver : NSObject <SCROBrailleDriverProtocol>
{
    BOOL _isDriverLoaded;
    NSString *_modelIdentifier;
    NSInteger _mainSize;
    NSInteger _statusSize;
}


- (NSUInteger)interfaceVersion;
- (NSInteger)loadDriverWithIOElement:(id)arg1;
- (BOOL)unloadDriver;
- (BOOL)isDriverLoaded;
- (BOOL)isSleeping;
- (BOOL)supportsBlinkingCursor;
- (BOOL)isInputEnabled;
- (BOOL)postsKeyboardEvents;
- (id)getInputEvents;
- (BOOL)setMainCells:(const char *)arg1 length:(NSInteger)arg2;
- (BOOL)setStatusCells:(const char *)arg1 length:(NSInteger)arg2;
- (NSInteger)mainSize;
- (NSInteger)statusSize;
- (id)modelIdentifier;
- (id)init;
- (void)dealloc;

@end