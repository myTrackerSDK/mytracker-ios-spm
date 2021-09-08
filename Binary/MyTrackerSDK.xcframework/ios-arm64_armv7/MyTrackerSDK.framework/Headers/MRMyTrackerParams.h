//
//  MRMyTrackerParams.h
//  myTrackerSDK 3.0.3
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, MRGender)
{
	MRGenderUnspecified = -1,
	MRGenderUnknown,
	MRGenderMale,
	MRGenderFemale
};

@interface MRMyTrackerParams : NSObject

/**
 @discussion Current user's gender.
 Available values:
 MRGenderUnknown
 MRGenderMake
 MRGenderFemale
 */
@property(nonatomic) MRGender gender;

/**
 @discussion Current user's age. Optional.
 */
@property(nullable) NSNumber *age;

/**
 @discussion Current user's language. Optional.
 */
@property(copy, nullable) NSString *language;

/**
 @discussion MRGS application identifier. Optional.
 */
@property(copy, nullable) NSString *mrgsAppId;

/**
 @discussion MRGS user identifier. Optional.
 */
@property(copy, nullable) NSString *mrgsUserId;

/**
 @discussion MRGS device identifier. Optional.
 */
@property(copy, nullable) NSString *mrgsDeviceId;

/**
 @discussion ICQ identifier. Optional.
 */
@property(copy, nullable) NSString *icqId;

/**
 @discussion OK identifier. Optional.
 */
@property(copy, nullable) NSString *okId;

/**
 @discussion VK identifier. Optional.
 */
@property(copy, nullable) NSString *vkId;

/**
 @discussion VKConnect identifier. Optional.
 */
@property(copy, nullable) NSString *vkConnectId;

/**
 @discussion User's email. Optional.
 */
@property(copy, nullable) NSString *email;

/**
 @discussion User's phone number. Optional.
 */
@property(copy, nullable) NSString *phone;

/**
 @discussion User's custom identifier. Optional.
 */
@property(copy, nullable) NSString *customUserId;

/**
 @discussion NSArray of ICQ identifiers. Optional.
 */
@property(nullable) NSArray<NSString *> *icqIds;

/**
 @discussion NSArray of OK identifiers. Optional.
 */
@property(nullable) NSArray<NSString *> *okIds;

/**
 @discussion NSArray of VK identifiers. Optional.
 */
@property(nullable) NSArray<NSString *> *vkIds;

/**
 @discussion NSArray of VKConnect identifiers. Optional.
 */
@property(nullable) NSArray<NSString *> *vkConnectIds;

/**
 @discussion NSArray of emails. Optional.
 */
@property(nullable) NSArray<NSString *> *emails;

/**
 @discussion NSArray of phone numbers. Optional.
 */
@property(nullable) NSArray<NSString *> *phones;

/**
 @discussion NSArray of custom user's identifiers. Optional.
 */
@property(nullable) NSArray<NSString *> *customUserIds;

@end

NS_ASSUME_NONNULL_END
