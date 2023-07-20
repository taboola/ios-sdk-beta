//
//  TBLTemplateJs.h
//  TaboolaSDK
//
//  Created by Roman Slyepko on 23.12.2021.
//  Copyright © 2021 Taboola. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TBLTemplateJs : NSObject

/// Request specific campaigns.
@property (nonatomic, strong) NSArray<NSNumber*>* campaings;
/// Function adds specific geo to URL request
///
/// For example: @"c-US_r-CA"
@property (nonatomic, strong) NSString* requestGeo;
/// Disable TRC cache
///
/// Default: false/NO
@property (nonatomic, assign) BOOL disableTrcCache;

/// Creates a new query item with the specified name and value
/// @param key The name of the query item.
/// @param value The value for the query item. Pass `nil` to remove the existing key-value pair
- (void)setQueryItemAtKey:(NSString*)key value:(nullable NSString*)value;


/// Force a random video campaign and set its format(MP4 / VPAID_JS).
/// @param videoCampaign Video campaign format (pass @"1" for mp4, @"3" for VPAID JS)
- (void)setVideoCampaignFormat:(nullable NSString*)videoCampaign;

- (void)setSpecificTRCServer:(NSString*)trcServerName;

@end

NS_ASSUME_NONNULL_END
