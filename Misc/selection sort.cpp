#include <iostream>
#include <vector>
using namespace std;

void swap(vector <int> & numbers, int i, int j) {
	int temp = numbers[i];
	numbers[i] = numbers[j];
	numbers[j] = temp;
}

int main() {
	int n; cin >> n; 
	vector <int> numbers;
	while (n--) {
		int x; cin >> x; 
		numbers.push_back(x);
	}
	for (int i = 0; i < numbers.size()-1; i++) {
		int min = i;
		for (int j = i; j < numbers.size(); j++) {
			if (numbers[j] < numbers[min]) {
				min = j;
			}
		}
		swap(numbers, i, min);
	}
	for (auto n: numbers)
		cout << n << " "; 
	cout << endl;
	// your code goes here
	return 0;
}