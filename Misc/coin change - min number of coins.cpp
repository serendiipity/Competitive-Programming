#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <int> coins;
int dp[20][100];

int solution(vector <int> coins, int n) {
	for (int i = 0; i < coins.size(); i++)
		dp[i][0] = 0;
	for (int i = 0; i < coins.size(); i++) {
		for (int j = 1; j <= n; j++) {
			if (j < coins[i])
				dp[i][j] = dp[i-1][j];
			else if (i > 0)
				dp[i][j] = min(dp[i-1][j], 1 + dp[i][j - coins[i]]);
			else 
				dp[i][j] = 1 + dp[i][j - coins[i]];
		}
	}
	
	return dp[coins.size() - 1][n];
}

int main() {
	int c, n; cin >> c >> n;
	for (int i = 0; i < c; i++) {
		int x; cin >> x;
		coins.push_back(x);
	}
	cout << solution(coins, n) << endl;
	for (int i = 0; i < coins.size(); i++) {
		for (int j = 0; j <= n; j++)
			cout << dp[i][j] << " ";
		cout << endl;
	}
		
	return 0;
}