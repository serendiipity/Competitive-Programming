#include <iostream>
#include <bits/stdc++.h>
using namespace std; 

int main() {
	int m, n; 
	double p, a;
	while (cin >> m >> p >> a >> n) {
		if (m < 0) 
			break;
		vector <double> records(m+1, 0); 
		while (n--) {
			int x; cin >> x;
			double y; cin >> y;
			records[x] = y;
		}
		double depreciation = records[0];
		double value = a + p;
		double owed = a;
		value = value - value * depreciation;
		for (int i = 0; i <= m; i++) {
			if (records[i] != 0)
				depreciation = records[i];
				if (owed < value || owed <= 0) {
				 if (i == 1 ) {
					cout << "1 month" << endl; 
				} else {
				//	if (i == 0)
						cout << i;
				//	else 
					//	cout << i + 1;
					cout << " months" << endl;
					
				}
				break;
			}
			owed -= (a/m);
			value = value - (value * depreciation);
			
		}
	}
	return 0;
}