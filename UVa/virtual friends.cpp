#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 
typedef map <string, int> msi;
typedef map <string, string> mss;

msi r, c;
mss p;

string find_set(string x) { 
	if (x == p[x])
		return x; 
	return p[x] = find_set(p[x]);
}

int set_size(string x) { 
	return c[find_set(x)];
}

void union_sets(string x, string y) {
	x = find_set(x), y = find_set(y);
	if (x == y)
		return;
	if (r[x] >= r[y]) {
		p[y] = x;
		if (r[x] == r[y])
			r[x]++;
		c[x] += c[y];
	} else { 
		p[x] = y; 
		c[y] += c[x];
	}
}

int main(void) {
	int t; cin >> t; 
	while (t--) {
		int n; cin >> n; 
		p.clear();
		r.clear();
		c.clear();
		while (n--) {
			string x, y; cin >> x >> y;
			if (p.count(x) == 0) 
				p[x] = x, r[x] = 0, c[x] = 1;
			if (p.count(y) == 0)
				p[y] = y, r[y] = 0, c[y] = 1;
			union_sets(x, y);
			cout << set_size(x) << endl; // or set_size(y)
		}
	}
	
	return 0;
}