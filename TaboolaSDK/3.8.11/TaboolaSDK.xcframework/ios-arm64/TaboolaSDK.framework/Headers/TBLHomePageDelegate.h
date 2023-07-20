//
//  TBLHomePageDelegate.h
//  TaboolaSDK
//
//  Created by Karen Shaham Palman on 10/04/2022.
//

#import "TBLNativePage.h"
/*!
 This protocol should be implemented by the host app. TaboolaView sends various lifecycle events to the delegate, to allow more flexibility for the host app.
 */
@protocol TBLHomePageDelegate <NSObject>

@optional

/*!
@discussion Triggered when HomePage is being initialized

@param status Indicates the activation status of HomePage component
*/
- (void)homePageStatusDidChange:(BOOL)status;

/*!
@discussion Triggered while the swapped items are being rendered

@param error Description of the error
@param sectionName The current section
*/
- (void)homePageDidFail:(NSError *)error sectionName:(NSString *)sectionName;

@required
/*!
@discussion When implemented, it allows the hosting app to decide what to do when intercepting clicks.

@param sectionName The current section
@param itemId The placement's unique id
@param clickUrl A string representation of URL click
@param isOrganic Determines whether the article is organic or sponsored
@param customData Extra info

@return YES if the view should begin loading content; otherwise, NO.
*/
- (BOOL)homePageItemDidClick:(NSString *)sectionName itemId:(NSString *)itemId clickUrl:(NSString *)clickUrl isOrganic:(BOOL)isOrganic customData:(NSString *)customData;

@end
