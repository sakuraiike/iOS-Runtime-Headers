/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAddContentToView : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *status;
@property (nonatomic, copy) NSString *targetViewId;

+ (id)addContentToView;
+ (id)addContentToViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setStatus:(id)arg1;
- (void)setTargetViewId:(id)arg1;
- (id)status;
- (id)targetViewId;

@end
