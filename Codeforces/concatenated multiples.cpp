#include <iostream> 
#include <vector> 
#include <string>
using namespace std; 

int main(void) {
	int m, k; cin >> m >> k; 
	vector <long long> ints;
	for (int i = 0; i < m; i++) {
		long long x; cin >> x; 
		ints.push_back(x);
	}
	int count = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if (j != i) {
				string s1 = to_string(ints[i]);
				string s2 = to_string(ints[j]);
				string s = s1 + s2;
				long long n = stol(s);
	 			if (n % k == 0)
					count++;
			}
		}
	}
	cout << count;
	return 0;
}