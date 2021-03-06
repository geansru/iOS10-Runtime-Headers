/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLNSNotificationOperatorComposition : NSObject {
    NSArray * _notificationNames;
    NSMutableArray * _notificationObservers;
    PLOperator * _operator;
    id /* block */  _operatorBlock;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) NSString *notificationName;
@property (retain) NSArray *notificationNames;
@property (retain) NSMutableArray *notificationObservers;
@property PLOperator *operator;
@property (nonatomic, copy) id /* block */ operatorBlock;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOperator:(id)arg1 forNotification:(id)arg2 withBlock:(id /* block */)arg3;
- (id)initWithOperator:(id)arg1 forNotifications:(id)arg2 withBlock:(id /* block */)arg3;
- (id)initWithWorkQueue:(id)arg1 forNotification:(id)arg2 withBlock:(id /* block */)arg3;
- (id)initWithWorkQueue:(id)arg1 forNotifications:(id)arg2 withBlock:(id /* block */)arg3;
- (void)listenForNotifications:(bool)arg1;
- (id)notificationName;
- (id)notificationNames;
- (id)notificationObservers;
- (id)operator;
- (id /* block */)operatorBlock;
- (void)setNotificationNames:(id)arg1;
- (void)setNotificationObservers:(id)arg1;
- (void)setOperator:(id)arg1;
- (void)setOperatorBlock:(id /* block */)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
