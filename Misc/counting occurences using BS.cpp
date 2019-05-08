#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 

int bs_last_occurence(const vector <int> & numbers, int low, int high, int target) {
	if (low > high)
		return -1; 
	int mid = (low + high) / 2;
	if (numbers[mid+1] == target)
		return bs_last_occurence(numbers, mid+1, high, target);
	else if (numbers[mid] == target)
		return mid;
	else if (numbers[mid] > target)
		bs_last_occurence(numbers, low, mid-1, target);
	else 
		bs_last_occurence(numbers, mid+1, high, target);
}

int bs_first_occurence(const vector <int> & numbers, int low, int high, int target) {
	if (low > high)
		return -1; 
	int mid = (low + high) / 2;
	if (numbers[mid-1] == target)
		return bs_first_occurence(numbers, low, mid-1, target);
	else if (numbers[mid] == target)
		return mid;
	else if (numbers[mid] > target)
		bs_first_occurence(numbers, low, mid-1, target);
	else 
		bs_first_occurence(numbers, mid+1, high, target);
}

int count_occurences(vector <int> & numbers, const int target) {
	int first_occurence = bs_first_occurence(numbers, 0, numbers.size()-1, target);
	if (first_occurence == -1)
		return 0;
	int low; // = first_occurence > 0 ? first_occurence : 0;
	int last_occurence = bs_last_occurence(numbers, first_occurence > 0 ? first_occurence : 0, numbers.size()-1, target);
	if (last_occurence == -1)
		return 1;
	return last_occurence - first_occurence + 1;
}

int main(void) {
	vector <int> numbers;
	int n; cin >> n; 
	while (n--) {
		int x; cin >> x; 
		numbers.push_back(x);
	}
	int target; cin >> target;
	sort(numbers.begin(), numbers.end());
	cout << count_occurences(numbers, target) << endl;
}