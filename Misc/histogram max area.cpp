#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair <int, int> pii;
typedef vector < pii > vpii;

bool value_and_index(pii a, pii b) {
	if (a.first == b.first)
		return a.second < b.second;
	return a.first < b.first;
}

int max_area(vpii & v) {
	sort(v.begin(), v.end(), value_and_index);
	int second = -1; 
	int i = v.size()-2;
	int count = 0;
	int first = v[v.size()-1].first;
	for (; i > 0; i--, count++) {
		if (v[i].first != first && second == -1)
			second = v[i].first;
		if (second != -1 && v[i].first != second)
			break;
	}
	return second * ++count ;
}

int main() {
	int n; cin >> n;
	vpii values;
	int i = 0;
	while (n--) {
		int x; cin >> x;
		values.push_back(make_pair(x, i));
		i++;
	}
	cout << max_area(values) << endl;
	return 0;
}