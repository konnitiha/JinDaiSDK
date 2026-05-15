//
//  JinDaiError.h
//  Demo
//
//  Created by JinDai on 2020/11/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSUInteger, JinDaiErrorCode) {
    JinDaiErrorCode_10000    =    10000,
    JinDaiErrorCode_10001    =    10001,
    JinDaiErrorCode_10002    =    10002,
    JinDaiErrorCode_10003    =    10003,
    JinDaiErrorCode_10004    =    10004,
    JinDaiErrorCode_10005    =    10005,
    JinDaiErrorCode_20001    =    20001,
    JinDaiErrorCode_30000    =    30000,
    JinDaiErrorCode_30001    =    30001,
    JinDaiErrorCode_30002    =    30002,
    JinDaiErrorCode_30004    =    30004,
    JinDaiErrorCode_40005    =    40005,
    JinDaiErrorCode_40006    =    40006,
    JinDaiErrorCode_40007    =    40007,
    JinDaiErrorCode_50000    =    50000,
};

@interface JinDaiError : NSObject


+ (instancetype)errorWithCode:(JinDaiErrorCode)code;

+ (instancetype)errorWithCode:(JinDaiErrorCode)code obj:(id)obj;

- (NSError *)toNSError;

@end

NS_ASSUME_NONNULL_END
