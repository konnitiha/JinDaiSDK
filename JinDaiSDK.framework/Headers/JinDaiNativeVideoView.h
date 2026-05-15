//
//  JinDaiNativeVideoView.h
//  JinDaiSDK
//
//  Created by fyl on 2023/6/13.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

//部分 adn 可控制播放
@interface JinDaiNativeVideoView : UIView

@property(nonatomic,getter=isPlaying)BOOL playing;
- (void)play;
- (void)pause;
- (void)stop;

- (void)mute:(BOOL)mute;

@end

NS_ASSUME_NONNULL_END
