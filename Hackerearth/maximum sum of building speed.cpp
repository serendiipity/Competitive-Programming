#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int sum = 0, n; cin >> n; 
	n *= 2;
	vector <int> w;
	while (n--) {
		int x; cin >> x; 
		w.push_back(x);
	}
	sort(w.begin(), w.end());
	for (int i = 0; i < (int) w.size()-1; i += 2)
		sum += min(w[i], w[i+1]);
	cout << sum << endl; 
	return 0;
}