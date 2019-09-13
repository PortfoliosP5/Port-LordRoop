//
//  PythagoreanLabRoop.c
//  RoopPortfolio
//
//  Created by Vij, Jagroop on 9/13/19.
//  Copyright © 2019 Vij, Jagroop. All rights reserved.
//

#include "PythagoreanLabRoop.h"
#include <math.h>

int pythagoran(void) {
    // insert code here...
    double SideA;
    double SideB;
    double SideC;
    printf("Please enter Side A \n");
    scanf("%lf", &SideA);
    printf("Please enter Side B \n");
    scanf("%lf", &SideB);
    SideC = (SideA)*(SideA )+(SideB)*(SideB);
    SideC = sqrt (SideC) ;
    printf ("%lf\n", SideC);
    return 0;
}
