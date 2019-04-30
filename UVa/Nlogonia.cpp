#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	vector <string> results;
	int n;
	while (scanf("%d", &n) == 1 && n != 0) {
		int x, y; cin >> x >> y; 
		while (n--) {
			int a, b; cin >> a >> b;
			string position; 
			if (a == x || b == y)
				position = "divisa";
			else if (b > y && a > x)
				position = "NE";
			else if (b < y && a > x)
				position = "SE";
			else if  (b > y && a < x)
				position = "NO";
			else if (b < y && a < x) 
				position = "SO";
			results.push_back(position);
		}
	}
	for (auto r : results) 
		cout << r << endl;
	return 0;
}