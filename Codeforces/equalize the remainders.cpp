#include <iostream> 
#include <vector>
#include <map>
using namespace std; 

int main(void) {
	int count = 0, n, m; cin >> n >> m;
	vector <int> numbers;
	map <int, int> remainders;
	for (int i = 0; i < n; i++) {
		int x; cin >> x; 
		numbers.push_back(x);
		remainders[x%m]++;
	}
	
	cout << count << endl;
	return 0;
}