#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n; cin >> n;
	vector <int> A;
	vector <int> B;
	int size;
	while (n--) {
		int x; cin >> x;
		A.push_back(x);
	}
	while (A.size() > 1) {
		if (A.size() % 2 != 0)
			size = A.size() - 1;
		else 
			size = A.size();
		int j = size / 2;
		for (int i = 0; i < size / 2; i++) {
			B.push_back(max(A[i], A[j]));
			j++;
		}
		if (A.size() % 2 != 0)
			B.push_back(A[A.size() - 1]);
		A = B;
		B.clear();
	} 
	cout << A[0] << endl;
	return 0;
}