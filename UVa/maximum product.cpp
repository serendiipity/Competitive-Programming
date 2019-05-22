#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int main(void) {
	int n, c = 1;
	while (cin >> n) {
		vector <ll> e;
		while (n--) {
			ll x; cin >> x;
			e.push_back(x);
		}
		int E = e.size();
		ll m = LLONG_MIN;
		for (int i = 0; i < E; i++) {
			for (int j = i; j < E; j++) {
				ll product = 1, m_in = LLONG_MIN;
				for (int k = i; k <= j; k++) {
					product *= e[k];
					if (product > m_in)
						m_in = product;
				}
				if (m_in > m)
					m = m_in;
			}
			
		}
		
		if (m < 0)
			m = 0;
		cout << "Case #" << c++ << ": The maximum product is " << m << '.' << endl << endl;		
	}
	return 0;
}