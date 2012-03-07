//
//  RACQueryable.h
//  ReactiveCocoa
//
//  Created by Josh Abernathy on 3/2/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol RACQueryable <NSObject>

- (id<RACQueryable>)where:(BOOL (^)(id x))predicate;
- (id<RACQueryable>)select:(id (^)(id x))block;
- (id<RACQueryable>)throttle:(NSTimeInterval)interval;
+ (id<RACQueryable>)combineLatest:(NSArray *)queryables;
- (id<RACQueryable>)toSequence:(id)property;
- (id<RACQueryable>)toObject:(NSObject *)object keyPath:(NSString *)keyPath;
+ (id<RACQueryable>)combineLatest:(NSArray *)queryables;
+ (id<RACQueryable>)merge:(NSArray *)queryables;
- (id<RACQueryable>)distinctUntilChanged;
+ (id<RACQueryable>)zip:(NSArray *)queryables;
- (id<RACQueryable>)selectMany:(id (^)(id<RACQueryable> x))selectMany;
- (id<RACQueryable>)take:(NSUInteger)count;

@end
