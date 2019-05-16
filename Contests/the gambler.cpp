#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T; 
	while (T--) {
		long long old; cin >> old;
		long long a = log10(old);
		if (a == 0)
			a++;
		long long b = old / pow(10, a);
 		if (b == 0) 
			cout << 1 << endl;
		else 
			cout << ((b + 1) * pow (10, a)) - old << endl;
	}
	
	return 0;
}