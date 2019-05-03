#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, l; cin >> n >> l; 
	vector <long double> lanterns;
	for (int i = 0; i < n; i++) {
		long double x; cin >> x;
		lanterns.push_back(x);
	}
	sort(lanterns.begin(), lanterns.end());
	long double res = 2 * lanterns[0];
	for (int i = 1; i < n; i++)
		res = max(res, (lanterns[i] - lanterns[i-1]));
	res = max(res, 2 * (l - lanterns[n-1]));
	printf("%.10Lf\n", res/2);
	return 0;
}