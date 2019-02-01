//
//  SDShadowView.h
//  AlphaPay
//
//  Created by xialan on 2019/2/1.
//  Copyright © 2019 HARAM. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_OPTIONS(NSUInteger, SDShadowSide) {
    SDShadowSideTop       = 1 << 0,
    SDShadowSideBottom    = 1 << 1,
    SDShadowSideLeft      = 1 << 2,
    SDShadowSideRight     = 1 << 3,
    SDShadowSideAllSides  = ~0UL
};

@interface SDShadowView : UIView

/**
 * 设置四周阴影: shaodwRadius:5  shadowColor:[UIColor colorWithWhite:0 alpha:0.3]
 */
- (void)sd_shaodw;
/**
 * 设置垂直方向的阴影
 *
 * @param shadowRadius   阴影半径
 * @param shadowColor    阴影颜色
 * @param shadowOffset   阴影b偏移
 */
- (void)sd_verticalShaodwRadius:(CGFloat)shadowRadius
                    shadowColor:(UIColor *)shadowColor
                   shadowOffset:(CGSize)shadowOffset;
/**
 * 设置水平方向的阴影
 *
 * @param shadowRadius   阴影半径
 * @param shadowColor    阴影颜色
 * @param shadowOffset   阴影b偏移
 */
- (void)sd_horizontalShaodwRadius:(CGFloat)shadowRadius
                      shadowColor:(UIColor *)shadowColor
                     shadowOffset:(CGSize)shadowOffset;
/**
 * 设置阴影
 *
 * @param shadowRadius   阴影半径
 * @param shadowColor    阴影颜色
 * @param shadowOffset   阴影b偏移
 * @param shadowSide     阴影边
 */
- (void)sd_shaodwRadius:(CGFloat)shadowRadius
            shadowColor:(UIColor *)shadowColor
           shadowOffset:(CGSize)shadowOffset
           byShadowSide:(SDShadowSide)shadowSide;

/**
 * 设置圆角（四周）
 *
 * @param cornerRadius   圆角半径
 */
- (void)sd_cornerRadius:(CGFloat)cornerRadius;
/**
 * 设置圆角
 *
 * @param cornerRadius   圆角半径
 * @param corners        圆角边
 */
- (void)sd_cornerRadius:(CGFloat)cornerRadius
      byRoundingCorners:(UIRectCorner)corners;

@end
