/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */



@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer 
{
    unsigned char _lastEncoded;
    NSUInteger _required;
    BOOL _forTextPart;
}

@property BOOL forTextPart;


- (BOOL)forTextPart;
- (void)setForTextPart:(BOOL)arg1;
- (NSInteger)appendData:(id)arg1;
- (void)done;

@end