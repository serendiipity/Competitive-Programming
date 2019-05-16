#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int prices[1001], weights[1001];
int dp[1001][1001];
int o;

int knapsack(int i, int r) {
	if (dp[i][r] != -1)
		return dp[i][r];
	if (i == o || r <= 0)
		return 0; 
	if (weights[i] <= r)
		return dp[i][r] = max(knapsack(i+1, r), knapsack(i+1, r-weights[i]) + prices[i]);
	else 
		return dp[i][r] = knapsack(i+1, r);
}

int main() {
	int t; cin >> t; 
	while (t--) {
		cin >> o; 
		memset(dp, -1, sizeof(dp));
		for (int i = 0; i < o; i++) {
			int p, w; cin >> p >> w; 
			prices[i] = p;
			weights[i] = w;
		}
		int g; cin >> g;
		int total = 0;
		for (int j = 0; j < g; j++) {
			int m; cin >> m;
			total += knapsack(0, m);
		}
		cout << total << endl;
	}
	return 0;
}