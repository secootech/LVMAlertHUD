//
//
// LVMAlertController+Private.h
// Secoo-iPhone
//
// Created by WuYikai on 2018/1/12.
// Copyright © 2018年 douking. All rights reserved.
//
	

#import "LVMAlertController.h"

@interface LVMAlertController ()
@property (nonatomic, copy) NSString *alertTitle;
@property (nonatomic, copy) NSString *alertMessage;
@property (nonatomic, copy) UIImage *alertImage;
@property (nonatomic) LVMAlertControllerStyle preferredStyle;
@property (nonatomic, strong) NSArray<LVMAlertAction *> *userActions;
@property (nonatomic, copy) void(^actionHandler)(NSInteger index, LVMAlertAction *action);
- (UIViewController *)_stackTopViewController;
@end
