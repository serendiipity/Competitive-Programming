#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int a, b;
	vector <int> results;
	while (cin >> a >> b) {
		results.push_back(a);
		results.push_back(b);
		int n, m, max = 0;
		int temp;
		if (a > b) {
			temp = b;
			b = a;
			a = temp;
		}
		while (a <= b) {
				
			n = a;
			m = 0;
			if (n == 1)
				max = 1;
			while (n != 1) {
				if (n % 2 == 0) 
					n /= 2; 
				else
					n = 3*n + 1;
				m++;
			}
			if (m > max) 
				max = m;
			a++;
		}
		if (max != 0 && max != 1)
			max += 1;
		results.push_back(max);
	}
	int c = 0;
	while (c < (int)results.size()) {
		for (int i=0; i<3; i++) {
			cout << results[c+i] << " ";
		}
		cout << endl; 
		c += 3;
	}
	return 0;
}