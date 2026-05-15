//
//  JinDaiRewardVideoModel.h
//  JinDaiSDK
//
//  Created by fyl on 2023/5/22.
//

#import <Foundation/Foundation.h>

//透传 csj
typedef NS_ENUM(NSInteger, JinDaiRewardType) {
    JinDaiRewardType_Default            = 0,       // 基础奖励 (满足观看时长、互动抵时长等)
    JinDaiRewardType_Interact           = 1,       // 进阶奖励-互动
    JinDaiRewardType_VideoComplete      = 2,       // 进阶奖励-超过30s的视频播放完成
};
NS_ASSUME_NONNULL_BEGIN
__attribute__((objc_subclassing_restricted))
@interface JinDaiRewardVideoModel : NSObject

/// 用户 id
@property (nonatomic, copy, nullable) NSString *userId;

/// 奖励名称
@property (nonatomic, copy, nullable) NSString *rewardName;


/// 奖励数量
@property (nonatomic, assign) NSInteger rewardAmount;

/// 激励类型 (透传穿山甲)
@property (nonatomic, assign) JinDaiRewardType rewardType;

//对应第三方的 custom 或者 extra
@property (nonatomic, copy) NSString *extra;

@end
NS_ASSUME_NONNULL_END
