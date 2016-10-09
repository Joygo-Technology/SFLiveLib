//
//  H264HwEncoderImpl.h
//  h264v1
//
//  Created by Ganvir, Manish on 3/31/15.
//  Copyright (c) 2015 Ganvir, Manish. All rights reserved.
//

#import <Foundation/Foundation.h>

@import AVFoundation;

@interface SFLibH264HwEncoderImpl : NSObject

@property (nonatomic,assign,readonly) BOOL isFinish;

- (void)initWithConfigurationWithBitRate:(int)frameBitrate frameRate:(int)frameRate;
- (void) initEncode:(int)width  height:(int)height;
- (void) encode:(CMSampleBufferRef )sampleBuffer;
- (void) encodeCVImageBufferRef:(CVImageBufferRef )imageBuffer;
- (void) End;
- (void) changeEncode:(int)frameBitRate;


@property (weak, nonatomic) NSString *error;

@end
