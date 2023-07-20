Pod::Spec.new do |s|

  s.name                = 'TaboolaSDK'
  s.version             = '3.8.11'
  s.summary             = 'Maximize monetization with Taboola ads'
  s.description         = 'The Taboola Mobile Ads SDK allows you to maximize monetization for your iOS and Android apps with Taboola ads'
  s.homepage            = 'https://www.taboola.com'
  s.license		= { :type => 'Taboola Mobile SDK License', :file => 'LICENSE' }
  s.author              = { 'Taboola' => 'mobile-sdk@taboola.com' }
  s.platform            = :ios, '11.0'
  s.source            = { :http => 'https://taboola-mobile-sdk.s3.us-west-2.amazonaws.com/ios/spm/3.8.11/TaboolaSDK.xcframework.zip' }
  s.frameworks		= 'AdSupport', 'Foundation', 'CoreGraphics', 'UIKit', 'WebKit', 'SafariServices'
  s.resource_bundles = {'TaboolaSDKResource' => ['TaboolaSDK.xcframework/TaboolaSDKResource.bundle/TaboolaSDKResource-Info.plist',
   'TaboolaSDK.xcframework/TaboolaSDKResource.bundle/*.html',
   'TaboolaSDK.xcframework/TaboolaSDKResource.bundle/*.nib']}
  s.ios.vendored_frameworks = 'TaboolaSDK.xcframework', 'OMSDK_Taboola.framework'

end
