#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int r; cin >> r;
	for (int route = 1; route <= r; route++) {
		vector <int> stops;
		int l; cin >> l; 
		stops.push_back(-1);
		for (int c = 1; c < l; c++) {
			int n; cin >> n;
			stops.push_back(n);
		}
		int i = 1, j = -1, ans = 0, sum = 0;
		for (int c = 1; c < stops.size(); c++) {
			sum += stops[c];
			if (sum > ans) {
				ans = sum;
				j = c;
			}
			if (sum < 0) {
				i = c;
				j = i;
				sum = 0;
			}
		}
		if (j == -1 || (j == i && sum <= 0))
			cout << "Route " << route << " has no nice parts" << endl;
		else
			cout << "The nicest part of route " << route << " is between stops " << ++i << " and " << ++j << endl;
	}
	return 0;
}