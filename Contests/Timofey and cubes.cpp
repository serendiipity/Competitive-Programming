#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n; cin >> n;
	int m = n;
	vector <int> nums;
	while (m--) {
		int x; cin >> x;
		nums.push_back(x);
	}
	for (int i=(n+1)/2, m=n-i+1; i>=0; i--, m++)
		reverse(nums.begin()+i, nums.end()-i);
	for (auto n: nums)
		cout << n << " ";
	cout << endl;
	return 0;
}