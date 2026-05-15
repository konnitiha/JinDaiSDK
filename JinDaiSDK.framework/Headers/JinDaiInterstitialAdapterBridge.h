//
//  JinDaiInterstitialAdapterBridge.h
//  JinDaiSDK
//
//  Created by fyl on 2023/5/17.
//

#import "JinDaiBaseAdapterBridge.h"

NS_ASSUME_NONNULL_BEGIN

@protocol JinDaiInterstitialAdapterBridge <JinDaiBaseAdapterBridge>

@required
/// 在广告加载完成时调用该方法，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
/// @param ext 回传信息
- (void)interstitialAd:(id _Nonnull)adapter didLoadWithExt:(NSDictionary *)ext;

/// 在广告加载失败时调用该方法，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
/// @param error 错误信息
/// @param ext 回传信息
- (void)interstitialAd:(id _Nonnull)adapter didLoadFailWithError:(NSError *_Nullable)error ext:(NSDictionary *)ext;


/// 在广告即将展示时调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
- (void)interstitialAdWillVisible:(id _Nonnull)adapter;

/// 在广告 展示失败时调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
- (void)interstitialAdShowFailed:(id _Nonnull)adapter;


/// 在广告点击事件触发时调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
- (void)interstitialAdDidClick:(id _Nonnull)adapter;


/// 在广告关闭时调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
- (void)interstitialAdDidClose:(id _Nonnull)adapter;

/// 详情页关闭时调用
/// @param adapter 当前适配器
- (void)interstitialAdDidCloseOtherController:(id _Nonnull)adapter;


/// 广告点击跳转使用的控制器
- (UIViewController *)viewControllerForPresentingModalView;

@end

NS_ASSUME_NONNULL_END
