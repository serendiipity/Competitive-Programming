#include <iostream> 
#include <vector> 
using namespace std; 

int main() {
	int t; cin >> t; 
	while (t--) {
		long long L, v, l, r; cin >> L >> v >> l >> r;
		long long p = v;
		int count = 0;
		while (p <= L) {
			if (p >= l && p <= r)
				p = r + ((r + v) % v);
			if (p % v == 0 && p != r)
				count++;
			p += v;
		}
		cout << count << endl;
	}
	return 0;
}