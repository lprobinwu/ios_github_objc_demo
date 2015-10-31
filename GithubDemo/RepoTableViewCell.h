//
//  RepoTableViewCell.h
//  GithubDemo
//
//  Created by Robin Wu on 10/30/15.
//  Copyright © 2015 codepath. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RepoTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *forksImageView;
@property (weak, nonatomic) IBOutlet UIImageView *starsImageView;
@property (weak, nonatomic) IBOutlet UIImageView *ownerAvatarImageView;
@property (weak, nonatomic) IBOutlet UILabel *starsLabel;
@property (weak, nonatomic) IBOutlet UILabel *forksLabel;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *userNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;

@end
