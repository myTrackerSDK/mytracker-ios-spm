//
//  MRAdFormat.h
//  myTrackerSDK 3.0.1
//

#import <Foundation/Foundation.h>
#import <MyTrackerSDK/MRFinal.h>

NS_ASSUME_NONNULL_BEGIN
/**
 @discussion Class with values for advertising formats.
 */
MR_FINAL
@interface MRAdFormat: NSObject

@property (class, readonly) NSString *banner;

@property (class, readonly) NSString *interstitial;

@property (class, readonly) NSString *native;

@property (class, readonly) NSString *rewarded;

@end

NS_ASSUME_NONNULL_END
