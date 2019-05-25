#include <stdio.h>
#include <string.h>

int main(void) {
    char correction[100], adrian[100], bruno[100], goran[100];
    int i, n, A = 0, B = 0, G = 0, max;
    
    /* Adrian */
    for (i=0; i<100; i=i+3) {
        adrian[i]='A';
        adrian[i+1]='B';
        adrian[i+2]='C';
    }
    
    /* Bruno */
    for (i=0; i<100; i=i+4) {
        bruno[i]='B';
        bruno[i+1]='A';
        bruno[i+2]='B';
        bruno[i+3]='C';
    }
    
    /* Goran */
    for (i=0; i<100; i=i+6) {
        goran[i]='C';
        goran[i+1]='C';
        goran[i+2]='A';
        goran[i+3]='A';
        goran[i+4]='B';
        goran[i+5]='B';
    }
    
    scanf("%d", &n);
    scanf("%s", correction);
    
    for (i=0; i<n; i++) {
        if (correction[i]==adrian[i])
            A++;
        if (correction[i]==bruno[i])
            B++;
        if (correction[i]==goran[i])
            G++;
    }
    
    max = A;
    if (B>max)
        max = B;
    else if (G>max)
        max = G;
    
    printf("%d\n", max);
    
    if (A==max)
        printf("Adrian\n");
    if (B==max)
        printf("Bruno\n");
    if (G==max)
        printf("Goran\n");
    
    
    
    return 0;
    
    
}