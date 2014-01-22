//
//  SMUtilities.h
//  SwipePicture
//
//  Created by Giovanni on 12/17/13.
//  Copyright (c) 2013 LimeBamboo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSKeychain.h"

@interface SMUtilities : NSObject

+ (NSString*)getDeviceIdForAppId:(NSString*)appID;
+ (NSString*)generateDeliveryUUID;

@end