//
//  BNRItem.h
//  RandomItems
//
//  Created by Kevin Candelaria on 10/14/14.
//  Copyright (c) 2014 Kevin Candelaria. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRItem : NSObject
{
    NSString *_itemName;
    NSString *_serialNumber;
    int _valueInDollars;
    NSDate *_dateCreated;
    NSString *_imageKey;
}
+ (instancetype)randomItem;
// Designated initializer for BNRItem
- (instancetype)initWithItemName:(NSString *)name valueInDollars:(int)value serialNumber:(NSString *)sNumber;

- (instancetype)initWithItemName:(NSString *)name;

- (void)setItemName:(NSString *)str;
- (NSString *)itemName;

- (void)setSerialNumber:(NSString *)str;
- (NSString *)serialNumber;

- (void)setValueInDollars:(int)v;
- (int)valueInDollars;

- (NSDate *)dateCreated;

- (void)setImageKey:(NSString *)key;
- (NSString *)imageKey;

@end
