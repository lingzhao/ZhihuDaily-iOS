//
//  Timeline.h
//  ZhihuDaily
//
//  Created by 杨弘宇 on 16/5/21.
//  Copyright © 2016年 Cyandev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Story.h"

@interface Timeline : NSObject

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *dateString;
@property (copy, nonatomic) NSArray<Story *> *stories;
@property (copy, nonatomic) NSArray<Story *> *topStories;

@end
