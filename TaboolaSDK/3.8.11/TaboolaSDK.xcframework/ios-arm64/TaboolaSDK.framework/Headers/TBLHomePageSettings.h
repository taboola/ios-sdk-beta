//
//  TBLHomePageSettings.h
//  TaboolaSDK
//
//  Created by Alexander Zhuchinskiy on 14.09.2022.
//  Copyright © 2022 Taboola. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TBLNativePage.h"

NS_ASSUME_NONNULL_BEGIN

@interface TBLHomePageSettings : NSObject

@property (nonatomic, assign, readonly) SourceType sourceType;
@property (nonatomic, copy, readonly) NSString *pageUrl;
@property (nonatomic, strong, readonly) NSArray<NSString *> *sectionNames;
@property (nonatomic, copy, readonly) NSString *fallbackImageName;

@end

NS_ASSUME_NONNULL_END
