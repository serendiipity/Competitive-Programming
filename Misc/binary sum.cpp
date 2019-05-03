#include <iostream>
#include <vector>
#include <stack>
using namespace std;

stack <int> sum(const vector <int> & a, const vector <int> & b) {
	int sum = 0, carry = 0;
	stack <int> result;
	for (int i=a.size()-1; i>=0; i--) {
		sum = a[i] + b[i];
		if (sum + carry == 0 || sum + carry == 1) {
			result.push(sum + carry);
			if (carry) {
				carry = 0; 
			}
		} else if (sum + carry == 2) {
			result.push(0);
			if (carry == 0) {
				carry++;
			}
		} else {
			result.push(1); 
			
		}
	}
	if (carry) {
		result.push(1); 
	}
	return result;
}

int main() {
	int n; cin >> n; 
	vector <int> a(n), b(n);
	for(int j=0; j<2; j++) {
		for(int i=0; i<n; i++) {
			int x; cin >> x; 
			if (j==0)
				a[i] = x;
			else 
				b[i] = x;
		}
	}
	stack <int> result = sum(a, b);
	while (!result.empty()) {
		cout << result.top(); 
		result.pop();
	}
	// the final result should be 10111010
	cout << endl;
	return 0;
}