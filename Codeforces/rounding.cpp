#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	if (n % 10 != 0 ) {
		int result = n/10;
		result *= 10;
		int a; 
		a = n - result;
		if (a > 5)
			result += 10;
	
		cout << result <<  endl;
	}
	else 
		cout << n << endl;
return 0;
}