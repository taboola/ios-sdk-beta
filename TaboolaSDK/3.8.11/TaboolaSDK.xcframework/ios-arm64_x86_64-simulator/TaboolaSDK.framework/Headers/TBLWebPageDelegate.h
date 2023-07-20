//
//  TaboolaWebDelegate.h
//  TaboolaView
//
//  Created by Tzufit Lifshitz on 8/19/19.
//  Copyright © 2019 Taboola. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TBLClassicUnit.h"
#import <WebKit/WebKit.h>

@protocol TBLWebPageDelegate <NSObject>

@optional
/*!
@discussion When implemented, it allows the hosting app to decide what do do when intercepting clicks.

@param placementName The current placement (widget or feed)
@param itemId The placement's unique id
@param clickUrl A string representation of URL click
@param organic Determines whether the article is organic or sponsored

@return YES if the view should begin loading content; otherwise, NO. Default value is YES
*/
- (BOOL)webView:(WKWebView *)webView didClickPlacementName:(NSString *)placementName itemId:(NSString *)itemId clickUrl:(NSString *)clickUrl isOrganic:(BOOL)organic __deprecated_msg("Please Use onItemClick with customData");

/*!
@discussion When implemented, it allows the hosting app to decide what do do when intercepting clicks.

@param placementName The current placement (widget or feed)
@param itemId The placement's unique id
@param clickUrl A string representation of URL click
@param organic Determines whether the article is organic or sponsored
@param customData Includes additonal data about the item clicked (I.E. isAudienceExchange)

 
@return YES if the view should begin loading content; otherwise, NO. Default value is YES
*/
- (BOOL)webView:(WKWebView *)webView didClickPlacementName:(NSString *)placementName itemId:(NSString *)itemId clickUrl:(NSString *)clickUrl isOrganic:(BOOL)organic customData:(NSDictionary *)customData;

/*!
@discussion Triggered after the Taboola is succesfully rendered

@param webView The widget itself
@param placementName The current placement (widget or feed)
@param height TaboolaView's current height
*/
- (void)webView:(WKWebView *)webView didLoadPlacementName:(NSString *)placementName height:(CGFloat)height;

/*!
 @discussion Taboola has finished updating its content.
 * NOTE: This event will only be called after requesting to update the content of the widget.
 
 @param classicUnit The widget itself
*/
- (void)updateContentDidComplete:(WKWebView *)webView;


/*!
@discussion Triggered after Taboola is failed to render.

@param webView The widget itself
@param placementName The current placement (widget or feed)
@param error The error recieved when TaboolaView is failed to render
*/
- (void)webView:(WKWebView *)webView didFailToLoadPlacementName:(NSString *)placementName errorMessage:(NSString *)error;

@end
