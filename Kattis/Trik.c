#include <stdio.h>
#include <string.h>

int main(void) {
    char string[51];
    int index = 1, count;
    scanf("%s", string);
    for(count=0; count<=strlen(string); count++) {
        if (index == 1) {
            switch(string[count]) {
                case 'A' :
                    index++; break;
                case 'C' :
                    index+=2; break;
            }
        }
        else if (index==2) {
            switch(string[count]) {
                case 'B' :
                    index++; break;
                case 'A' :
                    index--; break;
            }
        }
        else {
            switch(string[count]) {
                case 'B' :
                    index--; break;
                case 'C' :
                    index-=2; break;
            }
        }
    }
    printf("%d\n", index);
    return 0;
}