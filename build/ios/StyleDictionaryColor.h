
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 24 May 2023 01:50:50 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorFgSuccessDark,
ColorFgSuccessLight,
ColorFgDangerDark,
ColorFgDangerLight,
ColorBgSuccessDark,
ColorBgSuccessLight,
ColorBgDangerDark,
ColorBgDangerLight,
ColorBorderSuccessDark,
ColorBorderSuccessLight,
ColorBorderDangerDark,
ColorBorderDangerLight
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
