#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	vector <int> e;
	vector <int> mins;
	int size, r;
	while (n--) {
		int x; cin >> x; 
		e.push_back(x);
	}
	size = (int)e.size() / k;
	r = (int)e.size() - size;
	k--;
	int i = 0;
	while (k--) {
		vector <int>:: iterator it; 
		it = e.begin()+i;
		for (it; it != e.begin() + i + size; it++)
			cout << *it << endl;
		mins.push_back(*min_element(e.begin()+i, e.begin() + i + size));
		i+= size;
	}
	
	mins.push_back(*min_element(e.end() - r, e.end()));
//	cout << *max_element(mins.begin(), mins.end()) << endl;
	return 0;
}