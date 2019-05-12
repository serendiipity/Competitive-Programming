#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef map <int, int> mii;

long long factorials[100002];

void init() {
	factorials[0] = 1;
	factorials[1] = 1;
	for (int i = 2; i <= 100000; i++)
		factorials[i] = factorials[i-1] * i;
}

int main() {
	int t; cin >> t; 
	init();
	while (t--) {
		int n; cin >> n; 
		mii counts;
		for (int i = 0; i < n; i++) {
			int x; cin >> x; 
			if (counts.find(x) == counts.end()) 
				counts.insert(make_pair(x, 1));
			else 
				counts[x]++;
		}
	}
	return 0;
}