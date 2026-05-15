//
//  JinDaiNativeAd.h
//  JinDaiSDK
//
//  Created by fyl on 2023/5/27.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "JinDaiMaterialMeta.h"


NS_ASSUME_NONNULL_BEGIN

@interface JinDaiNativeAd : NSObject

///  自渲染 广告组件需添加到 customRenderContainer 上
@property(strong,nonatomic,nullable,readonly)UIView *customRenderContainer;

/// 模板渲染广告视图
@property(strong,nonatomic,nullable)UIView *canvasView;

/// 物料信息
@property(strong,nonatomic,nullable)JinDaiMaterialMeta *materialMeta;

/// 是否竞价
@property(assign,nonatomic)BOOL isBidding;

/// 价格
@property(assign,nonatomic)NSInteger ecpm;

/// 广告网络 tag
@property(assign,nonatomic)NSInteger adnTag;

/// 原始广告数据
@property(strong,nonatomic)id originAdData;

/// 是否是模板广告
@property(assign,nonatomic)BOOL isTemplate;

/// 适配器
@property(weak,nonatomic)id adapter;

/// 注册 容器视图和点击视图
/// - Parameters:
///   - containerView: 容器视图,即上面customRenderContainer
///   - clickableViews: 可点击视图
- (void)registerContainer:(__kindof UIView *)containerView
       withClickableViews:(NSArray<__kindof UIView *> *_Nullable)clickableViews;

/// 注册 容器视图,点击视图,关闭视图 (部分 ADN 支持 )
/// - Parameters:
///   - containerView: 容器视图,即上面customRenderContainer
///   - clickableViews: 可点击视图
///   - closableViews: 关闭视图
- (void)registerContainer:(__kindof UIView *)containerView
       withClickableViews:(NSArray<__kindof UIView *> *_Nullable)clickableViews
        withClosableViews:(NSArray<__kindof UIView *> *_Nullable)closableViews;

@end

NS_ASSUME_NONNULL_END
