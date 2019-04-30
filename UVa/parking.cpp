#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	vector <int> results;
	int n; cin >> n;
	while (n--) {
		int m; cin >> m;
		int a; cin >> a;
		int min = a, max = a;
		m--;
		while (m--) {
			cin >> a;
			if (a > max)
				max = a;
			if (a < min)
				min = a;
		}
		int d = max - min;
		results.push_back(d * 2);
	}
	for (auto r: results)
		cout << r << endl;
	return 0;
}