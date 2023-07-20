//
//  TBLHomePagePage.h
//  Pods
//
//  Created by Karen Shaham Palman on 09/09/2021.
//

#import "TBLNativeUnit.h"
#import "TBLHomePageDelegate.h"
#import "TBLAdditionalViews.h"
#import "TBLHomePageSettings.h"
#import "TBLHomePageBuilder.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 TBLHomePagePage is the first object to initialize, and is being used to fetch TaboolaView's content (widget or Feed)
*/
@interface TBLHomePage : TBLNativePage
/*!
@discussion Init function for the TBLHomePage

@param delegate Sets the listener for Taboola calls
@param settings TBLHomePageSettings that contains all required publisher's information such as sourceType, pageUrl, sectionNames, etc.
 
@return TBLHomePage object
*/
- (instancetype)initWithDelegate:(id<TBLHomePageDelegate>)delegate settings:(TBLHomePageSettings *)settings;

/*!
@discussion Set the scrollView

@param scrollView describes the scroll layout (CollectionView)
*/
- (void)setScrollView:(UIScrollView *)scrollView;

/*!
@discussion Call this function to know if HomePage is Active
 
@return BOOL - YES if HomePage is on, NO if it isn't
*/
- (BOOL)isActive;

/*!
 @brief After initializing TBLHomePage, this method should be called to actually fetch the recommendations
*/
- (void)fetchContent;

/*!
@discussion Call this function to get the swapped item's content
 
@return BOOL - YES if the item was swapped, NO if it wasn't
*/
- (BOOL)shouldSwapItemInSection:(NSString *)sectionName indexPath:(NSIndexPath *)indexPath parentView:(UIView *)parentView imageView:(UIImageView * _Nullable)imageView titleView:(UILabel * _Nullable)titleView descriptionView:(UILabel * _Nullable)descriptionView additionalViews:(TBLAdditionalViews * _Nullable)additionalViews;

@end

NS_ASSUME_NONNULL_END
