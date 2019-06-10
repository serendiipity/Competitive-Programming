#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	for (int i = 1; i <= t; i++) {
		int a, b, c; cin >> a >> b >> c;
		int min_e = min(min(a, b), c);
		int max_e = max(max(a, b), c);
		cout << "Case " << i << ": ";
		if (a != max_e && a != min_e) {
			cout << a << endl;
		} else if (b != min_e && b != max_e) {
			cout << b << endl;
		} else 
			cout << c << endl;
	}
	return 0;
}