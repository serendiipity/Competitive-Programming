#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		vector <int> e;
		vector <int> diff;
		int flag = 1;
		for (int i = 0; i < n; i++) {
			int x; cin >> x; 
			e.push_back(x);
		} 
		for (int i = 1; i < n; i++) 
			diff.push_back(abs(e[i] - e[i-1]));
		sort(diff.begin(), diff.end());
		for (int i = 1; i < diff.size(); i++) 
			if (diff[i] - diff[i-1] != 1) {
				flag = 0;
				break;
			}
		if (flag)
			cout << "Jolly" << endl;
		else 
			cout << "Not jolly" << endl;
	}
	return 0;
}