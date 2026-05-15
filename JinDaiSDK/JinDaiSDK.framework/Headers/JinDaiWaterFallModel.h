//
//  JinDaiWaterFallModel.h
//  JinDaiSDK
//
//  Created by fyl on 2023/5/14.
//

#import <Foundation/Foundation.h>

@class JinDaiWaterFallSoltConfig;
@class JinDaiWaterFallConfig;
@class JinDaiWaterFallItemArray;
@class JinDaiWaterFallItem;

NS_ASSUME_NONNULL_BEGIN

@interface JinDaiWaterFallModel : NSObject

/// 状态码
@property(assign,nonatomic)int code;

/// 应用ID
@property(strong,nonatomic)NSString *appId;

/// 
@property(copy,nonatomic)NSString *ad_id;

/// 分组ID
@property(assign,nonatomic)NSInteger gid;

/// 广告位ID
@property(strong,nonatomic)NSString *slotId;

/// 底价列表
@property(strong,nonatomic)NSArray<NSArray<JinDaiWaterFallItem *> *> *adSlot;

/// 竞价列表
@property(strong,nonatomic)NSArray<JinDaiWaterFallItem*> *bidding;

///
@property(strong,nonatomic)NSString *criteriaId;

/// /广告位配置
@property(strong,nonatomic)JinDaiWaterFallSoltConfig *slotConfig;

/// 瀑布流配置
@property(strong,nonatomic)JinDaiWaterFallConfig *waterfallFlowConfig;

/// 上报用的，服务端唯一请求ID
@property(strong,nonatomic)NSString *searchId;

/// 金袋口令
@property(strong,nonatomic)NSString *jdaiLink;

- (void)setReqType:(NSString *)reqType;


@end




@interface JinDaiWaterFallSoltConfig : NSObject

///当前广告类型 1：开屏 2：插屏 3：banner 4：信息流 5：激励视频
@property(assign,nonatomic)int adSlotType;

/// 组ID（预留）
@property(strong,nonatomic)NSString *groupId;

/// 组类型（预留）
@property(strong,nonatomic)NSString *groupType;

@end



@interface JinDaiWaterFallConfig : NSObject

/// 竞价超时时间
@property(assign,nonatomic)CGFloat biddingTime;

/// 底价单个请求超时时间
@property(assign,nonatomic)CGFloat singleTime;

/// 瀑布流请求超时时间
@property(assign,nonatomic)CGFloat totalTime;

/// 是否返回
@property(assign,nonatomic)BOOL isCache;

/// 并行请求个数（和底价列表下发数组个数有关）
@property(assign,nonatomic)int parallelNum;

///
@property(strong,nonatomic)NSString *parallelism;

/// 固定底价（预留）
@property(assign,nonatomic)NSInteger reservePrice;

/// 返回广告总数
@property(assign,nonatomic)int total;

@property(assign,nonatomic)BOOL shake;
@property(assign,nonatomic)int shakeLevel;
@property(assign,nonatomic)BOOL adxAppend;
@end




@interface JinDaiWaterFallItemArray : NSObject

@property(strong,nonatomic)NSArray<JinDaiWaterFallItem*> *waterFallItems;

@end





@interface JinDaiWaterFallItem : NSObject

/// 第三方APPID
@property(copy,nonatomic)NSString *appId;

///  媒体 id
@property(strong,nonatomic)NSString *account;


@property(strong,nonatomic)NSString *accountID;
@property(strong,nonatomic)NSString *roleId;
@property(strong,nonatomic)NSString *securityKey;
/// 应用key
@property(strong,nonatomic)NSString *appKey;

/// adx 专用
@property(copy,nonatomic)NSString *host;

/// 渠道
@property(nonatomic,copy)NSString *channelStr;

/// 渠道号
@property(assign,nonatomic)NSInteger channel;

/// 价格：分
@property(assign,nonatomic)NSInteger price;

/// 广告位ID
@property(strong,nonatomic)NSString *cpd;

/// 代码位 ID:三方广告位ID
@property(strong,nonatomic)NSString *slotId;


///
@property(strong,nonatomic)NSString *tp_slotId;

@property(assign,nonatomic)int type;

/// 广告类型：0：模板   1：自渲染      2:京媒渲染开屏   3:京媒渲染插屏
@property(assign,nonatomic)int renderType;

/// 插屏广告位       0:半屏 1:全屏
/// 信息流广告位   0:普通 1:Draw
/// 京东信息流广告位   2: 京媒渲染开屏 3:京媒渲染插屏
@property(assign,nonatomic)int subType;

/// 是否竞价
@property(assign,nonatomic)BOOL isBidding;

/// 是否draw
@property(assign,nonatomic)BOOL isDraw;

///  请求类型
@property(strong,nonatomic)NSString *reqType;

/// 分组ID
@property(assign,nonatomic)NSInteger gid;

/// 
@property(copy,nonatomic)NSString *ad_id;

@end

NS_ASSUME_NONNULL_END
