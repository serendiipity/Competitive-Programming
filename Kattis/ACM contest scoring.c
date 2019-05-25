//
//  main.c
//  ACM contest scoring
//
//  Created by Imane Chkoukout on 5/17/16.
//  Copyright © 2016 Imane Chkoukout. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    int solved = 0, attempts[26], times[26], time = 0, i, score = 0, flag[26], duration = 0;
    char result[26][5], letter;
    
    for (i=0; i<26; i++) {
        attempts[i]=0;
        flag[i] = 0;
        times[i] = 0;
    }
    
    scanf("%d", &time);
    while (time != -1) {
        getchar();
        scanf("%c", &letter);
        scanf("%s", result[letter - 'A']);
        if (strcmp(result[letter - 'A'], "wrong")==0 && flag[letter - 'A'] != 1) {
            attempts[letter - 'A']++;
            times[letter - 'A'] += time;
        }
        else if(strcmp(result[letter - 'A'], "right")==0 && flag[letter - 'A'] != 1) {
            flag[letter - 'A'] = 1;
            duration += time;
            score += attempts[letter - 'A']*20;;
            solved++;
        }
        scanf("%d", &time);
        
    }
    
    score += duration;
    
    if (solved == 0)
        score = 0;
    
    printf("%d %d\n", solved, score);
    return 0;
}