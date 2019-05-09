#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	vector <bool> primes (n + 1, true);
	int current = 4;
	int crossed = 0;
	primes[0] = false;
	primes[1] = false;
	for (int i = 2; i <= n;) {
		while (current <= n) {
			primes[current] = false;
			crossed++;
			current += i;
		}
		do {
			i++;
		} while (primes[i] == false);
		current = 2 * i;
	}
	for (int i = 0; i < primes.size(); i++)
		if (primes[i])
			cout << i << " ";
	cout << endl;
	return 0;
}