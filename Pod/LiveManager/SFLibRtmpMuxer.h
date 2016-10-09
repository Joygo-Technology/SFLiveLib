//
//  SFLibRtmpMuxer.h
//  TsMutexrMake
//
//  Created by Sunniwell on 3/24/16.
//  Copyright © 2016 Sunniwell. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol rtmpMuxerDelegate <NSObject>

@optional
- (void)rtmpMuxerDisconnect;

@end

typedef enum {
    BitRateSmooth    = 350 * 1000,
    BitRateStandard  = 500 * 1000,
    BitRateHigh      = 700 * 1000,
    BitRateHD        = 1000 * 1000
} BitRateQuality;

@interface SFLibRtmpMuxer : NSObject

@property (nonatomic ,weak) id<rtmpMuxerDelegate>delegate;

+ (instancetype)sharedInstance;

- (BOOL)encoder_muxerInit:(NSString *)urlStr OutFormat:(NSString *)outFmt width:(int32_t)width heigth:(int32_t)height videoFrameRate:(int32_t)frameRate videoBitRate:(int32_t)videobitRate videoFmt:(int32_t)videoFmt audioSampleRate:(int32_t)audioSampleRate audioChannel:(int32_t)audioChnl is16Bit:(BOOL) is16Bit;

- (int )encoder_muxerPutData:(int)type dataType:(int)data_type data:(UInt8 *)data size:(int32_t) data_size;

- (BOOL)encoder_muxerExit;

//- (void)onEnqueueVideoData:(UInt8 *)data;

//- (void)startPutVideoWithFrameSize:(long)size;

- (int)getCurrentUploadStatus;

- (int)getVideoSuccessFrameCount;

- (BOOL)isReady;

- (uint64_t)getSucceedSendData;

- (uint64_t)getTotalDataLength;

- (void)setNewUploadUrl:(NSString *)uploadUrl;

@end
