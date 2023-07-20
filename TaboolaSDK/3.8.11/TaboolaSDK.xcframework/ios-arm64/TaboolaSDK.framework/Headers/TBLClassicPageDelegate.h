//
//  TBLClassicPageDelegate.h
//  TaboolaView
//
//  Created by Karen Shaham Palman on 27/08/2019.
//  Copyright © 2019 Taboola. All rights reserved.
//
#import <UIKit/UIKit.h>

/*! @brief Enum. Determines the placement's type (Feed or Widget). */
typedef NS_ENUM(NSInteger, PlacementType) {
    PlacementTypeFeed,
    PlacementTypeWidget,
    PlacementTypeStory,
    PlacementTypeWidgetNone
};

/*!
 This protocol should be implemented by the host app. TaboolaView sends various lifecycle events to the delegate, to allow more flexibility for the host app.
 */
@protocol TBLClassicPageDelegate <NSObject>

@optional

/*!
@discussion When implemented, it allows the hosting app to decide what do do when intercepting clicks.

@param placementName The current placement (widget or feed)
@param itemId The placement's unique id
@param clickUrl A string representation of URL click
@param organic Determines whether the article is organic or sponsored

@return YES if the view should begin loading content; otherwise, NO. Default value is YES
 
*/
- (BOOL)classicUnit:(UIView*)classicUnit didClickPlacementName:(NSString *)placementName itemId:(NSString *)itemId clickUrl:(NSString *)clickUrl isOrganic:(BOOL)organic __deprecated_msg("Please Use onItemClick with customData");

/*!
@discussion When implemented, it allows the hosting app to decide what do do when intercepting clicks.

@param placementName The current placement (widget or feed)
@param itemId The placement's unique id
@param clickUrl A string representation of URL click
@param organic Determines whether the article is organic or sponsored
@param customData Includes additional data about the item clicked (I.E. isAudienceExchange)

@return YES if the view should begin loading content; otherwise, NO. Default value is YES
 
*/
- (BOOL)classicUnit:(UIView*)classicUnit didClickPlacementName:(NSString *)placementName itemId:(NSString *)itemId clickUrl:(NSString *)clickUrl isOrganic:(BOOL)organic customData:(NSDictionary *)customData;


/*!
@discussion Triggered while the unit is being rendered

@param classicUnit The unit itself
@param placementName The current placement (widget or feed)
@param height unit's current height
*/
- (void)classicUnit:(UIView *)classicUnit didLoadOrResizePlacementName:(NSString *)placementName height:(CGFloat)height placementType:(PlacementType)placementType;
/*!
 @discussion Taboola widget received an ad.
 
 @param classicUnit The widget itself
*/
- (void)adDidReceiveSuccess:(UIView *)classicUnit;
/*!
@discussion Triggered after unit is failed to render.

@param classicUnit The unit itself
@param placementName The current placement (widget or feed)
@param error The error recieved when TaboolaView is failed to render
*/
- (void)classicUnit:(UIView *)classicUnit didFailToLoadPlacementName:(NSString *)placementName errorMessage:(NSString *)error;
/*!
 @discussion Taboola has finished updating its content.
 * NOTE: This event will only be called after requesting to update the content of the widget.
 
 @param classicUnit The widget itself
*/
- (void)updateContentDidComplete:(UIView *)classicUnit;

/*!
 @discussion Triggered when the TaboolaView is scrolled to top
 
 @param classicUnit The widget itself
*/
- (void)scrollViewDidScrollToTopClassicUnit:(UIView *)classicUnit;

/*!
 @discussion Triggered when an action was clicked (e.g. clicked Save For Later)
 
 @param actionType The specific type of action sent
 @param data A dictionary of parameters that is being sent along with the action
*/
- (void)clickedOnAction:(NSNumber *)actionType data:(NSDictionary *)data;

@end
