#include <iostream>
#include <string>
#include <vector>
using namespace std; 

int main(void) {
	int T; cin >> T;
	while (T--) {
		int n, m; cin >> n >> m;
		vector <string> bits;
		for(int i=0; i<n; i++) {
			string s; cin >> s;
			bits.push_back(s);
		}
		int zero=0, one=0;
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				if (i==0 || j==0 || i==n-1 || j==m-1) {
					if (bits[i][j]=='0')
						zero++;
				}
				else if (bits[i][j]=='1')
					one++;
			}
		}
		if (zero>one)
			cout << -1 << endl;
		else
			cout << zero << endl;
	}
	return 0;
}