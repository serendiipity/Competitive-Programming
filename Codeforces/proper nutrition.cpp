#include <iostream>
using namespace std;

int main() {
	long long n, a, b; cin >> n >> a >> b;
	long long first, remaining, cola, bars;
	int flag = 0;
	first = n/a;
	remaining = n - first * a;
	if (remaining % b == 0) {
		flag++;
		cola = first;
		bars = remaining / b;
		cout << "YES" << endl << cola << " " << bars << endl;

	} else {
		first = n/b;
		remaining = n - first * b;
		if (remaining % a == 0) {
			flag++;
			cola = first; 
			bars = remaining / a;
			cout << "YES" << endl << cola << " " << bars << endl;
		}
	} 
	if (!flag)
		cout << "NO" << endl;
	return 0;
}