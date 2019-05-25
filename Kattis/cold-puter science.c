//
//  main.c
//  Cold-puter science
//
//  Created by Imane Chkoukout on 7/29/16.
//  Copyright © 2016 Imane Chkoukout. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int temp, count, total=0, i;
    
    scanf("%d", &count);
    for (i=0; i<count; i++) {
        scanf("%d", &temp);
        if(temp<0)
            total++;
    }
    printf("%d", total);
    return 0;
}