#include <iostream>
#include <vector>
using namespace std;

void swap(vector <int> &numbers, int a, int b) {
	int temp = numbers[a];
	numbers[a] = numbers[b];
	numbers[b] = temp;
}

int partition(vector <int> &numbers, int low, int high) {
	int pivot = low, first_high = low, i = low+1;
	while (i<high) {
		if (numbers[i]<numbers[pivot]) {
			first_high++;
			swap(numbers, i, first_high);
		}
		i++;
	}
	swap(numbers, pivot, first_high);
	return first_high;
}

void quicksort(vector <int> &numbers, int low, int high) {
	if (high - low > 0) {
		int pivot = partition(numbers, low, high);
		quicksort(numbers, low, pivot);
		quicksort(numbers, pivot+1, high);
	}
}

int main() {
	int n; cin >> n; 
	vector <int> numbers; 
	while (n--) {
		int x; cin >> x;
		numbers.push_back(x);
	}
	quicksort(numbers, 0, numbers.size());
	for (auto r: numbers)
		cout << r << " ";
	cout << endl;
	return 0;
}