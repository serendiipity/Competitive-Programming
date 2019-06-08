#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n; 
	set <int> numbers;
	while (n--) {
		int x; cin >> x; 
		numbers.insert(x);
	}
	for (auto x: numbers) 
		cout << x << endl;
	return 0;
}