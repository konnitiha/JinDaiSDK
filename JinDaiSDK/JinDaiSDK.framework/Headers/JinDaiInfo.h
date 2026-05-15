//
//  JinDaiInfo.h
//  JinDaiSDK
//
//  Created by fyl on 2023/5/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JinDaiInfo : NSObject


/// 第三方网络ID
@property(assign,nonatomic,readonly)NSInteger networkFirmId;

/// 第三方广告位ID
@property(strong,nonatomic,readonly)NSString *adSourceId;

/// 价格（分）
@property(assign,nonatomic,readonly)NSInteger ecpm;


/// 构造方法
/// - Parameter obj: obj
- (instancetype)initWithObj:(id)obj;

@end

NS_ASSUME_NONNULL_END
