#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long dp[5][7500];
int coins[] = {50, 25, 10, 5, 1};

long long ways(int i, int a) {
	if (a == 0)
		return 1; 
	if (a < 0 || i == 5)
		return 0; 
	if (dp[i][a] != -1)
		return dp[i][a];
	
	return dp [i][a] = ways(i, a - coins[i]) + ways(i + 1, a);
}

int main() {
	int amount;
	while (cin >> amount) {
		memset(dp, -1, sizeof(dp));
		cout << ways(0, amount) << endl;
	}
	return 0;
}