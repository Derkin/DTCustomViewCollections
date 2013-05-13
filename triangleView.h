//
//  triangleView.h
//  TableBreakOut
//
//  Created by Benjamin Gordon on 10/16/12.
//  Copyright (c) 2012 Benjamin Gordon. All rights reserved.
//

/*
 @aim 产生一个三角形的view
 @status 未使用
 */

#import <UIKit/UIKit.h>

@interface TriangleView : UIView

@property (nonatomic, assign) float x;
@property (nonatomic, retain) UIColor *color;

-(void)drawTriangleAtXPosition:(float)xpos;

@end
