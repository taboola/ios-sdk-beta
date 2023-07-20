//
//  Taboola.h
//  TaboolaView
//
//  Created by Tzufit Lifshitz on 3/5/19.
//  Copyright © 2019 Taboola. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TBLPublisherInfo.h"
#import "TBLEvent.h"
#import "TBLLoggerLevel.h"

NS_ASSUME_NONNULL_BEGIN

@interface Taboola : NSObject

extern NSString *const TaboolaEventTypeDefault;
extern NSString *const TaboolaEventTypeNewsroom;
extern NSString *const TaboolaEventTypeHomePageUsage;

typedef NS_OPTIONS(NSUInteger, TBLDebugMode) {
    TBLDebugModeHomePageForceSwap = 1LL << 0
};

+ (void)initWithPublisherInfo:(TBLPublisherInfo*)publisherInfo;

/// Report events using SDK event handler
/// - Parameters:
///   - eventType: type of the event. you can use TaboolaEventType constants.
///   - eventData: NSDictionary with event data
+ (void)reportTBLMobileEventOfType:(NSString *)eventType data:(NSDictionary *)eventData;

+ (void)setGlobalExtraProperties:(NSDictionary*)extraProperties;

+ (void)setLogLevel:(LogLevel)logLevel;

+ (TBLPublisherInfo *)getPublisherInfo;

+ (LogLevel)getLogLevel;

+ (NSString *)version;

/// Enable SDK debug mode
/// - Parameter mode: debug mode of TBLDebugMode enum type.
/// In order to combine multiple debug modes
+ (void)enableDebugModes:(TBLDebugMode)mode;

@end

NS_ASSUME_NONNULL_END
