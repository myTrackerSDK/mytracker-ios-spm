//
//  MRAdFormat.h
//  myTrackerSDK
//

#import <Foundation/Foundation.h>
#import <MyTrackerSDK/MRFinal.h>

NS_ASSUME_NONNULL_BEGIN
/**
 @discussion Class with values for advertising formats.
 */
MR_FINAL
@interface MRAdFormat: NSObject

@property (class, readonly) NSString *banner NS_SWIFT_NAME(banner);

@property (class, readonly) NSString *interstitial NS_SWIFT_NAME(interstitial);

@property (class, readonly) NSString *native NS_SWIFT_NAME(native);

@property (class, readonly) NSString *rewarded NS_SWIFT_NAME(rewarded);

@end

NS_ASSUME_NONNULL_END
