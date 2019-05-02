#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	long long size = ((long long)n)*n;
	cout << "size is " << size << endl;
try {	vector <int> P(size);
	cout << "size is " << P.size() << endl;
} catch(bad_alloc & e) {
	cout << e.what() << endl;
}
	return 0;
}