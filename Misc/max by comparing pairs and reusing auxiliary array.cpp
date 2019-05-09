#include <iostream> 
#include <vector> 
#include <algorithm>
using namespace std; 

int main(void) {
	int n; cin >> n; 
	vector <int> A;
	while (n--) {
		int x; cin >> x; 
		A.push_back(x);
	}
	vector <int> B; 
	do {
		for (int i = 0; i < A.size(); i += 2)
			B.push_back(max(A[i], A[i+1]));
		A = B;
		B.clear();
	} while (A.size() > 1);
	cout << B[0] << endl;
	return 0;
}