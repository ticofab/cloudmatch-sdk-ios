//
//  GMMatcheeLeftMessage.h
//  GestureMatchSDK
//
//  Created by Giovanni on 12/11/13.
//  Copyright (c) 2013 LimeBamboo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GMMatcheeLeftMessage : NSObject

@property (nonatomic, assign) NSInteger mSenderMatchee;
@property (nonatomic, strong) NSString* mReason;
@property (nonatomic, strong) NSString* mGroupId;

+ (instancetype)modelObjectWithDictionary:(NSDictionary*)dict;
- (instancetype)initWithDictionary:(NSDictionary*)dict;


@end
