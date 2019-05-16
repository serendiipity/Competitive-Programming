#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 

long long gcd(long long a, long long b) {
	if (b == 0)
		return a; 
	return gcd (b, a % b);
}

int main() {
	int t; cin >> t;
	while (t--) {
		int u, v, w, p, k; cin >> u >> v >> w >> p >> k;
		
			if (gcd(v*w, u) == 1) {
				cout << "NO" << endl;
				break;
			} else {
				if (p >= k)
					cout << "YES" << endl;
				else 
					cout << "NO" << endl;
			}
		
	}
	return 0;
}