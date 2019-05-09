#include <iostream>
#include <vector> 
#include <string> 
#include <cmath>
using namespace std; 
typedef pair <int, int> ii;
typedef vector <ii> vii;
typedef vector <bool> vb;

double convert(double v) {
	double a = (v * 100) + 0.5;
	int b = a; 
	return (double) b / 100; 
}
 
int main(void) {
	int n, count = 1;
	while (cin >> n) {
		if (n == 0)
			break;
		vii students;
		vb checked (2*n, false);
		double cost = 0;
		for (int i = 0; i < 2 * n; i++) {
			string s; cin >> s;
			int x, y; cin >> x >> y; 
			students.push_back(make_pair(x, y));
		}
		for (int i = 0; i < 2 * n; i++) {
			double min = 10000;
		//	cout << "student " << i << endl;
			int index;
			for (int j = 0; j < 2 * n; j++) {
				if (i == j || checked[i] || checked[j])
					continue;
				int x1 = students[i].first;
				int y1 = students[i].second; 
				int x2 = students[j].first;
				int y2 = students[j].second;
				double d = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
				d = convert(d);
			//	cout << "j: " << j << " ";
				cout << d << endl;
				if (d < min) {
					min = d;
					index = j;
				}
			}
		//	cout << endl;
			if (index != i && !checked[i] && !checked[index]) {
				cost += min;
				checked[i] = true;
				checked[index] = true;
			}
		}
		cout << "Case " << count << ": ";
		printf("%.2lf\n", cost);
		count++;
	}
	return 0;
}

// you have to store the differences first, and then based on different matchings add those up