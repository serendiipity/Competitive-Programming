//
//  main.c
//  problem 2
//
//  Created by Imane Chkoukout on 4/2/16.
//  Copyright © 2016 Imane Chkoukout. All rights reserved.
//

#include <stdio.h>

 int main() {
    
     int count=0, n, array[42]={}, nn=0, comp, counter=0, i;
     while (count<10) {
        scanf("%d", &n);
         array[nn]=n%42;
         nn++;
         count++;
     }
        
        for (comp=0; comp<42; comp++) {
            for (i=0; i<nn; i++) {
                if (array[i]==comp)
                    break;
            }
            if(i != nn)
                counter++;
    
        }
     printf("%d\n", counter);
     
     
    
    
    return 0;
 }
