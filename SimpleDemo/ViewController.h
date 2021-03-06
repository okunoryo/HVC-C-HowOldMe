/*
 * Copyright (C) 2014 OMRON Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  ViewController.h
//  SimpleDemo
//

#import <UIKit/UIKit.h>

#import "../SDK/HVC_BLE.h"
#import <AudioToolbox/AudioServices.h>


@interface ViewController : UIViewController <HVC_Delegate>
{
    CFURLRef soundURL;
    SystemSoundID soundID;
    CFURLRef soundURL2;
    SystemSoundID soundID2;
    CFURLRef soundURL3;
    SystemSoundID soundID3;
    CFURLRef soundURL4;
    SystemSoundID soundID4;
}


@property (weak, nonatomic) IBOutlet UIButton *pushbutton;
- (IBAction)pushButton:(UIButton *)sender;
@property (weak, nonatomic) IBOutlet UIButton *btnExecution;
- (IBAction)btnExecute_click:(UIButton *)sender;

@property (weak, nonatomic) IBOutlet UITextView *ResultTextView;

@property (weak, nonatomic) IBOutlet UILabel *infomation;

@property (weak, nonatomic) IBOutlet UIImageView *wave;

@property (weak, nonatomic) IBOutlet UIImageView *myImageView;

@property (weak, nonatomic) IBOutlet UIButton *connectButton;

@property (weak, nonatomic) IBOutlet UIButton *startButton;


@property(readwrite) CFURLRef soundURL;
@property(readonly) SystemSoundID soundID;




@end

