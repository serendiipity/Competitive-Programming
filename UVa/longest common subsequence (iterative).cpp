#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lcs[1001][1001];

int main() {
	int A, B;
	string a; 
	while (cin >> a) {
		string b; cin >> b; 
		memset(lcs, 0, sizeof(lcs));
		A = a.size(); 
		B = b.size();
		for (int i = 1; i <= A; i++) {
			for (int j = 1; j <= B; j++) {
				if (a[i-1] == b[j-1]) {
					lcs[i][j] = lcs[i-1][j-1] + 1;
				} else {
					lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
				}
			}
		}
		cout << lcs[A][B] << endl;
	}
	return 0;
}