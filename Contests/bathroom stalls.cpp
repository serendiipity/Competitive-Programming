#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;
	for (int t = 1; t <= T; t++) {
		int min, n, k; cin >> n >> k; 
	//	if (n == k)
	//		cout << "Case #" << t << ": 0 0" << endl;
	//	else {
			while (k-- && n > 1) {
				if (n % 2 == 0)
					min = n/2 - 1;
				else 
					min = n/2;
	
				n /= 2;
			//	k--;
			if (k == 1) cout << "Case #" << t << ": " << n - min - 1 << " " << min << endl;

	
			}

	//	}

	}
	return 0;
}