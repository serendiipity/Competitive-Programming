#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int total = n * n;
	int matrix[n][n];
	int i = 0, j = 0, c = 0;
	
	while (i < n) {
		cin >> matrix[i][j];
		if (i) matrix[i][j] += matrix[i-1][j];
		if (j) matrix[i][j] += matrix[i][j-1];
		if (i && j) matrix[i][j] -= matrix[i-1][j-1];
		j == n - 1 ? j = 0, i++ : j++;
	}
	
	int max_sum = INT_MIN, rect;
	for (int i = 0; i < n; i++) // upper row 
		for (int j = i; j < n; j++) {  // lower row 
			for (int x = 0; x < n; x++) // leftmost column
				for (int y = x; y < n; y++) { // rightmost column
					rect = matrix[j][y];
					if (i) rect -= matrix[i-1][y]; 
					if (x) rect -= matrix[j][x-1];
					if (x > 0 && i > 0) rect += matrix[i-1][x-1];
					if (rect > max_sum)
						max_sum = rect;
				}
		}
	cout << max_sum << endl;
	
	return 0;
}