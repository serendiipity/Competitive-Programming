#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
	int n, i, j, sum, max;
	int arr[10002];
	while (scanf("%d", &n) == 1) {
		if (n == 0)
			break;
		for (i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		sum = 0;
		max = -1;
		for (i = 0; i < n; i++) {
			sum += arr[i];
			if (sum > max)
				max = sum; 
			if (sum < 0)
				sum = 0;
		}
		if (max > 0)
			printf("The maximum winning streak is %d.\n", max);
		else 
			printf("Losing streak.\n");
	}
	// your code goes here
	return 0;
}