#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binary_search(vector <int> & numbers, int l, int r, int target) {
	if (r < l)
		return false; 
	int m = (l+r)/2;
	if (numbers[m] == target)
		return true;
	else if (target > numbers[m])
		binary_search(numbers, m+1, r, target);
	else if (target < numbers[m])
		binary_search(numbers, l, m-1, target);
}  

int main() {
	vector <int> numbers; 
	int n, target; cin >> n >> target; 
	while (n--) {
		int x; cin >> x; 
		numbers.push_back(x);
	}
	sort(numbers.begin(), numbers.end());
	if (binary_search(numbers, 0, numbers.size()-1, target))
		cout << "found!" << endl;
	else 
		cout << "not found..." << endl;
	return 0;
}