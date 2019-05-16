#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef vector <int> vi; 

int main() {
	int	n, k; cin >> n >> k;
	vi e;
	while (n--) {
		int x; cin >> x;
		e.push_back(x);
	}
	sort(e.begin(), e.end());
	cout << e[k-1] << endl;
	return 0;
}