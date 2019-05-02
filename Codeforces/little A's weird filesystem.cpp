#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
using namespace std; 

int main(void) {
	long long n, m; cin >> n >> m;
	vector <string> numbers;
	int first =1;
	for(long long i=1; i<=m; i++) {
		while (first <=n) {
					numbers.push_back(to_string(first));
								first*=10;

		}
		first/=10 + 1;
	}
	sort(numbers.begin(), numbers.end());
	for (auto r:numbers)
	cout << r << endl;
}