//
//  main.c
//  oddities
//
//  Created by Imane Chkoukout on 4/10/16.
//  Copyright © 2016 Imane Chkoukout. All rights reserved.
//

#include <stdio.h>

int main() {
    int count, cases, array[100], i=0, n;
    scanf("%d", &cases);
    for(count=0; count<cases; count++) {
        scanf("%d", &n);
        array[i]=n;
        i++;
    }
    for (i=0; i<cases; i++) {
        if (array[i]%2==0)
            printf("%d is even\n", array[i]);
        else
            printf("%d is odd\n", array[i]);
    }
    return 0;
}