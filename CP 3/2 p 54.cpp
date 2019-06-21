#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef vector <int> vi;

vi p, r;

int find_set(int x) {
	if (x == p[x])
		return x; 
	int s = find_set(p[x]);
	p[x] = s; // path compression
	return s;
}

void union_set(int x, int y) {
	x = find_set(p[x]), y = find_set(p[y]);
	if (x == y)
		return;
	if (r[x] >= r[y]) {
		p[y] = x;
		if (r[x] == r[y])
			r[x]++;
	} else {
		p[x] = y;
	}
}

bool is_same_set(int x, int y) {
	x = find_set(p[x]), y = find_set(p[y]);
	if (x == y)
		return true; 
	return find_set(x) == find_set(y);
}

int main() {
	int n = 8;
	r.resize(n, 0); 
	p.resize(n);
	
	for (int i = 0; i < n; i++)
		p[i] = i; 
	
	union_set(4, 5); 
	union_set(2, 3); 
	union_set(2, 4); 
	union_set(6, 7); 
	union_set(1, 0);
	union_set(6, 1); 
	union_set(2, 6);
	cout << "rank of 2 is " << r[2] << endl;
	
	return 0;
}