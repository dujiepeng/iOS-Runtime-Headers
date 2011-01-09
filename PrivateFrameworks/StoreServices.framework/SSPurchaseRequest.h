/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableIndexSet, NSArray;



@interface SSPurchaseRequest : SSRequest 
{
    NSMutableIndexSet *_acknowledgedPurchases;
    NSArray *_purchases;
    BOOL _shouldValidatePurchases;
}

@property(readonly) NSArray *purchases;
@property BOOL shouldValidatePurchases;
@property <SSPurchaseRequestDelegate> *delegate;


- (id)purchases;
- (id)initWithPurchases:(id)arg1;
- (void)setShouldValidatePurchases:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;
- (void)_purchaseFailedNotification:(id)arg1;
- (void)_purchaseFinishedNotification:(id)arg1;
- (id)_purchaseForUniqueIdentifier:(id)arg1;
- (void)_sendError:(id)arg1 forPurchase:(id)arg2;
- (BOOL)shouldValidatePurchases;
- (void)handleDaemonExit;
- (void)registerForDaemonNotifications;
- (void)unregisterForDaemonNotifications;

@end