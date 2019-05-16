#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef vector <int> vi;
typedef vector <vi> vvi; 

vvi adj_list;
vector <bool> colored; 
vi coloring, res;
int n, m, c;

void color(int node) {
	if (node == n) {
		int c = 0; 
		for (auto u: colored)
			if (coloring[u] == 1)
				c++;
		if (c > m) {
			m = c;
			res.clear(); 
			for (int i = 0; i < n; i++)
				if (coloring[i] == 1)
					res.push_back(i);
		}
		return;
	}
	bool flag = true;
	for (auto u: adj_list[node])
		if (colored[u] && coloring[u] == 1) {
			flag = false;
			break;
		}
		
	colored[node] = true;
	if (flag) {
		coloring[node] = 1;
		color(node + 1);
	}
	color(node + 1);
	colored[node] = false;
}

int main() {
	int g; cin >> g; 
	while (g--) {
		colored.clear();
		coloring.clear();
		c = 0;
		m = -1;
		res.clear();
		int k; cin >> n >> k; 
		coloring.resize(n+1, 0);
		colored.resize(n+1, false);
		while (k--) {
			int u, v; cin >> u >> v; 
			adj_list[u - 1].push_back(v - 1);		
			adj_list[v - 1].push_back(u - 1);
		}
		color(0);
		cout << m << endl; 
		for (auto r: res) 
			cout << r + 1 << " ";
		cout << endl;
		
	}
	return 0;
}