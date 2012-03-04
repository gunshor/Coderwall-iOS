//
//  ProfileViewController.h
//  Coderwall
//
//  Created by Will on 18/02/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StatsViewController.h"

@interface ProfileViewController : UIViewController
{
    IBOutlet UILabel *fullName;
    IBOutlet UILabel *summary;
    IBOutlet UIImageView *avatar;
    IBOutlet UIImageView *profileBg;
    IBOutlet UITableView *statsTable;
}

@end