//
//  ViewController.h
//  NodeClient
//
//  Created by Dhaval Shah on 8/12/14.
//  Copyright (c) 2014 Dhaval Shah. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <NSURLConnectionDelegate>
{
    NSMutableData *_responseData;
}
@end
