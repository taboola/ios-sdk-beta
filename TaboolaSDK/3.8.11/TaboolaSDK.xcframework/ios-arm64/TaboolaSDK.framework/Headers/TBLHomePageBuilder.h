//
//  TBLHomePageBuilder.h
//  TaboolaSDK
//
//  Created by Alexander Zhuchinskiy on 15.09.2022.
//  Copyright © 2022 Taboola. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TBLHomePageSettings.h"

NS_ASSUME_NONNULL_BEGIN

@interface TBLHomePageBuilder : NSObject

/// Instantiates home page builder
/// @param sourceType String describes the widget's type (e.g. SourceTypeVideo)
/// @param pageUrl String describes the website's URL
/// @param sectionNames NSArray that contains all publisher's sections names
- (instancetype)initWithSourceType:(SourceType)sourceType
                           pageUrl:(NSString * _Nonnull)pageUrl
                      sectionNames:(NSArray<NSString *> * _Nonnull)sectionNames;

/// Set fallback image name
/// @param imageName String describes image name in your main bundle to use if any error occurs during image load
- (TBLHomePageBuilder *)setSwappedThumbnailFallbackImageName:(NSString * _Nullable)imageName;

/// Returns home page settings object or `nil` if required fields are missing
- (TBLHomePageSettings * _Nullable)build;

@end

NS_ASSUME_NONNULL_END
