#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	for (int i = 1; i <= t; i++) {
		int n; cin >> n;
		int max_e = INT_MIN;
		while (n--) {
			int x; cin >> x;
			max_e = (x > max_e ? x : max_e);
		}
		cout << "Case " << i << ": " << max_e << endl;
	}
	return 0;
}