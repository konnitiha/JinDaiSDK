//
//  JinDaiCustomConfigAdapter.h
//  JinDaiSDK
//
//  Created by fyl on 2023/5/16.
//

#import <Foundation/Foundation.h>
#import "JinDaiPlatformInitConfig.h"

NS_ASSUME_NONNULL_BEGIN

@protocol JinDaiCustomConfigAdapter <NSObject>

@required

/// adn初始化方法
/// @param initConfig 初始化配置，包括appid、appkey基本信息和部分用户传递配置
- (void)initializeAdapterWithConfiguration:(JinDaiPlatformInitConfig *_Nullable)initConfig;

/// adn的版本号
- (NSString *_Nonnull)networkSdkVersion;


@end

NS_ASSUME_NONNULL_END
