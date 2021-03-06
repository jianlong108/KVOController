/**
  Copyright (c) 2014-present, Facebook, Inc.
  All rights reserved.

  This source code is licensed under the BSD-style license found in the
  LICENSE file in the root directory of this source tree. An additional grant
  of patent rights can be found in the PATENTS file in the same directory.
 */

#import <UIKit/UIKit.h>
#import "ClockLayer.h"

#define CLOCK_LAYER(VIEW) ((ClockLayer *)VIEW.layer)

@class Clock;

enum
{
  kClockViewStyleLight,
  kClockViewStyleDark,
};
typedef NSUInteger ClockViewStyle;

@interface ClockView : UIView

- (instancetype)initWithClock:(Clock *)clock style:(ClockViewStyle)style;

@end
