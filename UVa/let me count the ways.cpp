#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int coins[] = {1, 5, 10, 25, 50};
long long dp[5][30001];

long long ways(int i, int a) {
	if (a == 0) 
		return 1; 
	if (i == 5 || a < 0)
		return 0;
	if (dp[i][a] != -1)
		return dp[i][a];
	return dp[i][a] = ways(i, a - coins[i]) + ways(i + 1, a);
}

int main() {
	int a;
	while (cin >> a) {
		memset(dp, -1, sizeof(dp));
		long long w = ways(0, a);
		if (w == 1) 
			cout << "There is only 1 way to produce " << a << " cents change." << endl;
		else 
			cout << "There are " << w << " ways to produce " << a << " cents change." << endl;
	}
	return 0;
}