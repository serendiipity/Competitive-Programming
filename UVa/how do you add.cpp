#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000
int dp[101][101];

long long ways(int n, int k) {
	if (dp[n][k] != -1)
		return dp[n][k];
	if (k == 1) 
		return 1; 
	long long sum = 0;
	for (int i = 0; i <= n; i++)
		sum += ways(n - i, k - 1);
	return dp[n][k] = sum % mod;
}

int main() {
	int n, k; 
	while (cin >> n >> k) {
		if (n == 0 && k == 0)
			break;
		memset(dp, -1, sizeof(dp));
		cout << ways(n, k) << endl;
	}
	return 0;
}