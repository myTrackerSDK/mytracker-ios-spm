//
//  MROfferRequest.h
//  MyTrackerSDK
//
//  Created by Alexander Zakatnov on 27.04.2021.
//  Copyright © 2021 Mail.Ru Group. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyTrackerSDK/MRFinal.h>

@class MROffer;
@class MROfferRequest;

typedef NS_ENUM(int, MROfferRequestReset)
{
	MROfferRequestResetUndefined = -1,
	MROfferRequestResetFalse,
	MROfferRequestResetTrue
};

NS_ASSUME_NONNULL_BEGIN

@protocol MROfferRequestOnCompleteDelegate <NSObject>

/**
 @discussion Will be called on response
 
 @param request Completed request
 @param offers Array of MROffer instances
 @param error NSError instance
 */
- (void)onComplete:(MROfferRequest *)request offers:(nullable NSArray<MROffer *> *)offers error:(nullable NSString *)error NS_SWIFT_NAME(onComplete(offers:offers:error:));

@end

MR_FINAL
@interface MROfferRequest : NSObject

@property (nonatomic, readonly, nullable) NSArray<NSString *> *placementIds;

@property (nonatomic, readonly, nullable) NSString *userId;

@property (nonatomic, readonly) MROfferRequestReset reset;

@property (nonatomic, readonly, nullable) NSString  *data;

@property (nonatomic, readonly, weak) id<MROfferRequestOnCompleteDelegate> delegate;

@property (nonatomic, readonly) NSOperationQueue *queue;

/**
 @discussion Sends a request for offers
 */
- (void)send NS_SWIFT_NAME(send());

@end

NS_ASSUME_NONNULL_END
