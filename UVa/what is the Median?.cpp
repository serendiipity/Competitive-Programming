#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector <long long> v; 
	long long x;
	while (cin >> x) {
		v.push_back(x);
		sort(v.begin(), v.end());

		int size = v.size();
		int i = size / 2; 
		if (size % 2 == 0)
			cout << (v[i - 1] + v[i]) / 2 << endl;
		else 
			cout << v[i] << endl;
	}
	return 0;
}