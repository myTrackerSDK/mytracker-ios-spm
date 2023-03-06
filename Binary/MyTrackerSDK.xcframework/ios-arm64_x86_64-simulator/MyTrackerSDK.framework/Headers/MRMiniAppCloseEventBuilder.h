//
//  MRMiniAppCloseEventBuilder.h
//  MyTrackerSDK 3.0.8
//
//  Created by Alexander Zakatnov on 10.11.2020.
//  Copyright © 2020 Mail.Ru Group. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyTrackerSDK/MRMiniAppEventBuilder.h>

NS_ASSUME_NONNULL_BEGIN

/**
 @discussion Builder-class for mini-app close event
 */
@interface MRMiniAppCloseEventBuilder : MRMiniAppEventBuilder

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
