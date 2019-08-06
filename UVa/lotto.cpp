#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, flag = 0;
	vector <int> v;
	while (cin >> k) {
		if (!k)
			break;
		if (flag) 
			cout << endl;
		else 
			flag++;
		v.clear();
		for (int i = 0; i < k; i++) {
			int x; cin >> x; 
			v.push_back(x);
		}
		for (int a = 0; a < k; a++) 
			for (int b = a + 1; b < k; b++)
				for (int c = b + 1; c < k; c++)
					for (int d = c + 1; d < k; d++)
						for (int e = d + 1; e < k; e++)
							for (int f = e + 1; f < k; f++)
								printf("%d %d %d %d %d %d\n", v[a], v[b], v[c], v[d], v[e], v[f]);
			
			
	}
	return 0;
}