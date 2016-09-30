//
//  SearchViewController.h
//  MovieApp
//
//  Created by AnthonyB on 29/09/2016.
//  Copyright © 2016 anto. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseController.h"
#import "Film.h"

@interface SearchViewController : BaseController <UISearchBarDelegate>
{
    NSString *noResultText;

}

@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;
@property (weak, nonatomic) IBOutlet UITableView *myTableView;
@property(strong, nonatomic) NSMutableArray *masterFilmList;

-(void)fetchData: (NSString *)parameters;
-(Film *)objectInListAtIndex: (NSUInteger)index;
@end
