#include <stdio.h>
#include <string.h> 

char A[1001], B[1001];
int LCS[1001][1001];

int main() {
	int i, j; 
	while (gets(A)) {
		gets(B);
		
		int a = strlen(A), b = strlen(B);
		memset(LCS, 0, sizeof(LCS));

		for (i = 1; i <= a; i++) {
			for (j = 1; j <= b; j++) {
				if (A[i-1] == B[j-1])
					LCS[i][j] = LCS[i-1][j-1] + 1;
				else if (LCS[i-1][j] > LCS[i][j-1])
					LCS[i][j] = LCS[i-1][j];
				else
					LCS[i][j] = LCS[i][j-1];
			}
		}
		printf("%d\n", LCS[a][b]);

	}
	
	return 0;	
}