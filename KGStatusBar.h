//
//  KGStatusBar.h
//
//  Created by Kevin Gibbon on 2/27/13.
//  Copyright 2013 Kevin Gibbon. All rights reserved.
//  @kevingibbon
//

/*
 @aim 便利方法产生锁住全屏的状体窗口
 @status 未使用
 */
#import <UIKit/UIKit.h>

@interface KGStatusBar : UIView

/*
 @aim 外放的几个api，使用时可自己再使用api
 */
+ (void)showWithStatus:(NSString*)status;
+ (void)showErrorWithStatus:(NSString*)status;
+ (void)showSuccessWithStatus:(NSString*)status;


+ (void)dismiss;

@end
