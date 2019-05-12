#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int city [5][5];

void init () {
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			city[i][j] = 0;
}

int main() {
	int t; cin >> t; 
	init();
	int l; cin >> l;
	while (l--) {
		int i, j, p; cin >> i >> j >> p;
		city[i][j] = p;
	}
	return 0;
}