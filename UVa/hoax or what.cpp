#include <iostream>
#include <set>
using namespace std;

int main() {
	int n; cin >> n; 
	set <int> s;
	while (n--) {
		int x; cin >> x;
		cout << x << endl;
		s.insert(x);
	}
	cout << *(s.end()--) << endl;
	return 0;
}