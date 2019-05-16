#include <iostream>
#include <bits/stdc++.h>
#define m 1010
using namespace std;

void init(int memo[][m]) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < m; j++)
			memo[i][j] = 0;
}

int LCS(string a, string b, int A, int B, int memo[][m]) {
	if (A == 0 || B == 0)
		return 0;
	if (memo[A - 1][B - 1] != 0) 
		return memo[A - 1][B - 1]; 
	if (a[A - 1] == b[B - 1])
		memo[A - 1][B - 1] = 1 + LCS(a, b, A - 1, B - 1, memo);
	else 
		memo[A - 1][B - 1] = max(LCS(a, b, A, B - 1, memo), LCS(a, b, A - 1, B, memo));
	return memo[A - 1][B - 1];
}

int main() {
	string a;
	while (cin >> a) {
		string b; cin >> b; 
		int A = a.size(), B = b.size();
		int memo[m][m];
		init(memo);
		cout << LCS(a, b, A, B, memo) << endl;
	}
	return 0;
}