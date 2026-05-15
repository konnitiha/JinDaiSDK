//
//  JinDaiNativeAdManager.h
//  JinDaiSDK
//
//  Created by fyl on 2023/5/27.
//

#import "JinDaiBaseAd.h"
#import "JinDaiNativeAd.h"
#import "JinDaiBaseDelegate.h"

@class JinDaiNativeAdManager;

NS_ASSUME_NONNULL_BEGIN


@protocol JinDaiNativeAdManagerDelegate <JinDaiBaseDelegate>

@optional

/// 广告加载成功
/// - Parameters:
///   - nativeAdManager: 广告对象
///   - nativeAdDataArray: JinDaiNativeAd 数组
- (void)onNativeAdLoadSuccess:(JinDaiNativeAdManager *)nativeAdManager nativeAds:(NSArray<JinDaiNativeAd *> *_Nullable)nativeAdDataArray;

/// 加载失败回调
/// - Parameters:
///   - nativeAdManager: 广告对象
///   - error: 错误信息,透传三方 error
- (void)onNativeAdLoadFailed:(JinDaiNativeAdManager *)nativeAdManager error:(NSError *)error;

/// 广告展示回调
/// - Parameter nativeAd: JinDaiNativeAd
- (void)onNativeAdShow:(JinDaiNativeAdManager *)nativeAdManager nativeAd:(JinDaiNativeAd *)nativeAd;

/// 广告点击回调
/// - Parameters:
///   - nativeAdManager: 广告对象
///   - nativeAd: JinDaiNativeAd
- (void)onNativeAdClick:(JinDaiNativeAdManager *)nativeAdManager nativeAd:(JinDaiNativeAd *)nativeAd;

/// 广告关闭回调(自渲染广告不会回调)
/// - Parameters:
///   - nativeAdManager: 广告对象
///   - nativeAd: JinDaiNativeAd
///   - dislikeReason: 关闭原因
- (void)onNativeAdClosed:(JinDaiNativeAdManager *)nativeAdManager nativeAd:(JinDaiNativeAd *)nativeAd withDislike:(NSString *)dislikeReason;

/// 详情页关闭
/// - Parameter nativeAdManager: 广告对象
- (void)onNativeAdDidCloseOtherController:(JinDaiNativeAdManager *)nativeAdManager;

@end

@interface JinDaiNativeAdManager : JinDaiBaseAd
/// 广告代理
@property (nonatomic,weak) id <JinDaiNativeAdManagerDelegate> delegate;

/// 广告位 id
@property (nonatomic, strong,readonly) NSString *slotID;

/// 期望广告尺寸
@property(assign,nonatomic,readonly)CGSize adSize;

/// 跳转控制器
@property(nonatomic, weak,readonly) UIViewController *rootViewController;

/// 视频是否静音,默认 NO
@property(assign,nonatomic)BOOL muteIfCan;

/// 初始化广告对象
/// - Parameter slotID: 广告位 id
/// - Parameter rootViewController: 跳转控制器
/// - Parameter adSize: 期望广告尺寸
- (instancetype)initWithSlotID:(NSString *)slotID rootViewController:(UIViewController *)rootViewController adSize:(CGSize)adSize;

///加载广告 count:1-3
- (void)loadAdWithCount:(NSInteger)count;

@end

NS_ASSUME_NONNULL_END
