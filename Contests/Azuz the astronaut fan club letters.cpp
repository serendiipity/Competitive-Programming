#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	int T; cin >> T;
	getchar();
	while (T--) {
		string s;
		getline(cin, s);
		bool sign = true; // true for + and false for - 
		int sum = 0;
		int c = s[0];
		for (int i = 0; i < s.size(); i++) {
			if (sign) {
				sum += s[i];
				sign = false;
			}
			else {
				sum -= s[i];
				sign = true;
			}
		}
		cout << sum * sum << endl;
	}
	return 0;
}