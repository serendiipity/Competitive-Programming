//
//  main.c
//  toilet seat
//
//  Created by Imane Chkoukout on 4/9/16.
//  Copyright © 2016 Imane Chkoukout. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char policy[1000];
    int n, ad1=0, ad2=0, ad3=0;
    scanf("%s", policy);
    
    /* for the first policy (always leave the seat up) */
     if(policy[0]=='D') {
        if(policy[1]=='D')
            ad1++;
        else if(policy[1]=='U')
            ad1++;
    }
    
    else if(policy[0]=='U') {
        if(policy[1]=='D')
            ad1+=2;
    }

    for(n=2;n<strlen(policy); n++) {
                if(policy[n]=='D')
            ad1+=2;
            
    }

    /* for the second policy (always leave the seat down) */
    if(policy[0]=='D') {
        if(policy[1]=='U')
            ad2+=2;
    }
    else if(policy[0]=='U') {
        if (policy[1]=='D')
            ad2++;
        else if(policy[1]=='U')
            ad2++;
    }
    
    for(n=2; n<strlen(policy); n++) {
       
        if(policy[n]=='U')
            ad2+=2;
    }
    
    /* for the third policy (leave the seat as you would like to find it) */
    for(n=1; n<=strlen(policy);n++) {
            if(policy[n]=='U') {
                if(policy[n-1]=='D')
                    ad3+=1;
            }
            if(policy[n]=='D') {
                if(policy[n-1]=='U')
                    ad3+=1;
            }
    }
     
    printf("%d\n", ad1);
    printf("%d\n", ad2);
    printf("%d\n", ad3);
    return 0;
    
    
}