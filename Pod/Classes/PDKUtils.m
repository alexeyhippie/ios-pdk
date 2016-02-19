//
//  PDKUtils.m
//  Pods
//
//  Created by Alexey Hippie on 2/20/16.
//
//

#import "PDKUtils.h"

@implementation PDKUtils

+ (NSString *)safeString:(NSString *)aString {
    if (aString) {return aString;}
    else {return @"";}
}

@end
