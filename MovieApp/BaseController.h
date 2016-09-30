//
//  BaseController.h
//  MovieApp
//
//  Created by AnthonyB on 29/09/2016.
//  Copyright © 2016 anto. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseController : UIViewController

- (void)downloadImageWithURL:(NSURL *)url completionBlock:(void (^)(BOOL succeeded, UIImage *image))completionBlock;

@end
