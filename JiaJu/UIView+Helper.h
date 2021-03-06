//
//  UIView+Helper.h
//  Baitu
//
//  Created by MaSong on 2016/12/3.
//  Copyright © 2016年 MaSong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Helper)


/**
 *  起点x坐标
 */
@property (nonatomic, assign) CGFloat x;
/**
 *  起点y坐标
 */
@property (nonatomic, assign) CGFloat y;
/**
 *  中心点x坐标
 */
@property (nonatomic, assign) CGFloat centerX;
/**
 *  中心点y坐标
 */
@property (nonatomic, assign) CGFloat centerY;
/**
 *  宽度
 */
@property (nonatomic, assign) CGFloat width;
/**
 *  高度
 */
@property (nonatomic, assign) CGFloat height;
/**
 *  顶部
 */
@property (nonatomic, assign) CGFloat top;
/**
 *  底部
 */
@property (nonatomic, assign) CGFloat bottom;
/**
 *  左边
 */
@property (nonatomic, assign) CGFloat left;
/**
 *  右边
 */
@property (nonatomic, assign) CGFloat right;
/**
 *  size
 */
@property (nonatomic, assign) CGSize size;
/**
 *  起点坐标
 */
@property (nonatomic, assign) CGPoint origin;

- (void)alignHorizontal;
- (void)alignVertical;

+ (id)loadXibViewWithName:(NSString *)name;
+ (id)loadXibView;


- (void)makeRound;
- (void)addTarget:(id)target action:(SEL)action;
- (void)setTapActionWithBlock:(void (^)(void))block ;

@end








