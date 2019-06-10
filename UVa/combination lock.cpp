#include <iostream>
#include <bits/stdc++.h>
#define MARK 9
using namespace std;

int main() {
	int p, c1, c2, c3;
	while (cin >> p >> c1 >> c2 >> c3) {
		int result = 0;
		if ( ! (p || c1 || c2 || c3))
			break;
		result += 360 * 2;
		if (c1 < p) {
			result += (p - c1) * MARK;
		} else if (c1 > p) { 
			result += 360 - (c1 - p) * MARK;
		}
		p = c1;
		result += 360;
		if (c2 > p) {
			result += (c2 - p) * MARK;
		} else if (c2 < p) {
			result += 360 - (p - c2) * MARK;
		}
		p = c2;
		if (c3 < p) {
			result += (p - c3) * MARK;
		} else if (c3 > p) { 
			result += 360 - (c3 - p) * MARK;
		}
		cout << result << endl;
	}
	return 0;
}