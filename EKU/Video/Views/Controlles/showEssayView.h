//
//  showEssayView.h
//  EKU
//
//  Created by 李瑶 on 15/12/15.
//  Copyright © 2015年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TYHShowView.h"
@interface showEssayView : UIView<TYHShowViewWillShow>
-(void)showContent:(NSString*)str;
@end
