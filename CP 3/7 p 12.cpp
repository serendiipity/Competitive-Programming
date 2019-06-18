#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	vector <char> v = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

	do {
		for (auto c: v)
			cout << c;
		cout << endl;
	} while (next_permutation(v.begin(), v.end()));

	return 0;
}