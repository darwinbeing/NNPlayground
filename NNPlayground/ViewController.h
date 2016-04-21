//
//  ViewController.h
//  NNPlayground
//
//  Created by 杨培文 on 16/4/21.
//  Copyright © 2016年 杨培文. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NNPlayground-Swift.h"

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet HeatMapView *heatMap;
@property (weak, nonatomic) IBOutlet UILabel *outputLabel;

@end

