#include <iostream>
using namespace std;

int main() {
	int sum =0, n, j=1; cin >> n;
	int m = n, s=n;
	int count = 1;
	n--;
	while (n--) {
		for (int i=1; i<=m-1; i++)
			sum += j;
		j++;
		count++;
		m--;
	}
	cout << sum+s << endl;
	return 0;
}