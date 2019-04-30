#include <vector> 
#include <iostream> 
using namespace std;

int main(void) {
	int n; cin >> n;
	vector <char> results;
	while (n--) {
		int a, b; cin >> a >> b;
		if (a > b) {
			results.push_back('>');
		}
		else if (a < b) {
			results.push_back('<');
		}
		else
			results.push_back('=');
	}
	for (auto r : results)
		cout << r << endl;
return 0;
}