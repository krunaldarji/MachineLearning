//
//  DetectImgVC.h
//  MachineLearning
//
//  Created by Darji, Krunal on 6/7/17.
//  Copyright © 2017 Krunal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetectImgVC : UIViewController<UINavigationControllerDelegate,UIImagePickerControllerDelegate>
@property (weak, nonatomic) IBOutlet UIImageView *imgview;
- (IBAction)selectimgBtnPressed:(UIButton *)sender;
@property (weak, nonatomic) IBOutlet UILabel *outputLbl;

@end
