#include <iostream> 
#include <vector> 
#include <algorithm>
#include <utility>
using namespace std; 

bool sort_unit(pair <int, int> a, pair <int, int> b) {
	if (((double)a.first / a.second) == ((double)b.first / b.second)) {
		if (a.first > b.first)
			return true;
		else 
			return false;
	}
	else 
		return ((double)a.first / a.second) > ((double)b.first / b.second);
}

int main(void) {
	int W, n; cin >> n >> W;
	double max = 0;
	vector < pair <int, int> > items;
	items.reserve(n);
	while (n--) {
		int x, y; cin >> x >> y;
		items.push_back(make_pair(x, y));
	}
	sort(items.begin(), items.end(), sort_unit);
	for (int i=0; i<items.size(); i++) {
		if (W==0)
			break;
		else if (W>=items[i].second) {
			max += items[i].first;
			W-=items[i].second;
		}
		else {
			max += ((double)items[i].first / items[i].second) * (double)W;
			W = 0;
		}
	}
	printf("%.4lf\n", max);
	return 0;
}