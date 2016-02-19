//
//  PDKUtils.h
//  Pods
//
//  Created by Alexey Hippie on 2/20/16.
//
//

#import <Foundation/Foundation.h>

#define PDKSaveString(astring) [PDKUtils safeString:astring]

@interface PDKUtils : NSObject

+ (NSString *)safeString:(NSString *)aString;

@end
