#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector <int> coins; 
int table[101][501 * 101];

int min_diff(int n, int x, int y) {
	if (n < 0)
		return abs(x - y);

	if (table[n][x] == -1) {	
		int d1 = min_diff(n - 1, x + coins[n], y); // giving coin n to the 1st person 
		int d2 = min_diff(n - 1, x, y + coins[n]); // " to the 2nd person
		table[n][x] = min(d1, d2);
	}
		
	return table[n][x];
}

int main() {
	
	int t; cin >> t; 
	while (t--) {
		coins.clear();
				
		int n; cin >> n; 
		for (int i = 0; i < n; i++) {
			int c; cin >> c; 
			coins.push_back(c);
			for (int j = 0; j < 501 * 101; j++)
				table[i][j] = -1;
		}
		cout << min_diff(coins.size() - 1, 0, 0) << endl;
	}
	
	return 0;
}