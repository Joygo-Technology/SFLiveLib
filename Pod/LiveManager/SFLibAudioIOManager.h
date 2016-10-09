//
//  SFLibAudioIOManager.h
//  LiveManager
//
//  Created by 朱盛雄 on 16/8/1.
//  Copyright © 2016年 Sunniwell. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "SFLibAudioIOEngineMarco.h"

@interface AudioPlayoutBufferIndex : NSObject

@property (nonatomic, assign) NSInteger index;

@property (nonatomic, assign) BOOL isUsed;

@end

@interface SFLibAudioIOManager : NSObject

+ (id)sharedInstance;

- (void)startAudioIOEngine;

- (void)stopAudioIOEngine;

- (void)resetAudioIOEngine;

- (void)openAudioRecord;

- (void)openAudioPlay;

- (void)openAudioMutedRecord;

- (void)closeAudioRecord;

- (void)closeAudioPlay;

- (void)closeAudioMutedRecord;

//if playing, return true
- (BOOL)getAudioPlayStatus;

//if recording, return ture
- (BOOL)getAudioRecordStatus;

//
- (BOOL)isPushBufferCompletion;

@end
