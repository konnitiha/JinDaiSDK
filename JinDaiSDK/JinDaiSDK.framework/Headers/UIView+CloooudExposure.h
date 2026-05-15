//
//  UIView+CloooudExposure.h
//  CloooudAPIAd
//
//  Created by fyl on 2024/4/28.
//

#import <UIKit/UIKit.h>


static NSInteger kCloooudEffectiveExposureTime = 0; //默认的有效曝光时间300ms
static NSInteger kCloooudEffectiveExposureRatio = 50;  //默认的有效曝光比例


@interface UIView (CloooudExposure)

/**
     UIView 曝光时的操作（可用于统计）
 */
@property (nonatomic, copy, setter=cloooud_setExposuerBlock:) void(^cloooud_exposureBlock)(UIView *);

@property (nonatomic, copy, setter=cloooud_setEndExposuerBlock:) void(^cloooud_endExposureBlock)(UIView *);

@property (nonatomic, assign, setter=cloooud_setRepeatExposure:) BOOL cloooud_repeatExposure;
@property (nonatomic, assign, setter=cloooud_setIsExposing:) BOOL cloooud_isExposing;
/**
    UIView 曝光补偿（原来的曝光区域+这里的补偿，CGRectMake(x-.width, y-.heigh, w+2*.widht, h+2*.heigh)）
    时机：最好在设置曝光操作（cloooud_setExposuerBlock:）前设置 -- 默认时CGSizeZero
 */
@property (nonatomic, assign, setter=cloooud_setECompensationSize:) CGSize cloooud_ECompensationSize;

/// 设置为YES时，忽略进行曝光的操作，NO就正常曝光，默认NO
@property (nonatomic, assign, setter=cloooud_setIgnoreExposure:) BOOL cloooud_ignoreExposure;

/// 设置为YES时，忽略进行曝光的操作，NO就正常曝光，默认NO
/// 当superView的cloooud_ignoreExposure为YES时，cloooud_ignoreExposureFromSuperView就会跟随变为YES
@property (nonatomic, assign, setter=cloooud_setIgnoreExposureFromSuperView:) BOOL cloooud_ignoreExposureFromSuperView;

/// 有效曝光时长，只有曝光时长大于cloooud_EffectiveExposureTime才算有效曝光, 单位是毫秒
/// 默认是300毫秒（kCloooudEffectiveExposureTime）
@property (nonatomic, assign, setter=cloooud_setEffectiveExposureTime:) NSInteger cloooud_EffectiveExposureTime;

/// 有效曝光比例，只有曝光面积大于cloooud_EffectiveExposureRatio时才算曝光（0～100），小于0就等于0，只要有曝光即可，大于100就等于100，要全部曝光
/// 默认是0，即露出就算曝光（kCloooudEffectiveExposureRatio）
@property (nonatomic, assign, setter=cloooud_setEffectiveExposureRatio:) NSInteger cloooud_EffectiveExposureRatio;

@end


