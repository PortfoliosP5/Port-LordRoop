//
//  main.c
//  RoopPortfolio
//
//  Created by Vij, Jagroop on 9/13/19.
//  Copyright © 2019 Vij, Jagroop. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include "DataTypesIOLab.h"
#include "PythagoreanLabRoop.h"

int main(int argc, const char * argv[]) { //simple script to get user input to choose which lab they'd like
    int input, endOrNo, validInput;
    endOrNo = 0;
    
    while (endOrNo == 0) {
        validInput = 0;
        printf("Which lab do you want to run?\n");
        printf("[1] Pythagorean Lab\n[2] Data Types Lab\n[9] Exit\n");
        while (validInput == 0) {
            scanf("%d", &input);
            switch(input) {
                case 1:
                    validInput = 1;
                    //insert your functions here, you can copy paste this case code for each case
                    pythagoran();
                    break;
                case 2:
                    validInput = 2;
                    datatypes();
                    break;
                case 9:
                    printf("Done\n");
                    validInput = 9;
                    endOrNo = 1;
                    break;
                default:
                    printf("invalid input, try again\n");
                    break;
                    
            }
        }
    }
    
    return 0;
}


