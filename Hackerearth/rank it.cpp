#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	int N; cin >> N;
	vector <int> numbers;
	int c = N;
	while (c--) {
		int x; cin >> x;
		numbers.push_back(x);
	}
	sort(numbers.begin(), numbers.end());
	int q; cin >> q; 
	vector <int> results;
	while (q--) {
		int x; cin >> x;
		int upper = N-1, lower = 0; 
		int flag = 0;
		while (lower <= upper) {
			int mid = (lower+upper)/2;
			if (x == numbers[mid]) {
				results.push_back(mid+1);
				flag = 1;
				break;
			}
			else if (x > numbers[mid])
				lower = mid+1;
			else if (x < numbers[mid])
				upper = mid-1;
		}
		if (flag == 0)
			results.push_back(-1);
	}
	for (auto r: results) 
		cout << r << endl;
	return 0;
}