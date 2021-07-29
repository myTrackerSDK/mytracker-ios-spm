//
//  MRAdEvent.h
//  myTrackerSDK 3.0.2
//

#import <MyTrackerSDK/MRAdNetwork.h>
#import <MyTrackerSDK/MRFinal.h>
#import <MyTrackerSDK/MRAdFormat.h>
#import <MyTrackerSDK/MRMyTrackerEvent.h>

NS_ASSUME_NONNULL_BEGIN

/**
 @discussion Class describes an advertising event
*/
MR_FINAL
@interface MRAdEvent : MRMyTrackerEvent

/**
 @discussion Stores advertising network
*/
@property (nonatomic, readonly) MRAdNetwork network;

/**
 @discussion Stores revenue
 */
@property (nonatomic, readonly) double revenue;

/**
 @discussion Stores currency code  in ISO 4217 format
 */
@property (nullable, nonatomic, readonly) NSString *currency;

/**
 @discussion Stores initial source
 */
@property (nullable, nonatomic, readonly) NSString *source;

/**
 @discussion Stores placement identifier
 */
@property (nullable, nonatomic, readonly) NSString *placementId;

/**
 @discussion Stores advertising identifier
 */
@property (nullable, nonatomic, readonly) NSString *adId;

/**
 @discussion Stores advertising format
 */
@property (nullable, nonatomic, readonly) NSString *format;

@end

NS_ASSUME_NONNULL_END
