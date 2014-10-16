//
//  BNRImageStore.m
//  Homepwner
//
//  Created by Kevin Candelaria on 10/16/14.
//  Copyright (c) 2014 Kevin Candelaria. All rights reserved.
//

#import "BNRImageStore.h"

@interface BNRImageStore ()
@property (nonatomic, strong) NSMutableDictionary *dictionary;
@end

@implementation BNRImageStore
+ (instancetype)sharedStore
{
    static BNRImageStore *sharedStore = nil;
    
    if (!sharedStore){
        sharedStore = [[self alloc] initPrivate];
    }
    return sharedStore;
}

- (instancetype) init
{
    @throw [NSException exceptionWithName:@"Singleton" reason:@"Use +[BNRImageStore sharedStore]" userInfo:nil];
    return nil;
}

- (instancetype)initPrivate
{
    self = [super init];
    if(self){
        _dictionary = [[NSMutableDictionary alloc] init];
    }
    return self;
}

- (void)deleteImageForKey:(NSString *)key
{
    if(!key){
        return;
    }
    [self.dictionary removeObjectForKey:key];
}

- (void)setImage:(UIImage *)image forKey:(NSString *)key
{
    self.dictionary[key] = image;
}

- (UIImage *)imageForKey:(NSString *)key
{
    return self.dictionary[key];
}
@end
