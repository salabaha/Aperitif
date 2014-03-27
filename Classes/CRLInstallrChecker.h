//
//  CRLInstallrChecker.h
//  CRLInstallrChecker
//
//  Created by Tim Clem on 3/26/14.
//  Copyright (c) 2014 Crush & Lovely. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CRLInstallrAppData;


@interface CRLInstallrChecker : NSObject

@property (nonatomic, copy) NSString *appKey;

+(instancetype)sharedInstance;

-(void)checkNow;

@end
