#include <iostream>
#include <vector> 
using namespace std;

int main() {
	long long sum = 0, n; cin >> n; 
	vector <long long> sums;
	while (n--) {
		int x; cin >> x; 
		sums.push_back(x+sum);
		sum += x;
	}
	for (int i = 0; i < (int) sums.size(); i++ ) {
		if (sums[i] >= (double)sum/2) {
			cout << i+1 << endl;
			break;
		}
	}
	return 0;
}