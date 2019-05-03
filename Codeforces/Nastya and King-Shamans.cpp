#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, q; cin >> n >> q; 
	vector <long long> powers, sums(n);
	while (n--) {
		long long x; cin >> x; 
		powers.push_back(x);
	}
	sums[0] = powers[0];
	for (long long i = 1; i < (int) powers.size(); i++)
		sums[i] = sums[i-1] + powers[i];
	while (q--) {
		int flag = 0;
		long long index, newvalue; cin >> index >> newvalue;
		index--;
		powers[index] = newvalue;
		for (long long i = index; i < (int) sums.size(); i++) {
			if (i == 0)
				sums[i] = powers[i];
			else 
				sums[i] = powers[i] + sums[i-1];
			
		}
		for (long long i = 1; i < (int) sums.size(); i++)
			if (powers[i] == sums[i-1]) {
				cout << i + 1 << endl;
				flag = 1;
				break;
			}
		if (flag == 0) {
			if (sums[0] == 0)
				cout << 1 << endl;
			else 
				cout << -1 << endl;
		}
	}
	return 0;
}