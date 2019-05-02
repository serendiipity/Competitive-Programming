#include <iostream>
#include <map>
#include <algorithm>
#include <utility>
using namespace std; 

bool sort_second(pair <int, int> a, pair <int, int> b) {
	return a.second > b.second;
}

int main(void) {
	int n; cin >> n; 
	map <int, int> m;
	while (n--) {
		int x, y; cin >> x >> y;
		m.insert(make_pair(x, y));
	}
	for (auto r: m)
		cout << r.first << " " << r.second << endl;
	sort(m.begin(), m.end(), sort_second);
	for (auto r: m)
		cout << r.first << " " << r.second << endl;
	return 0;
}