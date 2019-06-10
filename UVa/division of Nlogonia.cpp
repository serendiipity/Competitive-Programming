#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
	int k; 
	while (cin >> k) {
		if (k == 0)
			break;
		int a, b; cin >> a >> b;
		while (k--) {
			int x, y; cin >> x >> y;
			if (x == a || y == b)
				cout << "divisa" << endl;
			else if (x > a && y > b)
				cout << "NE" << endl;
			else if (x < a && y > b)
				cout << "NO" << endl;
			else if (x > a && y < b)
				cout << "SE" << endl;
			else 
				cout << "SO" << endl;
		}
	}
	return 0;
}