#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector <int> nums, results;
	int cases, m; cin >> cases; 
	m = cases;
	while (cases--) {
		int count = 0;
		while (count < 3) {
			int n; cin >> n; 
			nums.push_back(n);
			count++;
		}
		sort(nums.begin(), nums.end());
		results.push_back(nums[1]);
		nums.clear();
	}
	for (int i=0; i<m; i++) {
		cout << "Case " << i + 1 << ": " << results[i] << endl;
	}
	return 0;
}