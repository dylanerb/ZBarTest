//
//  ZBarTestViewController.h
//  ZBarTest
//
//  Created by Dylan Erb on 11/12/11.
//  Copyright (c) 2011 MIT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZBarTestViewController : UIViewController
    // ADD: delegate protocol
    < ZBarReaderDelegate >
{
    UIImageView *resultImage;
    UITextView *resultText;
}
@property (nonatomic, retain) IBOutlet UIImageView *resultImage;
@property (nonatomic, retain) IBOutlet UITextView *resultText;
- (IBAction) scanButtonTapped;

@end
