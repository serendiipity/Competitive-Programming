#include <iostream>
#include <set>
using namespace std;

int main() {
	int n; cin >> n; 
	set <int> ints;
	while (n--) {
		int x; cin >> x; 
		if (x != 0)
			ints.insert(x);
	}
	cout << ints.size() << endl;
	return 0;
}