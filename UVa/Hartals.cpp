#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t; 
	while (t--) {
		int n, p; cin >> n >> p;
		vector <bool> v (n + 1, false);
		for (int j = 0; j < p; j++) {
			int h; cin >> h;
			for (int i = h; i <= n; i += h)
				v[i] = true; 
			
		}
		int count = 0, k = 0; 
		for (int i = 0; i <= n; i++) {
			if (v[i] && k != 6 && k != 7)
				count++;
			k = (i % 7) + 1;
		}
		cout << count << endl;
	}
	return 0;
}