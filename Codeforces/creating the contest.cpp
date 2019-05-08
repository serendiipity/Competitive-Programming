#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
	vector <int> problems;
	int n; cin >> n; 
	for (int i = 0; i < n; i++) {
		int d; cin >> d;
		problems.push_back(d);
	}
	int count = 0, max = 0;
	for (int i = 1; i < n; i++) {
		if (problems[i-1] * 2 >= problems[i]) {
			count++;
			if (count > max)
				max = count;
		} else 
			count = 0;
	}
	cout << max + 1;
	return 0;
}