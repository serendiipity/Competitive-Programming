#include <iostream>
using namespace std;

int main() {
	int T; cin >> T; 
	for (int i = 0; i < T; i++) {
		int n; cin >> n;
		int max = -1;
		while (n--) {
			int x; cin >> x;
			if (x > max)
				max = x;
		}
		cout << "Case " << i + 1 << ": " << max << endl;
	}
	return 0;
}