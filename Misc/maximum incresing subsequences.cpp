#include <iostream>
#include <vector> 
using namespace std; 

int main(void) {
	int n; cin >> n; 
	vector <int> numbers, indices, sums;
	for (int i = 0; i < n; i++) {
		int x; cin >> x; 
		numbers.push_back(x);
		indices.push_back(i);
		sums.push_back(x);
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (numbers[j] < numbers[i] && sums[j] + numbers[i] > sums[i]) {
				sums[i] += numbers[j];
				indices[i] = j;
			}
		}
	}
	int max = sums[0];
	for (int i = 0; i < sums.size(); i++)
		if (sums[i] > max)
			max = sums[i];
	cout << max << endl;
	return 0;
}