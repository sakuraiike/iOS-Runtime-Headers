/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */



@interface AXAttributedString : NSString 
{
    struct __CFAttributedString { } *_string;
}

+ (id)axAttributedStringWithString:(id)arg1;

- (id)initWithString:(id)arg1;
- (id)initWithCFAttributedString:(struct __CFAttributedString { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (NSUInteger)length;
- (unsigned short)characterAtIndex:(NSUInteger)arg1;
- (void)replaceString:(struct __CFString { }*)arg1;
- (struct __CFAttributedString { }*)cfAttributedString;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setAttribute:(id)arg1 forKey:(id)arg2 withRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (id)attributesAtIndex:(NSInteger)arg1 effectiveRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg2;
- (BOOL)isAXAttributedString;

@end