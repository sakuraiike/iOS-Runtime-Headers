/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPropertyMutationHelper : NSObject

+ (void)applyMutations:(id)arg1 forImport:(BOOL)arg2 forStyleOwner:(id)arg3 withNonStylePropertyList:(id)arg4 toStylePropertyMap:(id)arg5 andNonStylePropertyMap:(id)arg6;
+ (id)convertToStyleSwapTuplesForStyleOwner:(id)arg1 styleSwapType:(int)arg2 nonStyleSwapType:(int)arg3 index:(unsigned int)arg4 fromMutations:(id)arg5 forImport:(BOOL)arg6 withOptionalStyleValueConversionBlock:(id /* block */)arg7;
+ (void)setValue:(id)arg1 forProperty:(int)arg2 ofStyleOwner:(id)arg3;
+ (int)specificMutationPropertyForGeneric:(int)arg1 styleOwner:(id)arg2 allowSpecificProperties:(BOOL)arg3;
+ (id)styleSwapTuplesFromMutationTuples:(id)arg1 forImport:(BOOL)arg2;

- (id)init;

@end