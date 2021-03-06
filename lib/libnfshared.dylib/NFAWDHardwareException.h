/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDHardwareException : NSObject <NFAWDEventProtocol> {
    AWDNFCHardwareExceptionEvent * _metric;
    unsigned int  _type;
}

@property (nonatomic, retain) NSString *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) AWDNFCHardwareExceptionEvent *metric;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int type;

- (id)data;
- (void)dealloc;
- (id)getMetric;
- (unsigned long)getMetricId;
- (id)init;
- (id)metric;
- (void)setData:(id)arg1;
- (void)setMetric:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (void)updateExceptionUUID:(id)arg1;

@end
