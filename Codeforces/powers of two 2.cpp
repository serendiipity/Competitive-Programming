#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int p[1000000], e, c;

int main() {
	int n, k; cin >> n >> k;
	while (n > k && k > 0) {
		e = log2(n - k + 1);
		p[c++] = (1 << e);
		k--;
		n -= (1 << e);
	}
	if (n - k)
		cout << "NO" << endl;
	else {
		for (int i = 0; i < k; i++)
			p[c++] = 1;
		cout << "YES" << endl;
		for (int i = 0; i < c; i++)
				cout << p[i] << " ";
		cout << endl;
	}
	return 0;
}