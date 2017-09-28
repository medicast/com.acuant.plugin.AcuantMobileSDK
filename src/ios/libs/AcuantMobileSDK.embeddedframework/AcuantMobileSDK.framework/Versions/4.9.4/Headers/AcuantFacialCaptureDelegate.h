//
//  AcuantFacialCaptureDelegate.h
//  AcuantiOSMobileSDK
//
//  Created by Tapas Behera on 4/20/16.
//  Copyright © 2016 DB-Interactive. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AcuantFacialCaptureDelegate <NSObject>
@required
-(void)didFinishFacialRecognition:(UIImage*)image;
-(void)didCancelFacialRecognition;
@end
