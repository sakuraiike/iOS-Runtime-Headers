/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMBindingControllerUpdateRecord : NSObject {
    BOOL  _cancelled;
    id /* block */  _preUpdate;
    id /* block */  _update;
}

@property (getter=isCancelled, nonatomic) BOOL cancelled;
@property (nonatomic, copy) id /* block */ preUpdate;
@property (nonatomic, copy) id /* block */ update;

- (void).cxx_destruct;
- (BOOL)isCancelled;
- (id /* block */)preUpdate;
- (void)setCancelled:(BOOL)arg1;
- (void)setPreUpdate:(id /* block */)arg1;
- (void)setUpdate:(id /* block */)arg1;
- (id /* block */)update;

@end
