//
//  JinDaiBidResult.h
//  JinDaiSDK
//
//  Created by fyl on 2023/5/17.
//

#import <Foundation/Foundation.h>


//
//                       _oo0oo_
//                      o8888888o
//                      88" . "88
//                      (| -_- |)
//                      0\  =  /0
//                    ___/`---'\___
//                  .' \\|     |// '.
//                 / \\|||  :  |||// \
//                / _||||| -:- |||||- \
//               |   | \\\  - /// |   |
//               | \_|  ''\---/''  |_/ |
//               \  .-\__  '-'  ___/-. /
//             ___'. .'  /--.--\  `. .'___
//          ."" '<  `.___\_<|>_/___.' >' "".
//         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
//         \  \ `_.   \_ __\ /__ _/   .-` /  /
//     =====`-.____`.___ \_____/___.-`___.-'=====
//                       `=---='
//
//
//     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//           佛祖保佑       永不宕机     永无BUG
//
//       佛曰:
//               写字楼里写字间，写字间里程序员；
//               程序人员写程序，又拿程序换酒钱。
//               酒醒只在网上坐，酒醉还来网下眠；
//               酒醉酒醒日复日，网上网下年复年。
//               但愿老死电脑间，不愿鞠躬老板前；
//               奔驰宝马贵者趣，公交自行程序员。
//               别人笑我忒疯癫，我笑自己命太贱；
//               不见满街漂亮妹，哪个归得程序员？
//


NS_ASSUME_NONNULL_BEGIN

@interface JinDaiBidResult : NSObject

/// 竞价结果
@property (nonatomic, assign, readonly) BOOL win;

/// 竞胜价
@property (nonatomic, assign, readonly) NSInteger winnerPrice;

/// 第二名价格,如有
@property (nonatomic, assign, readonly) NSInteger secondPrice;

/// 竞胜平台 tag
@property (nonatomic, assign, readonly) NSInteger winnerAdnTag;

/// 第二平台 tag
@property (nonatomic, assign, readonly) NSInteger secondAdnTag;

/// 竞价原始数据
@property (nonatomic, strong, readonly) id originNativeAdData;

@end

NS_ASSUME_NONNULL_END
