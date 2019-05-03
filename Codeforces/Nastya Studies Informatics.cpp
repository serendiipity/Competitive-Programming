#include <iostream>
#include <set>
using namespace std;

int main() {
	int l, r, x, y; cin >> l >> r >> x >> y; 
	if (y % x != 0)
		cout << 0 << endl;
	else {
		for (int i = l/x; i <= y; i++) {
			if (a % i == 0)
				cs.insert(i);
		}
		cout << "size is " << cs.size() << endl;
	}
	return 0;
}