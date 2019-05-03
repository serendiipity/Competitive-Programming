#include <iostream>
#include <vector> 
using namespace std; 

void fibonacci(vector <int> & fib, const int n) {
	fib[0] = 1;
	fib[1] = 1;
	for (int i=2; i<n; i++)
		fib[i] = fib[i-1] + fib[i-2];
}


int main(void) {
	int n; cin >> n;
	vector <int> fib;
	vector <char> name;
	if (n <= 3) {
		while (n--)
			cout << 'O';
		cout << endl;
	}
	else {
		name.reserve(n+1);
		fib.reserve(n+1);
		for(int i=0; i<=n; i++)
			name.push_back('-');
		fibonacci(fib, n);
		for (int i=0; i<=n; i++) {
			if (fib[i]>n)
				break;
			name[fib[i]] = 'O';
		}
		for (int i=0; i<=n; i++)
			if (name[i] != 'O')
				name[i] = 'o';
		for (int i=1; i<=n; i++)
			cout << name[i]; 
		cout << endl;
	}
	return 0;
}