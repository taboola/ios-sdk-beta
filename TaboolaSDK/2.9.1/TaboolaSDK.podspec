Pod::Spec.new do |s|

  s.name                = 'TaboolaSDK'
  s.version             = '2.9.1'
  s.summary             = 'Maximize monetization with Taboola ads'
  s.description         = 'The Taboola Mobile Ads SDK allows you to maximize monetization for your iOS and Android apps with Taboola ads'
  s.homepage            = 'https://www.taboola.com'
  s.license		= { :type => 'Taboola Mobile SDK License', :file => 'LICENSE' }
  s.author              = { 'Taboola' => 'mobile-sdk@taboola.com' }
  s.platform            = :ios, '9.0'
  s.source            = { :http => 'https://taboola-mobile-sdk.s3-us-west-2.amazonaws.com/ios/2.9.1/TaboolaSDK.zip' }
  s.frameworks		= 'AdSupport', 'Foundation', 'CoreGraphics', 'UIKit', 'WebKit', 'SafariServices'
  s.resource_bundles = {'TaboolaSDKResource' => ['TaboolaSDK.framework/TaboolaSDKResource.bundle/TaboolaSDKResource-Info.plist', 'TaboolaSDK.framework/TaboolaSDKResource.bundle/*.html']}
  s.ios.vendored_frameworks = 'TaboolaSDK.framework'
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end