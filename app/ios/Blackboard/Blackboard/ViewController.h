//
//  ViewController.h
//  Blackboard
//
//  Created by Silmood on 1/2/17.
//  Copyright © 2017 Hipbyte. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (nonatomic) CGPoint lastPoint;
@property (nonatomic) CGFloat red;
@property (nonatomic) CGFloat green;
@property (nonatomic) CGFloat blue;
@property (nonatomic) CGFloat brush;
@property (nonatomic) CGFloat opacity;
@property (nonatomic) BOOL mouseSwiped;
@property (nonatomic) IBOutlet UIImageView *mainImage;
@property (nonatomic) IBOutlet UIImageView *tempDrawImage;
@end

