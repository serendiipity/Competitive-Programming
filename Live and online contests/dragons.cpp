#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(void) {
	int s, n; cin >> s >> n;
	int v = 0;
	vector < pair <int, int> > dragons;
	while (n--) {
		int x, y; cin >> x >> y;
		dragons.push_back(make_pair(x, y));
	}
	sort(dragons.begin(), dragons.end());
	for(auto r: dragons) {
		if (r.first < s) {
			v++;
			s += r.second;
		}
		else 
			break;
	}
	if (v >= dragons.size())
		cout << "YES";
	else 
		cout << "NO";
	return 0;
}