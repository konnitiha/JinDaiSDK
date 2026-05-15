//
//  JinDaiMaterialMeta.h
//  JinDaiSDK
//
//  Created by fyl on 2023/5/29.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "JinDaiNativeVideoView.h"

typedef NS_ENUM(NSInteger, JinDaiInteractionType) {
    JinDaiInteractionTypeCustorm = 0,
    JinDaiInteractionTypeNO_INTERACTION = 1,  // pure ad display
    JinDaiInteractionTypeURL = 2,             // open the webpage using a browser
    JinDaiInteractionTypePage = 3,            // open the webpage within the app
    JinDaiInteractionTypeDownload = 4,        // download the app
    JinDaiInteractionTypePhone = 5,           // make a call
    JinDaiInteractionTypeMessage = 6,         // send messages
    JinDaiInteractionTypeEmail = 7,           // send email
    JinDaiInteractionTypeVideoAdDetail = 8,    // video ad details page
    JinDaiInteractionTypeMediationOthers  = 100 //聚合其他广告sdk返回的类型
};

typedef NS_ENUM(NSInteger, JinDaiNativeAdMode) {
    JinDaiNativeAdModeSmallImage = 2,
    JinDaiNativeAdModeLargeImage = 3,
    JinDaiNativeAdModeGroupImage = 4,
    JinDaiNativeVideoAdModeImage = 5, // video ad || rewarded video ad horizontal screen
    JinDaiNativeVideoAdModePortrait = 15, // rewarded video ad vertical screen
    JinDaiNativeAdModeImagePortrait = 16,
    JinDaiNativeAdModeSquareImage   = 33, //SquareImage
    JinDaiNativeAdModeSquareVideo   = 50, //SquareVideo
    JinDaiNativeAdModeUnionSplashVideo = 154, // Video splash
    JinDaiNativeAdModeLiveStream    = 166, // Live Stream Ad
    JinDaiNativeAdModeUnionVerticalImage = 173, // vertical picture
    JinDaiNativeAdModeUnionAtlas = 180, // atlas
    JinDaiNativeAdModeMediationUnknown = 1000 //聚合其他广告sdk未知
};
NS_ASSUME_NONNULL_BEGIN


//广告素材 各元素 存在为空的可能,接入方可添加非空判断,增加容错
@interface JinDaiMaterialMeta : NSObject

/// 广告交互类型
@property (nonatomic, assign) JinDaiInteractionType interactionType;

/// 媒体图片数组
@property (nonatomic, strong, nullable) NSArray<NSString *> *imageAry;

/// 广告 logo 链接
@property (nonatomic, copy, nullable) NSString *icon;

/// 广告 logo image
@property (nonatomic, strong, nullable) UIImage *iconImage;

/// 下载 app icon
@property (nonatomic, copy, nullable) NSString *downloadAppIcon;

/// 下载 app name
@property (nonatomic, copy, nullable) NSString *downloadAppName;

/// 广告标题
@property (nonatomic, copy, nullable) NSString *adTitle;

/// 广告副标题
@property (nonatomic, copy, nullable) NSString *adDescription;

/// 广告来源
@property (nonatomic, copy, nullable) NSString *aDsource;

///广告 字样图 图片
@property (nonatomic, copy, nullable) NSString *adLogoURLString;

/// CTA 文案
@property (nonatomic, copy, nullable) NSString *buttonText;

/// 广告样式类型
@property (nonatomic, assign) JinDaiNativeAdMode imageMode;

/// 评分
@property (nonatomic, assign) NSInteger score;

/// 评论数
@property (nonatomic, assign) NSInteger commentNum;

/// 下载 app 大小
@property (nonatomic, assign) NSInteger appSize;

/// 视频时长
@property (nonatomic, assign) NSInteger videoDuration;

/// 视频封面
@property (nonatomic, copy, nullable) NSString *videoCover;

/// 视频资源
@property (nonatomic, copy, nullable) NSString *videoUrl;

/// 媒体视图,三方 adn 提供,如没有媒体视图,则为 nil
@property (nonatomic, strong, nullable) JinDaiNativeVideoView *mediaView;

/// 视频宽
@property (nonatomic, assign) NSInteger videoResolutionWidth;

/// 视频高
@property (nonatomic, assign) NSInteger videoResolutionHeight;

/// 平台名称
@property (nonatomic, copy, nullable) NSString *adxName;



//以下字段为京东自渲染
/**
 @brief “京准通”logo
 @discussion 自渲染“京准通”logo
 logo imageView widget
*/
@property (strong, nonatomic, readonly, nullable) UIImageView *logoWidget;

/**
 @brief “京准通”logo文字
 @discussion 自渲染”京准通”logo文字
 logo text imageView widget
*/
@property (strong, nonatomic, readonly, nullable) UIImageView *logoTextWidget;

/**
 @brief 广告标识logo
 @discussion 自渲染广告标识logo
 logo ad imageView widget
*/
@property (strong, nonatomic, readonly, nullable) UIImageView *logoAdWidget;

/**
 @brief 京东logo
 @discussion 自渲染京东logo
 jd logo iamgeView widget
 */
@property (strong, nonatomic, readonly, nullable) UIImageView *jdLogoWidget;


@end

NS_ASSUME_NONNULL_END
