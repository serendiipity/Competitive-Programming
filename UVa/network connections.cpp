#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
typedef vector <int> vi;

int find_set(int x, vi & p, vi & r) {
	if (p[x] == x) 
		return x; 
	return p[x] = find_set(p[x], p, r);
}

void union_set(int x, int y, vi & p, vi & r) {
	x = find_set(x, p, r), y = find_set(y, p, r);
	if (x == y)
		return;
	if (r[x] > r[y])
		p[y] = x;
	else
		p[x] = y; 
	if (r[x] == r[y])
		r[y]++;

}

bool is_same_set(int x, int y, vi & p, vi & r) {
	return find_set(x, p, r) == find_set(y, p, r);
}

int main(void) {
	int t; cin >> t;
	// string s; getline(cin, s);
	string s;
	while (t--) {
		int n; 
		scanf("\n%d\n", &n);
		vi p(n+1);
		vi r(n+1, 0);
		for (int i = 0; i <= n; i++)
			p[i] = i;
		char c; 
		int i, j, su = 0, un = 0;
		while (true) {
			if (!getline(cin, s) || s.empty()) break;
				sscanf(s.c_str(), "%c %d %d", &c, &i, &j);
			if (c == 'c') 
				union_set(i, j, p, r);
			else 
				is_same_set(i, j, p, r) ? su++ : un++;
		}
		cout << su << ',' << un << endl;
		if (t) 
			cout << endl;
		
	}
	return 0;
}