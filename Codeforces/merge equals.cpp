#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Number {
	public:
		int index; 
		long long value;
		Number (int, long long);
};

Number::Number (int i, long long v) {
	index = i; 
	value = v;
}

bool sort_by_value(Number a, Number b) {
	return a.value < b.value;
}

bool sort_by_index(Number a, Number b) {
	return a.index < b.index;
}

int main() {
	int n; cin >> n; 
	vector <Number> array;
	int j = 0;
	while (n--) {
		long long x; cin >> x;
		Number number (j++, x);
		array.push_back(number);
	}
	for (int i = 0; i < (int) array.size(); i++) {
		cout << array[i].value << " ";	
	}
	cout << endl;
	sort(array.begin(), array.end(), sort_by_value);
	int k = 0;
	while (k < (int) array.size() - 1) {
		int count = 0;
		int i = k;
		while (array[i].value == array[i+1].value) {
			i++;
			count++;
		}
		if (count == 0) {
			k++;
			continue;
		}
		k = i;
		sort(array.begin(), array.begin() + count, sort_by_index);
	}
	for(int i = 0; i < (int) array.size(); i++) {
		cout << array[i].value << " ";
	}
	cout << endl;
	for (int i = 0 ; i < (int) array.size() - 1; i++) {
		if (array[i].value == array[i+1].value) {
			array[i].value = -1;
			i++;
			while (i < (int) array.size() && array[i].value == array[i+1].value) {
				i++;
			}
			array[i].value = 2 * array[i].value;
		}
	}
	// you didn't think of the fact that you will have to iterate times and again until there are no duplicates
	for(int i = 0; i < (int) array.size(); i++) {
		cout << array[i].value << " ";
	}
	cout << endl;
	cout << endl;
	
	return 0;
}