#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool matrix[400][400];

void init() {
	for (int i = 0; i < 400; i++)
		for (int j = 0; j < 400; j++)
			matrix[i][j] = false;
}

bool is_reachable(int i, int j) {
	return matrix[i][j];
}

void floyd_warshall(int V) {
	for (int k = 0; k <= V; k++) 
		for (int i = 0; i <= V; i++)
			for (int j = 0; j <= V; j++)
				matrix[i][j] |= (matrix[i][k] & matrix[k][j]);
}
 
int main() {
	int n, m, q;
	while (cin >> n >> m >> q) {
		init();
		while (m--) {
			int u, v; cin >> u >> v;
			matrix[u][v] = true;
		}
		floyd_warshall(n);
		while (q--) {
			int u, v; cin >> u >> v;
			cout << (is_reachable(u, v) ? "YES" : "NO") << endl;
		}
	}
	return 0;
}