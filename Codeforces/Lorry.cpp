#include <iostream> 
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std; 

bool sort_second(pair <int, int> a, pair <int, int> b) {
	return a.second > b.second;
}

int main(void) {
	string set = "";
	int capacity = 0, n; cin >> n; 
	long long volume = 0, v; cin >> v;
	vector < pair <int, int> > vehicles;
	for(int i=0; i<n; i++) {
		int x, y; cin >> x >> y;
		vehicles.push_back(make_pair(y/x, i));
	}
	sort(vehicles.begin(), vehicles.end());
	vector < pair <int, int> > :: iterator it; 
/*	for (auto r: vehicles) {
		while (volume < v) {
			
		}
	} */
	return 0;
}