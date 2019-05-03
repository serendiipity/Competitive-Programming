#include <iostream> 
#include <algorithm>
#include <string>
using namespace std;

int main(void) {
	int T; cin >> T; 
	for (int t = 1; t <= T; t++) {
		string n, last; cin >> n; 
		last = n;
		for (int j = 1; j <= stoi(n); j++) {
			string num = to_string(j);
			if (is_sorted(num.begin(), num.end()))
				last = num;
		}	
		cout << "Case #" << t << ": " << last << endl;
	}
	return 0;
}