//
//  BNRImageStore.h
//  Homepwner
//
//  Created by Kevin Candelaria on 10/16/14.
//  Copyright (c) 2014 Kevin Candelaria. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BNRImageStore : NSObject
+ (instancetype)sharedStore;

- (void)setImage:(UIImage *)image forKey:(NSString *)key;
- (UIImage *)imageForKey:(NSString *)key;
- (void)deleteImageForKey:(NSString *)key;
@end
