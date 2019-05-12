#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int min = INT_MAX;
	int max = INT_MIN;
	int index = -1;
	int n; cin >> n; 
	vector <int> A;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		A.push_back(x);
		if (x > max) {
			max = x;
			index = i;
		}
		if (x < min)
			min = x;
	}
	A.erase(A.begin() + index);
	max = *max_element(A.begin(), A.end()); // note this in the reference
	cout << max - min << endl;
	return 0;
}