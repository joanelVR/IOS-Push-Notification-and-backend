//
//  ViewController.h
//  IosPushNotification
//
//  Created by Joanel Vasquez on 7/11/18.
//  Copyright © 2018 infosys. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CommonCrypto/CommonHMAC.h>
#import "HubInfo.h"


@interface ViewController : UIViewController<UITextFieldDelegate, NSXMLParserDelegate>
{
    NSXMLParser *xmlParser;
}

@property (weak, nonatomic) IBOutlet UITextField *notificationMessage;
@property (weak, nonatomic) IBOutlet UILabel *sendResults;

@property (copy, nonatomic) NSString *statusResult;
@property (copy, nonatomic) NSString *currentElement;

@end

