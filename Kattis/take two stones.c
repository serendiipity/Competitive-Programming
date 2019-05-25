#include <stdio.h> 

int main() {
    
    int n, i;
    
    scanf("%d", &n);
    
    while (n>2)
        n -= 2;
    
    if (n == 1)
        printf("Alice");
    else
        printf("Bob");
    
    return 0;
    
    
        
}