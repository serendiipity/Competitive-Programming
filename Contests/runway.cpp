#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector < pair <int, int> > cubes;
		while (n--) {
			int h, c; cin >> h >> c;
			cubes.push_back(make_pair(h, c));
		}
		vector <int> res;

		for (int i = 0; i <= cubes.size() - k; i++) {
			double sum = 0;
			for (int j = i; j < k + i; j++) {
				sum += cubes[j].first;
			}
			double a = sum / k;

			int ind = 0, v = 10000000;
			for (int j = i; j < k + i; j++) {
				if (abs(cubes[j].first - a) < v) {
					v = abs(cubes[j].first - a);
					ind = j;
				}
			}
			sum = 0;
			int avg = cubes[ind].first;
			for (int j = i; j < k + i; j++) {
				sum += (abs(cubes[j].first - avg)) * cubes[j].second;
			}
			res.push_back(sum);
		}
		
		
		int m = 10000000;
			for (auto r: res) {
				if (r < m)
					m = r;
			}
			cout << m << endl;
			
		res.clear();
	}
	return 0;
}