#include <iostream>
#include <cmath>
using namespace std; 

int main(void) {
	double arr[3][2];
	for (int i=0; i<3; i++) {
		double x, y; cin >> x >> y;
		arr[i][0] = x; 
		arr[i][1] = y; 
	}
	double b, h;
	b = sqrt((arr[2][0]-arr[1][0])*(arr[2][0]-arr[1][0]) + (arr[2][1]-arr[1][1])*(arr[2][1]-arr[1][1]));
	h = sqrt(b*b-(b/2)*(b/2));
	double area = 0.5 * b * h;
	cout << area << endl;
	return 0;
}