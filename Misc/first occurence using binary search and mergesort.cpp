#include <iostream> 
#include <vector> 
#include <algorithm>
#include <climits>
using namespace std; 
typedef pair <int, int> pii; 

int index = INT_MAX;

void merge(vector <pii> & numbers, int low, int mid, int high) {
	vector <pii> L, R; 
	for (int i = low; i <= mid; i++)
		L.push_back(numbers[i]);
	for (int i = mid + 1; i <= high; i++)
		R.push_back(numbers[i]);
	int left = 0, right = 0; 
	int i = low;
	while (left < L.size() && right < R.size()) {
		if (L[left].second == R[right].second) {
			if (L[left].first < R[right].first) {
				numbers[i] = L[left];
				left++;
			}
			else {
				numbers[i] = R[right];
				right++;
			}
			i++;
		} else if (L[left].second < R[right].second) {
			numbers[i] = L[left];
			left++;
			i++; 
		} else if (R[right].second < L[left].second) {
			numbers[i] = R[right];
			right++;
			i++;
		}
	}
	if (left == L.size()) {
		while (right < R.size()) {
			numbers[i] = R[right];
			i++;
			right++;
		}
	} else if (right == R.size()) {
		while (left < L.size()) {
			numbers[i] = L[left];
			i++;
			left++;
		}
	}
}

void mergesort(vector <pii> & numbers, int low, int high) {
	if (low >= high)
		return;
	int mid = (low + high) / 2;
	mergesort(numbers, low, mid);
	mergesort(numbers, mid + 1, high);
	merge(numbers, low, mid, high);
}

bool sort_value(pii a, pii b) {
	return a.second <= b.second;
}

void binary_search(vector <pii> & numbers, int low, int high, int target) {
	if (low >= high)
		return;
	int mid = (low + high) / 2;
	if (numbers[mid].second == target && numbers[mid].first < index)
		index = numbers[mid].first;
		// given that I did this, is it logn anymore?
	if (numbers[mid].second >= target)
		binary_search(numbers, low, mid, target);
	else 
		binary_search(numbers, mid + 1, high, target);
}

int main(void) {
	int n; cin >> n; 
	vector <pii> numbers;
	for (int i = 0; i < n; i++) {
		int x; cin >> x; 
		numbers.push_back(make_pair(i, x));
	}
	int target; cin >> target;
	mergesort(numbers, 0, n-1);
	for (auto n: numbers)
		cout << n.second << " ";
	cout << endl;
//	sort(numbers.begin(), numbers.end(), sort_value);
	binary_search(numbers, 0, n-1, target);
	if (index != INT_MAX)
		cout << index << endl;
	else 
		cout << "not found..." << endl;
	return 0;
}