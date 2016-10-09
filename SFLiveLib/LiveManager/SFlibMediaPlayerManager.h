//
//  CXMediaPlayer.h
//  kxmovie
//
//  Created by Sunniwell on 5/27/16.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libavutil/opt.h"
#include "libavutil/samplefmt.h"
#include "libavutil/channel_layout.h"
#import "OpenGLView20.h"


@interface SFlibMediaPlayerManager : NSObject

@property (nonatomic, assign) BOOL isNeedRender;

+ (SFlibMediaPlayerManager *)sharedInstance;

- (void *)createPlayer;

//- (void)mediaPlayer_setSurfaceView:(void *)player surfaceMovieview:(KxMovieGLView *)surfaceView;

- (void)mediaPlayer_setSurfaceView:(void *)player surfaceOpenGLView:(OpenGLView20 *)surfaceView;

//- (void)mediaPlayer_setSurfaceView:(void *)player surfaceview:(UIImageView *)surfaceView;

- (int)mediaplayer_start:(void *)player withUrl:(NSString *)url withIndex:(int)index inPlayer1:(void *)player1;

- (int)mediaplayer_start:(void *)player withUrl:(NSString *)url inPlayer1:(void *)player1;

- (int)mediaplayer_get_video_width:(void *)player;

- (int)mediaplayer_get_video_Height:(void *)player;

- (int64_t)mediaplayer_get_video_Duration:(void *)player;

- (int64_t)mediaplayer_get_current_Time:(void *)player;

- (int)mediaPlayer_play:(void *)player;

- (int)mediaPlayer_pause:(void *)player;

- (int)mediaPlayer_seek:(void *)player seekTime:(int64_t)seekTime;

- (void)mediaplayer_resetAudio:(void *)player;

- (void)mediaplayer_stop:(void *)player;

- (void)mediaplayer_destroy:(void *)player;

- (bool)mediaPlayerCheckNeedStopWithUrl:(NSString *)url;

//+ (void)imageplayerRender:(UIImageView *)imageview frame:(AVFrame *)frame;

//+ (void)imageplayerRenderWithMovieView:(KxMovieGLView *)imageview frame:(AVFrame *)frame;

+ (void)imageplayerRenderWithGLView:(OpenGLView20 *)imageview frame:(AVFrame *)frame;

@end
