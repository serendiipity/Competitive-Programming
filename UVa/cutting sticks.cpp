#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int dp[52][52];
int cuts[52];
int n;

int cut(int l, int r) {
	if (r == l + 1)
		return 0;
	if (dp[l][r] != -1)
		return dp[l][r];
	int min = INT_MAX, val;
	for (int i = l + 1; i < r; i++) {
		val = cut(l, i) + cut(i, r) + cuts[r] - cuts[l];
		if (val < min)
			min = val;
	}
	return dp[l][r] = min;
}

int main() {
	int l; 
	while (cin >> l) {
		if (l == 0)
			break;
		memset(dp, -1, sizeof(dp));
		cin >> n;
		cuts[n+1] = l;
		for (int i = 1; i <= n; i++) {
			int c; cin >> cuts[i];
		}
		cout << "The minimum cutting is " << cut(0, n + 1) << '.' << endl;
	}
	return 0;
}