#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool check(double x) {
	int y = (int)x;
	if (x / y == 1)
		return true;
	else 
		return false;
}

int main(void) {
//	int t; cin >> t;
	vector <int> results;
	/* while (t--) { */
		int n; cin >> n;
		int sum = 0; 
		while (n--) {
			int L = log(n)/log(2);
			if (check(L))
				sum += (-n);
			else 
				sum += n;
		}
		results.push_back(sum);
//	}
	for (auto r: results)
		cout << r << endl;
	return 0;
}