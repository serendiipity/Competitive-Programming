#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef vector <int> vi;
typedef set <int> si;

vi primes;
vi e;

void Sieve(int n) {
	e.clear();
	e.resize(n, true);
	int current = 4;
	int crossed = 0;
	e[0] = false;
	e[1] = false;
	for (int i = 2; i <= n;) {
		while (current <= n) {
			e[current] = false;
			crossed++;
			current += i;
		}
		do {
			i++;
		} while (e[i] == false);
		current = 2 * i;
	}
	for (int i = 0; i < e.size(); i++)
		if (e[i])
			primes.push_back(i);
}

int main() {
	int t; cin >> t; 
	while (t--) {
		si f; // to hold factors 
		int L, R, a, b;
		cin >> L >> R >> a >> b;
		Sieve(R);
		int x;
		int v = R;
		while (v--) {
			x = v;
			si res;
			int flag = 0;
			int i = 0; 
			while (x > 1) {
				cout << "trying x " << x << endl;
				cout << "with  " << primes[i] << endl;
				if (x % primes[i] == 0) {
					
					int r = x / primes[i];
					
					if (res.count(x/primes[i])) {
						i = 0;
						break;
					} else {
						if (x == 1) {
							cout << x << endl;
							flag = 1;
							i = 0;
							break;
						} else {
							x /= primes[i];
							res.insert(primes[i]);
							i = 0;
						}
					}
				} else 
					i++;
				
			}
			if (flag)
				break;
		
		}
	}
	return 0;
}