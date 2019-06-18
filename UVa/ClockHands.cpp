#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int h, m; 
	
	while (scanf("%d:%d", &h, &m) == 2 && (h != 0) || (m != 0)) {
		int h_deg = h * 30 + (m/60.) * 30;
		int m_deg = m * 6;
		int result = h_deg - m_deg; 
		cout << (result > 180 ? 360 - result : result) << endl; 
	}
		
	return 0;
}