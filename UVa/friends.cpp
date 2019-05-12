#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 
typedef map <int, int> mii;
typedef vector <int> vi;

mii r; 
mii p;

int find_set(int x) {
	if (p[x] == x)
		return x; 
	return p[x] = find_set(p[x]);
}

bool is_same_set(int x, int y) {
	return find_set(x) == find_set(y);
}

void union_set(int x, int y) {
	x = find_set(x), y = find_set(y);
	if (p[x] == p[y])
		return; 
	if (r[x] > r[y])
		p[y] = x;
	else { 
		p[x] = y;
		if (r[x] == r[y])
			r[y]++;
	}
}

int main() {
	int t; cin >> t; 
	while (t--) {
		p.clear();
		r.clear();
		int n, m; cin >> n >> m;
		if (m == 0) {
			cout << n << endl;
			break;
		}
		for (int i = 0; i < m; i++) {
			int a, b; cin >> a >> b;
			if (!is_same_set(a, b)) {
				r.insert(make_pair(a, 0));
				r.insert(make_pair(b, 0));
				p.insert(make_pair(a, a));
				p.insert(make_pair(b, b));
				union_set(a, b);
			}
		}
		vi res(n+1, 0);
		
		for (int i = 1; i <= p.size(); i++)
			res[p[i]]++; 
			
		int max = -1;
		for (int i = 0; i < res.size(); i++) {
			if (res[i] > max)
				max = res[i];
		}
		cout << max << endl;
	}
	return 0;
}