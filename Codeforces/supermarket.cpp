#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	vector <double> prices;
	while (n--) {
		double a, b; cin >> a >> b; 
		prices.push_back(a/b);
	}
	sort(prices.begin(), prices.end());
	printf("%.8lf\n", prices[0] * m);
	return 0;
}