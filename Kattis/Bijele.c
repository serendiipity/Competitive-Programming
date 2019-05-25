//
//  main.c
//  Bijele
//
//  Created by Imane Chkoukout on 5/16/16.
//  Copyright © 2016 Imane Chkoukout. All rights reserved.
//

#include <stdio.h>

int main() {
    int input[6], i, model[] = {1,1,2,2,2,8};
    for(i=0; i<6; i++) {
        scanf("%d", &input[i]);
        input[i]=model[i]-input[i];
    }
    for (i=0; i<6; i++)
    printf("%d ", input[i]);
    return 0;
}

