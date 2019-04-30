#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	vector <char> results; 
	int cases; cin >> cases;
	while (cases--) {
		int n; cin >> n;
		string num;
		num = to_string((((n * 567) / 9 + 7492) * 235) / 47 - 498 );
		results.push_back(num[(int)num.size()-2]);
	}
	for (auto r: results)
		cout << r << endl;
	return 0;
}