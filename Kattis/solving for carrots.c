//
//  main.c
//  solving for carrots
//
//  Created by Imane Chkoukout on 4/9/16.
//  Copyright © 2016 Imane Chkoukout. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char description[100];
    int count, carrots, i;
    scanf("%d %d", &count, &carrots);
    for (i=0; i<count; i++) {
        scanf("%s", description);
    }
    printf("%d\n", carrots);
    return 0;
    
    
}