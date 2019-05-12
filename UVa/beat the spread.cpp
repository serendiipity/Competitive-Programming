#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n; 
	while (n--) {
		int s, d; cin >> s >> d; 
		int x = s + d; 
		int y = s - d;
		if (x < 0 || y < 0 || x % 2 != 0 || y % 2 != 0)
			cout << "impossible" << endl;
		else {
			if (x / 2 > y / 2)
				cout << x/2 << " " << y / 2 << endl;
			else 
				cout << y/2 << " " << y/2 << endl;
		}
	}
	return 0;
}