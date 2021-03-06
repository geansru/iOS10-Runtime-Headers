/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDLocationDataCollector : NSObject <CLLocationManagerDelegate> {
    unsigned long long  _activityType;
    <HDHealthDaemon> * _daemon;
    <HDLocationEventDelegate> * _delegate;
    CMElevation * _elevation;
    unsigned long long  _elevationGain;
    CLInUseAssertion * _inUseAssertion;
    double  _lastPausedTime;
    int  _lastStatus;
    CLLocationManager * _locationManager;
    NSObject<OS_dispatch_queue> * _queue;
    HKLocationSeriesSample * _seriesSample;
    HDServer * _server;
    NSUUID * _workoutUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDLocationEventDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDServer *server;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createLocationSeriesSampleAndStartLocation;
- (void)_freezeCurrentLocationSeriesSample;
- (void)_handleElevationData:(id)arg1 error:(id)arg2;
- (void)_pauseLocationUpdates;
- (void)_queue_resumeWorkout;
- (void)_queue_start;
- (void)_startLocationUpdates;
- (void)_stopGPSUpdates;
- (id)delegate;
- (void)endWorkout;
- (id)initWithDaemon:(id)arg1 server:(id)arg2 activityType:(unsigned long long)arg3 workoutUUID:(id)arg4;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)pauseWorkout;
- (void)resumeWorkout;
- (id)server;
- (void)setDelegate:(id)arg1;
- (void)setServer:(id)arg1;
- (void)startWorkout;

@end
