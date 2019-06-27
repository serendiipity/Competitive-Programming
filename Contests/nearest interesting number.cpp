#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int compute_sum(int n) {
	int sum = 0; 
	string s = to_string(n);
	
	for (auto c: s)
		sum += c - '0';
	
	return sum;
}

int main() {
	int sum, n; cin >> n;
	
	while (true) {
		sum = compute_sum(n);
		if (sum % 4 == 0) {
			cout << n << endl;
			break;
		} else {
			n++;
		}
	}
	
	return 0;
}