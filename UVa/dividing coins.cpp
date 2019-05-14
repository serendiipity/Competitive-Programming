#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
int m[101][101 * 501];
int coins[101];

int share(int c, int d) {
	if (c == n)
		return d;
	if (m[c][d] == -1) 
		m[c][d] = min(share(c + 1, d + coins[c]), share(c + 1, abs(d - coins[c])));
	
	return m[c][d];
}

int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			int v; cin >> v; 
			coins[i] = v;
			for (int j = 0; j < 501 * 101; j++)
				m[i][j] = -1;
		}
		cout << share(0, 0) << endl;
	}
	return 0;
}