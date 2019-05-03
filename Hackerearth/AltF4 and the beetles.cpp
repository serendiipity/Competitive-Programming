#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
typedef pair <long long, long long> pll;

bool sort_p(pll a, pll b) {
	if (a.first == b.first)
		return a.second <= b.second;
	return a.first <= b.first;
}

int main() {
	int T; cin >> T; 
	while (T--) {
		int n, a, b, c; cin >> n >> a >> b >> c; 
		vector <pll> times;
		vector <int> counts (1000000002);
		while (n--) {
			long long p, q; cin >> p >> q;
			counts[p]++;
			counts[q]++;
			times.push_back(make_pair(p, q));
		}
		counts.clear();
		sort(times.begin(), times.end(), sort_p);
		cout << endl;
		for (auto t: times)
			cout << t.first << " " << t.second << endl;
	}
	
 	return 0;
}