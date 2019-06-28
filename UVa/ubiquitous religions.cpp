#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
typedef vector <int> vi; 

vi p, r;
int n;

int find_set(int x) { 
	if (x == p[x])
		return x; 
	return p[x] = find_set(p[x]);
}

void union_sets(int x, int y) {
	x = find_set(x), y = find_set(y);
	if (x == y)
		return; 
	if (r[x] >= r[y]) {
		p[y] = x; 
		if (r[x] == r[y])
			r[x]++;
	} else { 
		p[x] = y;
	}
	n--;
}

int main() {
	int m, t = 1;
	while (cin >> n >> m) {
		if (n == 0 && m == 0)
			break;
			
		r.clear(); 
		p.clear();
		r.resize(n + 1, 0);
		p.resize(n + 1);
		for (int i = 1; i <= n; i++)
			p[i] = i;
		
		while (m--) {
			int x, y; cin >> x >> y; 
			union_sets(x, y);
		}
		
		cout << "Case " << t++ << ": " << n << endl;
	}
	
	return 0;
}