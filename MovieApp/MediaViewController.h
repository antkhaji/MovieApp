//
//  MediaViewController.h/Users/ilabadmin/Development/IOS_Projects/MovieApp/MovieApp/Base.lproj/Main.storyboard
//  MovieApp
//
//  Created by AnthonyB on 29/09/2016.
//  Copyright © 2016 anto. All rights reserved.
//



#import <AVFoundation/AVFoundation.h>

#import <MediaPlayer/MediaPlayer.h>

#import <UIKit/UIKit.h>

@interface MediaViewController : UIViewController

{
    
    
    AVAudioPlayer *audioPlayer;
    
    
    
    MPMoviePlayerViewController *moviePlayer;
    
}

- (IBAction)playAudio:(id)sender;

- (IBAction)playVideo:(id)sender;

@end



