#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, m;
		while (cin >> n >> m) 
			cout << (n/3) * (m/3) << endl;
	}
	return 0;
}