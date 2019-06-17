#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 

int main() {
	int months, records;
	double down, amount, value, monthly, d, owed;
	
	while (cin >> months >> down >> amount >> records) {
		if (months < 0)
			break;
			
		double depreciation[101] = {0};
	
		for (int r = 0; r < records; r++) {
			int x; cin >> x;
			double y; cin >> y; 
			depreciation[x] = y;
		}
		
		double d = depreciation[0];
		int m = 0;
		value = amount + down;
		owed = amount;
		monthly = owed / months;

		for (int m = 0; m <= months; m++) {
 			if (depreciation[m] != 0)	
				d = depreciation[m];
			value -= value * d; 
			if (owed < value) {
				if (m == 1)
					cout << "1 month" << endl;
				else 
					cout << m << " months" << endl;
				break;
			}
			owed -= monthly;
		}
	}
	
	return 0;
}