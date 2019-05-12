#include <iostream>
#include <vector>
using namespace std;

int W[100][100];
int count;

int dp_solution(vector <int> coins, int m, int n) {
	if (m <= 0 && n > 0)
		return 0;
	if (n < 0)
		return 0;
	if (n == 0 && m > 0)
		return W[m][n] = 1;
	if (W[m][n] != -1)
		return W[m][n];
	W[m][n] = dp_solution(coins, m - 1, n) + dp_solution(coins, m, n - coins[m-1]);
	return W[m][n];
}

void init() {
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			W[i][j] = -1;
}

int main() {
	int n, k, d; cin >> n >> k >> d;
	count = 0;
	vector <int> coins;
	for (int i = 1; i <= k; i++)
		coins.push_back(i);
	init();
	cout << dp_solution(coins, k, n) << endl;
	return 0;
}