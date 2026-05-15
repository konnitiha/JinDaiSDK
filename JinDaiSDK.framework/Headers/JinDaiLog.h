//
//  JinDaiLog.h
//  Example
//
//  Created by JinDai on 2019/11/5.
//  Copyright © 2019 JinDai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JinDaiConst.h"

@class JinDaiLog;

#define JINDAI_DEBUG_LOG(format,...)  [JinDaiLog customLogWithFunction:__FUNCTION__ lineNumber:__LINE__ formatString:[NSString stringWithFormat:format, ##__VA_ARGS__] level:JinDaiLogLevel_Debug]

#define JinDaiLog(format,...)  [JinDaiLog customLogWithFunction:__FUNCTION__ lineNumber:__LINE__ formatString:[NSString stringWithFormat:format, ##__VA_ARGS__]]

NS_ASSUME_NONNULL_BEGIN


@interface JinDaiLog : NSObject

// 日志输出方法
+ (void)customLogWithFunction:(const char *)function lineNumber:(int)lineNumber formatString:(NSString *)formatString level:(JinDaiLogLevel)level;

+ (void)customLogWithFunction:(const char *)function lineNumber:(int)lineNumber formatString:(NSString *)formatString;



@end

NS_ASSUME_NONNULL_END
