#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef vector <int> vi;

vi r, p;

int find_set(int x) {
	if (p[x] == x)
		return x;
	int s = find_set(p[x]); 
	p[x] = s; // path compression
	return s;
}

bool is_same_set(int x, int y) {
	x = p[x], y = p[y];
	if (x == y)
		return true;
	return find_set(x) == find_set(y);
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

int count_sets() {
	set <int> d; 
	for (auto a: p)
		d.insert(a);
	return d.size();
}

int set_size(int s) { 
	int count = 0; 
	s = find_set(s);
	for (auto x: p)
		if (x == s)
			count++;
	return count;
}

void test() {
	cout << count_sets() << endl;
	union_set(0, 1);
	cout << is_same_set(0, 1) << endl; 
	cout << count_sets() << endl;
	cout << set_size(0) << endl;
	cout << set_size(1) << endl;
	union_set(2, 3);
	cout << is_same_set(2, 3) << endl;
	cout << is_same_set(0, 3) << endl;
	union_set(0, 3);
	cout << find_set(3) << endl;
	cout << set_size(0) << endl;
	cout << find_set(0) << endl;
	cout << set_size(1) << endl;
	cout << find_set(1) << endl;
	cout << set_size(2) << endl;
	cout << find_set(2) << endl;
	cout << is_same_set(0, 3) << endl;
	cout << set_size(3) << endl;
	cout << find_set(3) << endl;

}

int main() {
	int n; cin >> n; 
	r.resize(n, 0); 
	p.resize(n);
	
	for (int i = 0; i < n; i++)
		p[i] = i; 
	
	test();
	
	return 0;
}
