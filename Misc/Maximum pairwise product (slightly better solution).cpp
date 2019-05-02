#include <iostream>
#include <vector>
using namespace std; 

int main(void) {
	int n; cin >> n;
	vector <long long> numbers(n);
	long long max1, max2, maxindex;
	for (int i=0; i<n; i++) {
		long long x; cin >> x;
		numbers.push_back(x);
	}
	max1 = numbers[0];
	for (int i=0; i<(int)numbers.size(); i++) {
		if (numbers[i]>max1) {
			max1 = numbers[i];
			maxindex = i;
		}
	}
	numbers.erase(numbers.begin() + maxindex);
	max2 = numbers[0];
	for (int i=0; i<(int)numbers.size(); i++) {
		if (numbers[i]>max2)
			max2 = numbers[i];
	}
	
	cout << max2 * max1 << endl;
	return 0;
}