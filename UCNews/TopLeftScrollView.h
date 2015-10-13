//
//  TopLeftScrollView.h
//  test
//
//  Created by wangchen on 15/8/14.
//  Copyright (c) 2015年 heiguang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TopLeftScrollView : UIView

@property (nonatomic, assign)CGFloat contentOffset;

@property (nonatomic, strong)NSArray *pagesArray;
-(instancetype)initWithFrame:(CGRect)frame andPagesArray:(NSArray *)pagesArray;

@end
