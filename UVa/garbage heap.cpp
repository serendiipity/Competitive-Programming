#include <iostream>
#include <bits/stdc++.h>
using namespace std; 

int main(void) {
	int t; cin >> t; 
	while (t--) {
		string line; 
		getline(cin, line);
		long long a, b, c; cin >> a >> b >> c;
		long long n = a * b * c;
		long long sum = 0, m = 0; 
		while (n--) {
			long long x; cin >> x;
			sum += x; 
		/*	if (sum > m)
				m = sum; */
			/*if (sum < 0)
				sum = 0;*/
		}
		cout << sum << endl;
		if (t)
			cout << endl;
	}
	return 0;
}