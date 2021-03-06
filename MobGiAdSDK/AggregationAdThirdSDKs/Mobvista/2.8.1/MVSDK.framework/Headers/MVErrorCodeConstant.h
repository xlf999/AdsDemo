//
//  MVErrorCodeConstant.h
//  MVSDK
//
//  Created by CharkZhang on 2017/11/7.
//  Copyright © 2017年 Mobvista. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

extern NSString * const kMVErrorDomain;

typedef NS_ENUM (NSInteger, MVErrorCode) {

    kMVErrorCodeRewardVideoFailedToLoadVideoData         = 129300061,
    kMVErrorCodeRewardVideoFailedToLoadPlayable          = 129300062,
    kMVErrorCodeRewardVideoFailedToLoadTemplateImage     = 129300063,
};

@interface MVErrorCodeConstant : NSObject

@end
NS_ASSUME_NONNULL_END
