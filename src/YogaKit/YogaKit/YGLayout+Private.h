/**
 * Copyright (c) 2014-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Cocoa/Cocoa.h>
#import "YGLayout.h"
#import "yoga/Yoga.h"

@interface YGLayout ()

@property (nonatomic, assign, readonly) YGNodeRef node;

- (instancetype)initWithView:(NSView *)view;

@end
