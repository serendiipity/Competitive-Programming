#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 

int main() {
	double h, m;
	while (scanf("%lf:%lf", &h, &m) == 2 && (h != 0 || m != 0)) {
		double result = (h + (m / 60.)) * 30 - (m * 6);
		if (result < 0)
			result = abs(result);
		if (result > 180)
			printf("%.3f\n", 360 - result);
		else 
			printf("%.3f\n", result);
	}
	return 0;
}