#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef vector <int> vi;
typedef vector <vi> vvi;

vi visited;
vvi adj_list;
int c;

bool BFS(int s, int d) {
	queue <int> Q;
	Q.push(s);
	c = 1;
	visited[s] = true;
	while (!Q.empty()) {
		int u = Q.front(); Q.pop();
		for (auto v: adj_list[u]) {
			if (!visited[v]) {
				Q.push(v);
				visited[v] = true;
				c++;
			}
		}
	}
	if (c == 1) return false;
	return visited[d];
}

int main() {
	int n, m, q;
	while (cin >> n >> m >> q) {
		visited.clear();
		visited.resize(n+1, false);
		adj_list.clear();
		adj_list.resize(n+1);
		while (m--) {
			int u, v; cin >> u >> v;
			adj_list[u].push_back(v);
		}
		while (q--) {
			int u, v; cin >> u >> v;
			cout << (BFS(u, v) ? "YES" : "NO") << endl;
			visited.clear();
			visited.resize(n+1, false);
		}
	}
	return 0;
}