#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef vector <int> vi; 

vi p; 
vi r; 
vi c;

int find_set(int x) {
	if (p[x] == x)
		return x;
	return p[x] = find_set(p[x]);
}

bool same_set(int x, int y) {
	return find_set(x) == find_set(y);
}

void union_set(int x, int y) {
	x = find_set(x), y = find_set(y);
	if (x == y || same_set(x, y))
		return; 
	if (r[x] > r[y]) {
		p[y] = x;
		c[x] += c[y];
	} else {
		p[x] = y; 
		if (r[x] == r[y])
			r[y]++;
		c[y] += c[x];
	}
}

int main() {
	int t; cin >> t; 
	while (t--) {
		int n, m; cin >> n >> m;
		c.clear(); p.clear(); r.clear();
		p.resize(n+1);
		for (int i = 0; i <= n; i++)
			p[i] = i;
		r.resize(n+1, 0);
		c.resize(n+1, 1);
		while (m--) {
			int x, y; cin >> x >> y; 
			union_set(x, y);
		}
		cout << *max_element(c.begin(), c.end()) << endl;
	}
	return 0;
}