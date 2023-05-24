
//
// StyleDictionaryColor.m
//

// Do not edit directly
// Generated on Wed, 24 May 2023 01:50:50 GMT


#import "StyleDictionaryColor.h"

@implementation StyleDictionaryColor

+ (UIColor *)color:(StyleDictionaryColorName)colorEnum{
  return [[self values] objectAtIndex:colorEnum];
}

+ (NSArray *)values {
  static NSArray* colorArray;
  static dispatch_once_t onceToken;

  dispatch_once(&onceToken, ^{
    colorArray = @[
#81B64C,
#5D9948,
#FA412D,
#B22929,
#81B64C,
#5D9948,
#FA412D,
#B22929,
#81B64C,
#5D9948,
#FA412D,
#B22929
    ];
  });

  return colorArray;
}

@end
