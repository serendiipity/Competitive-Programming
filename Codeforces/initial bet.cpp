#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	for (int i=0; i<5; i++) {
		int x; cin >> x;
		sum += x;
	}
	if (sum == 0 || sum % 5 != 0)
		cout << -1 << endl;
	else if (sum % 5 == 0)
		cout << sum / 5 << endl;
	return 0;
}