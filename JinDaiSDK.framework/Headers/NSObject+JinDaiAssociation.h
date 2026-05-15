//
//  NSObject+JinDaiAssociation.h
//  JinDaiSDK
//
//  Created by fyl on 2023/5/15.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface NSObject (JinDaiAssociation)

- (void)JinDai_setAssociatedObject:(id)object forKey:(NSString *)key;
- (id)JinDai_associatedObjectForKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
