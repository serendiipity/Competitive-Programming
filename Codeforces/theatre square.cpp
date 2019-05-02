#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long double n, m, a; cin >> n >> m >> a;
	long double first=n/a, second=m/a;
	long long l = ceil(first), L = ceil(second);
	long long result = l*L;
	cout << result << endl;
	return 0;
}