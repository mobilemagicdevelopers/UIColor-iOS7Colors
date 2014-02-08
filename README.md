# UIColor+iOS7Colors

UIColor+iOS7Colors adds convenience accessors for some nice looking colors for iOS 7 I found
on [ios7colors.com](http://ios7colors.com).

## Usage

Use this the same way you use any other category.  You should be able to use the familiar UIColor static
helper syntax.
  
1. `#import "UIColor+iOS7Colors.h"`
2. `[UIColor iOS7orangeColor]`
3. Profit

### Gradients

Gradient usage is a smidgen more complicated because gradients are more complicated.  Here's a snippet (slighly modified
for clarity) from a recent project that was the impetus for my adding gradients:

    NSArray *gradientColors = [UIColor iOS7greenGradient];
    CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
        
    CGGradientRef gradient = CGGradientCreateWithColors(colorSpace, (CFArrayRef)gradientColors, NULL);
    CGColorSpaceRelease(colorSpace), colorSpace = NULL;
        
    CGPoint startPoint = square.origin;
    CGPoint endPoint = CGPointMake(square.origin.x, CGRectGetMaxY(square));
    CGContextDrawLinearGradient(context, gradient, startPoint, endPoint, 0);
    CGGradientRelease(gradient), gradient = NULL;

## Kudos

* I'm using colors listed on [ios7colors.com](http://ios7colors.com)
* I got the idea to make an extension from Class Lange's [iOS7Colors](https://github.com/claaslange/iOS7Colors)
* I got the idea to add gradients from Jason Grandelli's [KXKiOS7ColorsAndGradients](https://github.com/jgrandelli/KXKiOS7ColorsAndGradients)
* I got the idea for the macros from Tomer Shiri's [Objective-C-Generics](https://github.com/tomersh/Objective-C-Generics)

## License

MIT License
