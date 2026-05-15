//
//  JinDaiConst.h
//  JinDaiSDK
//
//  Created by fyl on 2023/5/21.
//

#import <Foundation/Foundation.h>

#define JINDAI_FIX_CATEGORY_BUG(name) @interface JINDAI_FIX_CATEGORY_BUG_##name: NSObject @end \
                                  @implementation JINDAI_FIX_CATEGORY_BUG_##name @end


FOUNDATION_EXPORT NSString *kJinDaiExtraDicRootViewControllerKey;
FOUNDATION_EXPORT NSString *kJinDaiExtraDicSplashBottomViewKey;
FOUNDATION_EXPORT NSString *kJinDaiExtraDicSplashSkipTimeKey;
FOUNDATION_EXPORT NSString *kJinDaiExtraDicAdSizeKey;
FOUNDATION_EXPORT NSString *kJinDaiExtraDicTimeoutKey;
FOUNDATION_EXPORT NSString *kJinDaiExtraDicAutoSwitchIntervalKey;
FOUNDATION_EXPORT NSString *kJinDaiExtraDicMuteKey;
FOUNDATION_EXPORT NSString *kJinDaiExtraDicRewardVideoModelKey;
FOUNDATION_EXPORT NSString *kJinDaiExtraDicRewardVideoAdMuteKey;
FOUNDATION_EXPORT NSString *kJinDaiExtraDicNativeAdLoadCountKey;
FOUNDATION_EXPORT NSString *kJinDaiExtraDicNativeAdMuteKey;
FOUNDATION_EXPORT NSString *kJinDaiExtraDicCustomWindowKey;
FOUNDATION_EXPORT NSString *kJinDaiExtraDicShakeEnableKey;
FOUNDATION_EXPORT NSString *kJinDaiExtraDicShakeLevelKey;


typedef NS_ENUM(NSInteger,JinDaiLogLevel) {
    JinDaiLogLevel_None  = 0, // 不打印
    JinDaiLogLevel_Debug,
};


typedef NS_ENUM(NSInteger,JinDaiADNChannel) {
    JinDaiADNChannel_Unknown  = 0,
    JinDaiADNChannel_Csj = 1,//SDK_CSJ
    JinDaiADNChannel_Gdt = 2,//SDK_GDT
    JinDaiADNChannel_JinDaiAdx  = 3,//SDK_Jindai
    JinDaiADNChannel_Kuaishou = 4,//SDK_KuaiShou
    JinDaiADNChannel_Tanx = 5,//SDK_Tanx
    JinDaiADNChannel_Baidu = 6,//SDK_Baidu
    JinDaiADNChannel_Jd = 7,//SDK_JD
    JinDaiADNChannel_IFYL = 9,//SDK_IFLY
    JinDaiADNChannel_QuMeng = 10,
    JinDaiADNChannel_Bbt = 12,
    JinDaiADNChannel_ZJ = 14,
    JinDaiADNChannel_Taku = 15,
    JinDaiADNChannel_Cxh = 16,
    JinDaiADNChannel_Sigmob = 17,
    
};

// MARK: ======================= SDK =======================
extern NSString *const JinDaiSDKVersion;

extern NSString *const JinDaiSdkTypeAdName;
extern NSString *const JinDaiSdkTypeAdNameSplash;
extern NSString *const JinDaiSdkTypeAdNameBanner;
extern NSString *const JinDaiSdkTypeAdNameInterstitial;
extern NSString *const JinDaiSdkTypeAdNameFullScreenVideo;
extern NSString *const JinDaiSdkTypeAdNameNativeExpress;
extern NSString *const JinDaiSdkTypeAdNameRewardVideo;



