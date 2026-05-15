//
//  JinDaiNativeAdapterBridge.h
//  JinDaiSDK
//
//  Created by fyl on 2023/5/27.
//

#import "JinDaiBaseAdapterBridge.h"

NS_ASSUME_NONNULL_BEGIN

@protocol JinDaiNativeAdapterBridge <JinDaiBaseAdapterBridge>

@required
/// 在广告加载完成时调用该方法，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
/// @param ext 回传信息
- (void)nativeAd:(id _Nonnull)adapter didLoadWithExt:(NSDictionary *)ext;

/// 在广告加载失败时调用该方法，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
/// @param error 错误信息
/// @param ext 回传信息
- (void)nativeAd:(id _Nonnull)adapter didLoadFailWithError:(NSError *_Nullable)error ext:(NSDictionary *)ext;


/// 在广告即将展示时调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
/// @param nativeAd nativeAd
- (void)nativeAdWillVisible:(id _Nonnull)adapter withNativeAd:(id _Nullable)nativeAd;


/// 在广告点击事件触发时调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
/// @param nativeAd nativeAd
- (void)nativeAdDidClick:(id _Nonnull)adapter withNativeAd:(id _Nullable)nativeAd;


/// 在广告关闭时调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
/// @param nativeAd nativeAd
- (void)nativeAdDidClose:(id _Nonnull)adapter withNativeAd:(id _Nullable)nativeAd;

/// 详情页关闭时调用
/// @param adapter 当前适配器
/// @param nativeAd nativeAd
- (void)nativeAdDidCloseOtherController:(id _Nonnull)adapter withNativeAd:(id _Nullable)nativeAd;

@end

NS_ASSUME_NONNULL_END
