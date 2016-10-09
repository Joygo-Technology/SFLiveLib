//
//  SFLibMoviePlayer.h
//  rtmpTest
//
//  Created by Sunniwell on 9/13/16.
//  Copyright © 2016 Sunniwell. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, SFLibPlayerStatus) {
    SFLibPlayerUnknown = 10,
    SFLibPlayerPlaying = 11,
    SFLibPlayerPause = 12,
    SFLibPlayerStop = 13,
    SFLibPlayerFail = 14,
};

@class SFLibMoviePlayer;

@protocol SFLibMoviePlayerDelegate <NSObject>

@optional
- (void)playbackDidBegin:(SFLibMoviePlayer *)player;
//获取总时间
- (void)playerDurationAvaliable:(SFLibMoviePlayer *)player duration:(NSTimeInterval)duration;

//播放可以继续
- (void)playbackLikelyToKeepUp:(SFLibMoviePlayer *)player;

//同步时间变化, 单位:秒
- (void)player:(SFLibMoviePlayer *)player syncScrubberTime:(NSTimeInterval)time;

//播放卡顿时通知
- (void)playerPlayBackInterrupt:(SFLibMoviePlayer *)player;

//播放完成
- (void)playbackDidFinish:(SFLibMoviePlayer *)player;

//播放出错
- (void)playbackOccurError:(SFLibMoviePlayer *)player;
@end

@interface SFLibMoviePlayer : UIView

//播放状态
@property (nonatomic, assign, readonly)SFLibPlayerStatus status;

@property (nonatomic,weak) id<SFLibMoviePlayerDelegate> delegate;

@property (atomic,assign) BOOL isBeginOrFinish;

@property (nonatomic,assign) BOOL isPlayStart;

@property (nonatomic, assign) int index;

//总时长
@property (nonatomic,assign,readonly) NSTimeInterval duration;

//目前播放时间
@property (nonatomic, assign,readonly)NSTimeInterval currentTime;

//播放URL
- (void)playWithUrlStr:(NSString *)url;

//播放URL
- (void)playWithUrlStr:(NSString *)url withIndex:(int)index;

//int datatype, int64_t arg0, int64_t arg1
- (void)dealPlayer:(int)dataType arg0:(int64_t)arg0 arg1:(int64_t)arg1;


- (void)play;

- (void)pause;

- (void)stop;

- (void)resetAudio;

- (void)replay;

//seek
- (void)seekToTime:(NSTimeInterval)time;

@end
