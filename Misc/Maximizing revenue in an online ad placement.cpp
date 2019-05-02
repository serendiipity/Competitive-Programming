#include <iostream> 
#include <vector> 
#include <algorithm>
using namespace std; 

bool decreasing(int a, int b) {
	return a>b;
}

int main(void) {
	vector <int> first, second;
	int m, n, count, profit = 0; cin >> n; 
	count = m = n;
	while (n--) {
		int x; cin >> x;
		first.push_back(x);
	}
	while (m--) {
		int x; cin >> x;
		second.push_back(x);
	}
	sort(first.begin(), first.end(), decreasing);
	sort(second.begin(), second.end()), decreasing;
	vector <int> :: iterator index_i, index_j, i, j;
	i = first.begin();
	int max;
	for (; i != first.end(); i++) {
		index_i = first.begin();
		index_j = second.begin();
		j = second.begin();
		max = (*index_i) * (*index_j);
		for (; j != second.end(); j++) {
			if ((*i) * (*j) >max) {
				max = (*i) * (*j);
				index_i = i;
				index_j = j;
			}
		}
		profit += max;
		second.erase(index_j);
	}
	cout << profit << endl;
}