//
//  MRMyTrackerConfig.h
//  myTrackerSDK
//

#import <Foundation/Foundation.h>

@class MRAntiFraudConfig;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, MRLocationTrackingMode)
{
	MRLocationTrackingModeNone,
	MRLocationTrackingModeCached,
	MRLocationTrackingModeActive
};


@interface MRMyTrackerConfig : NSObject

/**
 @discussion Your tracker identifier.
 */
@property(nonatomic, readonly, copy) NSString *trackerId NS_SWIFT_NAME(trackerId);

/**
 @discussion App launch tracking. YES by default.
 */
@property(nonatomic) BOOL trackLaunch NS_SWIFT_NAME(trackLaunch);

/**
 @discussion If inApp purchase events should be tracked automatically. YES by default.
 */
@property(nonatomic) BOOL autotrackPurchase NS_SWIFT_NAME(autotrackPurchase);

/**
 @discussion If YES tracker will collect environment information like device or iOS information. YES by default.
 */
@property(nonatomic) BOOL trackEnvironment NS_SWIFT_NAME(trackEnvironment);

/**
 @discussion An interval (in seconds) during which a new launch is not tracked and a session is not interrupted while app is in background. Possible values range: 30-7200 seconds. 30 sec by default.
 */
@property(nonatomic) NSTimeInterval launchTimeout NS_SWIFT_NAME(launchTimeout);

/**
 @discussion An interval (in seconds) during which events will be accumulated locally on the device before sending to the server. Allowed values are: 1-86400 seconds (1 day). 900 sec by default.
 */
@property(nonatomic) NSTimeInterval bufferingPeriod NS_SWIFT_NAME(bufferingPeriod);

/**
 @discussion An interval (in seconds) starting from application install/update during which any new event will be send to the server immediately, without local buffering. Default value is set to 0 (immediate sending is disabled), allowed values are 0-432000 seconds (5 days).
 */
@property(nonatomic) NSTimeInterval forcingPeriod NS_SWIFT_NAME(forcingPeriod);

/**
 @discussion Managing registering app's install as a result of an ad. Default value is YES.
 */
@property(nonatomic) BOOL registerForSKAdAttribution NS_SWIFT_NAME(registerForSKAdAttribution);

/**
 @discussion Geolocation tracking. Tracking modes:
 MRLocationTrackingModeNone — location tracking is not available.
 MRLocationTrackingModeCached — system cached value is used.
 MRLocationTrackingModeActive — current location request is used (by default).
 No matter what the mode, myTracker can track user geolocation only if the app already has this permission.
 
 @discussion Geolocation tracking mode.
 */
@property(nonatomic) MRLocationTrackingMode locationTrackingMode NS_SWIFT_NAME(locationTrackingMode);

/**
 @discussion URL or host of your proxy. Only the host portion will be used. Should be valid value or will be replaced by default URL.
 */
@property(nonatomic, copy, nullable) NSString *proxyHost NS_SWIFT_NAME(proxyHost);

@property(nonatomic) MRAntiFraudConfig *antiFraudConfig;

/**
 @discussion The mode that limits the collection of advertising identifiers and location to comply with Apple's guidelines.
 */
@property(nonatomic, getter=isKidMode) BOOL kidMode NS_SWIFT_NAME(isKidMode);

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
