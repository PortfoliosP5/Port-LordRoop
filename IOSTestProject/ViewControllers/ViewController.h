//
//  ViewController.h
//  IOSTestProject
//
//  Created by Vij, Jagroop on 10/10/19.
//  Copyright © 2019 Vij, Jagroop. All rights reserved.
//

#import <UIKit/UIKit.h>

// Classic C style defines for Operator control
#define PLUS 0
#define MINUS 1
#define MULTIPLY 2
#define DIVIDE 3
#define MODULO 4

@interface ViewController : UIViewController
/* Section 1: Classic C style variables to support calculation */
{
    double arg1;
    int mathOp;
    double arg2;
    double calcAnswer;
}

/* Section 2: Obj-C style variables to support Calc area management  */
@property Boolean initialCalcAreaInputState;
// Note: Obj-C helps with string memory management:  1. retention "strong"  2. multi-thread "nonatomic"
@property (strong, nonatomic) NSString *calcAreaDefault;
@property (strong, nonatomic) NSString *calcAreaNumber;

/* Section 3: Obj-C style to support Interfacce Builder Outlet for Calc area */
@property (strong, nonatomic) IBOutlet UILabel *calcAreaLabel;

@end

