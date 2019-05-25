#include <iostream>
using namespace std; 

int main(void) {
	int T; cin >> T;
	while (T--) {
		int n, m; cin >> n >> m;
		int sum = 0, diff = 0; 
		int max = -1, flag = 0;
		while (n--) {
			int x; cin >> x; 
			if (x > m) {
				sum += x; 
				diff += x;
			} else if (x <= m) {
				if (x == m) {
					sum = m + diff;
					flag = 1;
				} else  {
					sum = 0;
					flag = 0;
				}
				diff = 0;
			}
			if (sum > max && flag)
				max = sum;
		}
		cout << max << endl;
	}
	return 0;
}