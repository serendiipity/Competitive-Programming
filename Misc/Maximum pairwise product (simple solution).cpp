#include <iostream>
#include <vector>
using namespace std; 

int main(void) {
	int n; cin >> n; 
	vector <long long> numbers(n);
	for (int i=0; i<n; i++) {
		long long x; cin >> x;
		numbers.push_back(x);
	}
	long long result = numbers[0];
	for (int i=0; i<(int)numbers.size(); i++) {
		for (int j=0; j<(int)numbers.size(); j++) {
			if (numbers[i] * numbers[j] > result && i != j)
				result = numbers[i] * numbers[j];
		}
	}
	cout << result << endl;
	return 0;
}