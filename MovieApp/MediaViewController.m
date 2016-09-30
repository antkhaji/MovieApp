//
//  MediaViewController.m
//  MovieApp
//
//  Created by AnthonyB on 29/09/2016.
//  Copyright © 2016 anto. All rights reserved.
//

#import "MediaViewController.h"

@interface MediaViewController ()

@end

@implementation MediaViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/


- (IBAction)playAudio:(UIButton *)sender {
    
    
    
    // first create a path to an audio file.
    
    
    
    NSString *path =[[NSBundle mainBundle] pathForResource:@"Akube" ofType:@"mp3"];
    
    
    
    //initialize the path to th audio player
    
    
    
    audioPlayer =[[AVAudioPlayer alloc] initWithContentsOfURL:[NSURL fileURLWithPath:path] error: NULL];
    
    
    // PLAY
    
    
    
    [audioPlayer play];
    
    
    
}

- (IBAction)playVideo:(id)sender {
    
    
    
    NSString *path =[[NSBundle mainBundle] pathForResource:@"AHS" ofType:@"mp4"];
    
    
    
    // initialize the controller for the path.
    
    
    
    moviePlayer =[[MPMoviePlayerViewController alloc]initWithContentURL:[NSURL fileURLWithPath:path]];
    
    
    
    [self presentModalViewController:moviePlayer  animated: NO];
    
    
}


@end
