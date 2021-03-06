/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoResourceGrabber.framework/NanoResourceGrabber
 */

@interface NanoResourceGrabber : NSObject {
    BOOL _connectionMayBeValid;
    NSXPCConnection *_nrgdConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property BOOL connectionMayBeValid;
@property (nonatomic, retain) NSXPCConnection *nrgdConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)firstPartyBundleIDs;
+ (BOOL)isFirstParty:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2;
- (void)_getLocalIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(id /* block */)arg3 withTimeout:(double)arg4;
- (void)_setCachedIcon:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3;
- (id)connectToService;
- (BOOL)connectionMayBeValid;
- (void)dealloc;
- (void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id*)arg3 updateBlock:(id /* block */)arg4;
- (void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id*)arg3 updateBlock:(id /* block */)arg4 timeout:(double)arg5;
- (void)getIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(id /* block */)arg3 timeout:(double)arg4;
- (void)getRemoteIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(id /* block */)arg3 timeout:(double)arg4;
- (void)getRemoteIconForBundleIDThread:(id)arg1 iconVariant:(int)arg2 block:(id /* block */)arg3 timeout:(double)arg4;
- (id)grabIconForBundleID:(id)arg1 iconVariant:(int)arg2 updateBlock:(id /* block */)arg3;
- (id)init;
- (id)nrgdConnection;
- (id)queue;
- (void)setConnectionMayBeValid:(BOOL)arg1;
- (void)setNrgdConnection:(id)arg1;
- (void)setQueue:(id)arg1;

@end
