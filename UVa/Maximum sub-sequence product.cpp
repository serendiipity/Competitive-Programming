#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x; 
	vector <long long> s;
	while (cin >> x) {
		if (x == -999999) {
			long long m = LLONG_MIN;
			for (int i = 0; i < s.size(); i++) {
				for (int j = i; j < s.size(); j++) {
					long long p = 1;
					for (int k = i; k <= j; k++) {
						p *= s[k];
						if (p >= m)
							m = p;
					}
				}
			}
			cout << m << endl;
			s.clear();
		} else {
			s.push_back(x);
		}
	}

	return 0;
}