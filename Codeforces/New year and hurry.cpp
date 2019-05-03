#include <iostream>
using namespace std;

int main() {
	int sum = 0, i, n, k; cin >> n >> k; 
	for (i = 1; i <= n; i++) {
		sum += i * 5;
		if (sum > 240 - k) 
			break;
	}
	cout << i-1 << endl;
	return 0;
}