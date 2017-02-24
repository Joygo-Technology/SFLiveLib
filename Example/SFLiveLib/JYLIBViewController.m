//
//  JYLIBViewController.m
//  SFLiveLib
//
//  Created by lee on 09/26/2016.
//  Copyright (c) 2016 lee. All rights reserved.
//

#import "JYLIBViewController.h"
#import <SFLiveLib/SFLiveLib.h>

@interface JYLIBViewController ()

@end

@implementation JYLIBViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [SFLiveLib setAppId:@"" appSecret:@"" serverAddrs:@[] authDelegate:nil];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
