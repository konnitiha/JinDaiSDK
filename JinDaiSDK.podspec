Pod::Spec.new do |spec|
spec.name         = "JinDaiSDK"
spec.version      = "1.0.0"
spec.summary      = "JinDai广告聚合 SDK"
spec.description  = <<-DESC
JinDai广告SDK是一个专为移动应用开发者设计的广告聚合和收益优化平台。它能够帮助开发者通过多种广告形式提高应用内广告的填充率和eCPM（每千次展示成本），从而增加广告收入
DESC
spec.homepage     = "https://github.com/konnitiha/JinDaiSDK.git"
spec.license      = { :type => "MIT", :file => "LICENSE" }
spec.author             = { "openad" => "1053591151@qq.com" }
spec.source       = { :git => "https://github.com/konnitiha/JinDaiSDK.git", :tag => spec.version }
spec.platform     = :ios, '12.0'
spec.ios.deployment_target = '12.0'
spec.requires_arc = true
spec.frameworks = ["Foundation", "UIKit", "MobileCoreServices", "Security", "SystemConfiguration", "CoreTelephony", "AdSupport", "WebKit", "Accelerate", "CoreMotion","StoreKit", "AVFoundation", "MediaPlayer", "CoreMedia","CoreLocation", "AVKit","CoreGraphics","CoreImage","AudioToolbox"]

spec.user_target_xcconfig =   {'OTHER_LDFLAGS' => ['-lObjC'],'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'}
spec.libraries = ["z", "resolv.9", "sqlite3", "c++", "c++abi", "resolv"]
valid_archs = ['x86_64', 'arm64']
spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 arm64' }
spec.default_subspecs = 'JinDaiSDK'

spec.subspec 'JinDaiSDK' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'JinDaiSDK/JinDaiSDK.framework'
     ss.resources = ['JinDaiSDK/JinDaiSDK.bundle']
     
  end
  
spec.subspec 'CsjAdapter' do |ss|
     ss.dependency 'JinDaiSDK/JinDaiSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'JinDaiSDK/JinDaiCsjAdapter.framework'
     ss.dependency 'Ads-CN-Beta/BUAdSDK','>= 7.1.0.0'
     ss.dependency 'Ads-CN-Beta/CSJMediation','>= 7.1.0.0'
end

spec.subspec 'GdtAdapter' do |ss|
     ss.dependency 'JinDaiSDK/JinDaiSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'JinDaiSDK/JinDaiGdtAdapter.framework'
     ss.dependency 'GDTMobSDK','>= 4.15.50'
end



spec.subspec 'KsAdapter' do |ss|
     ss.dependency 'JinDaiSDK/JinDaiSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'JinDaiSDK/JinDaiKsAdapter.framework'
     ss.dependency 'KSAdSDK','>= 4.4.20.1'
end

spec.subspec 'TanxAdapter' do |ss|
     ss.dependency 'JinDaiSDK/JinDaiSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'JinDaiSDK/JinDaiTanxAdapter.framework'
     ss.dependency 'TanxSDK','>= 3.6.7'
end

spec.subspec 'BaiduAdapter' do |ss|
     ss.dependency 'JinDaiSDK/JinDaiSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'JinDaiSDK/JinDaiBaiduAdapter.framework'
     ss.dependency 'BaiduMobAdSDK','>= 5.391'
end

spec.subspec 'JdAdapter' do |ss|
     ss.dependency 'JinDaiSDK/JinDaiSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'JinDaiSDK/JinDaiJdAdapter.framework'
     ss.dependency 'JADYun','>= 2.6.4'
end

  
#'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
end
