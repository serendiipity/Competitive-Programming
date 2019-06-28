#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	while (cin >> n) {
		if (!n)
			break;
			
		int m = INT_MIN, sum = 0;
		
		for (int i = 0; i < n; i++) {
			int x; cin >> x; 
			sum += x; 
			if (sum > m)
				m = sum; 
			if (sum < 0)
				sum = 0;
		}
		if (m <= 0)
			cout << "Losing streak." << endl;
		else 
			cout << "The maximum winning streak is " << m << "." << endl;
	}
	return 0;
}