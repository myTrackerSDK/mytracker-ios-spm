//
//  MROffer.h
//  MyTrackerSDK
//
//  Created by Alexander Zakatnov on 27.04.2021.
//  Copyright © 2021 Mail.Ru Group. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyTrackerSDK/MRFinal.h>

NS_ASSUME_NONNULL_BEGIN

@interface MROffer : NSObject

@property (nonatomic, readonly) NSString *placementId;

@property (nonatomic, readonly) NSString *itemId;

@property (nonatomic, readonly) double price;

@property (nonatomic, readonly) double discountPrice;

@property (nonatomic, readonly) int value;

@property (nonatomic, readonly) int discountValue;

@property (nonatomic, readonly) int testId;

@property (nonatomic, readonly) int splitId;

@end

NS_ASSUME_NONNULL_END
