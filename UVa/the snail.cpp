#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	double h, u, d, f;
	while (cin >> h >> u >> d >> f) {
		if (h == 0)
			break;
		int day = 1;
		int flag = 1;
		double fatigue = (u * f) / 100;
		double current = 0; 
		while (true) {
			current += u;
			if (u > 0)
				u -= fatigue;
			if (current > h)
				break;
			current -= d;
			if (current < 0) {
				flag = 0;
				break;
			}
			day++;
		}
		if (flag)
			cout << "success on day " << day << endl;
		else 
			cout << "failure on day " << day << endl;
	}
	return 0;
}