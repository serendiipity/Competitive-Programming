#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[] = {1, 2, 2, 2, 3, 3, 2, 2, 1};
	vector <int> v(a, a + 9);
	for (auto e: v)
		cout << e << " ";
	cout << endl;
	sort(v.begin(), v.end());
	v.resize(unique(v.begin(), v.end()) - v.begin());
	for (auto e: v)
		cout << e << " ";
	cout << endl;
	return 0;
}