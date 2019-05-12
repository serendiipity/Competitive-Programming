#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef vector <int> vi;

vi x;
vi st;

int left(int i) {
	return i << 1;
}

int right(int i) {
	return (i << 1) + 1;
}

void change(int i, int p, int v, int l, int r) {
	if (p < l || p > r)
		return;
	if (l == r) {
		st[i] = v;
		return;
	}
	int m = (l+r)/2;
	change(left(i), p, v, l, m);
	change(right(i), p, v, m+1, r);
	st[i] = st[left(i)] * st[right(i)];
}

int query(int i, int l, int r, int a, int b) {
	if (r < a || l > b)
		return 1;
	if (l >= a && r <= b)
		return st[i];
	int m = (l+r)/2;
	return query(left(i), l, m, a, b) * query(right(i), m+1, r, a, b);
}

void build(int i, int l, int r) {
	if (l == r)	{
		st[i] = x[l];
		return ;
	}
	int m = (l+r)/2;
	build(left(i), l, m);
	build(right(i), m + 1, r);
	st[i] = st[left(i)] * st[right(i)];
}

int main() {
	int n, k; 
	while (cin >> n >> k) {
		x.clear();
		st.clear();
		while (n--) {
			int e; cin >> e;
			if (e > 0) e = 1;
			if (e < 0) e = -1;
			x.push_back(e);
		}
		char c; 
		int a, b;
		st.resize(4 * x.size(), 1);
		build(1, 0, x.size() - 1);
		while (k--) {
			cin >> c; 
			cin >> a >> b; 
			if (c == 'C') {
				if (b > 0) b = 1;
				if (b < 0) b = -1;
				change(1, a-1, b, 0, x.size()-1);
				x[a-1] = b;
			} else {
				int p = query(1, 0, x.size()-1, a-1, b-1);
				if (p > 0) 
					cout << '+';
				else if (p < 0)
					cout << '-';
				else 
					cout << '0';
			}
		}
		cout << endl;
	}
	return 0;
}