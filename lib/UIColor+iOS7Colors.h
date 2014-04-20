#import <UIKit/UIKit.h>

#define gradientPair(name)                                 \
+ (instancetype)iOS7##name##GradientStartColor;            \
+ (instancetype)iOS7##name##GradientEndColor;              \
+ (NSArray *)iOS7##name##Gradient;

@interface UIColor (iOS7Colors)

+ (instancetype)iOS7redColor;
+ (instancetype)iOS7orangeColor;
+ (instancetype)iOS7yellowColor;
+ (instancetype)iOS7greenColor;
+ (instancetype)iOS7tealColor;
+ (instancetype)iOS7blueColor;
+ (instancetype)iOS7violetColor;
+ (instancetype)iOS7magentaColor;
+ (instancetype)iOS7darkGreyColor;
+ (instancetype)iOS7lightGreyColor;
+ (instancetype)iOS7charcoalColor;

+ (NSArray *)iOS7Colors;
+ (NSArray *)iOS7GradientPairs;

gradientPair(red)
gradientPair(orange)
gradientPair(yellow)
gradientPair(green)
gradientPair(teal)
gradientPair(blue)
gradientPair(violet)
gradientPair(magenta)
gradientPair(charcoal)
gradientPair(silver)

@end

#undef gradientPair