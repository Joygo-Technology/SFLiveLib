//
//  SUFileUploader.h
//  SFLiveLib
//
//  Created by 李博 on 2017/3/6.
//  Copyright © 2017年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, SUFileType)
{
    SUFileTypeImage = 1,
    SUFlieTypeOther = 2,
};

@interface SUFileUploader : NSObject

- (void)uploadFile:(NSData *)file withType:(SUFileType)type completion:(void(^)(NSString* fileUrl, NSError* error))completion;

@end
