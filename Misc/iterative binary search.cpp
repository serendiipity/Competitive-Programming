#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> numbers;
	int n; cin >> n;
	while (n--) {
		int x; cin >> x; 
		numbers.push_back(x);
	}
	int target; cin >> target;
	int low = 0; 
	int flag = 0;
	int high = (int) numbers.size()-1;
	while (low < high) {
		int mid = (low + high) / 2;
		if (numbers[mid] == target) {
			flag++;
			break;
		} else if (numbers[mid] > target)
			high = mid - 1; 
		else if (numbers[mid] < target)
			low = mid + 1;
	}
	cout << (flag ? "yes" : "no") << endl;
	return 0;
}