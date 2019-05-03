#include <iostream>
#include <vector>
#include <tuple>
#include <climits>
using namespace std;

tuple <int, int, int> cross_max_subarray(vector <int> & numbers, int low, int high) {
	int mid = (low + high)/2, left = mid, right = mid + 1;
	int sum = 0, leftsum = INT_MIN, rightsum = INT_MIN;
	for (int i = mid; i >= low; i--) {
		sum += numbers[i];
		if (sum > leftsum) {
			leftsum = sum;
			left = i;
		}
	}
	sum = 0;
	for (int i = mid + 1; i <= high; i++) {
		sum += numbers[i];
		if (sum > rightsum) {
			rightsum = sum;
			right = i;
		}
	}
	return make_tuple(left, right, leftsum + rightsum);
}

tuple <int, int, int> max_subarray(vector <int> & numbers, int low, int high) {
	tuple <int, int, int> left, cross, right; 
	if (high == low) 
		return make_tuple(low, high, numbers[low]);
	else {
		int mid = (high + low) / 2;
		left = max_subarray(numbers, low, mid);
		right = max_subarray(numbers, mid + 1, high);

		cross = cross_max_subarray(numbers, low, high);
		if (get<2>(left) >= get<2>(right) && get<2>(left) >= get<2>(cross))
			return left;
		else if (get<2>(right) >= get<2>(left) && get<2>(right) >= get<2>(cross))
			return right;
		else 
			return cross;
	}
}

int main() {
	int n; cin >> n; 
	tuple <int, int, int> results;
	vector <int> numbers; 
	while (n--) {
		int x; cin >> x; 
		numbers.push_back(x);
	}
	results = max_subarray(numbers, 0, numbers.size()-1);
	cout << get<0>(results) << " " << get<1>(results) << " " << get<2>(results) << endl;
	return 0;
}