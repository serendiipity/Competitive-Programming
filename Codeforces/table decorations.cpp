#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 

int main(void) {
	vector <long long> rgb(3); 
	for (int i=0; i<3; i++) {
		long long x; cin >> x; 
		rgb[i] = x;
	}
	sort(rgb.begin(), rgb.end());
	long long result = (rgb[0] + rgb[1] + rgb[2]) / 3;
	if (rgb[0] + rgb[1] < result)
		cout << rgb[0] + rgb[1] << endl;
	else 
		cout << result << endl;
	
}