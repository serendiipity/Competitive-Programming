#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 

int P[1001], W[1001];
int table[1001][31];

int knapsack(int i, int r ) { 
	if (i < 0 || r <= 0) 
		return 0;
	
	if (table[i][r] == -1) {

		// if the person chooses to pick the object, we still have to compare whether taking it or not taking it would give an optimal solution
		if (r >= W[i])
			table[i][r] = max(knapsack(i - 1, r - W[i]) + P[i], knapsack(i - 1, r));
		else 
			table[i][r] = knapsack(i - 1, r);
	}

	return table[i][r];
}

int main(void) { 

	int t; cin >> t; 
	while (t--) {
		memset(table, -1, sizeof table);

		int n, total = 0; cin >> n;
		for (int i = 0; i < n; i++) {
			int p, w; cin >> p >> w;
			P[i] = p, W[i] = w;
		}

		int g; cin >> g;
		for (int i = 0; i < g; i++) {
			int w; cin >> w; 
			total += knapsack(n - 1, w);
		}

		cout << total << endl;
	}
	return 0;
}