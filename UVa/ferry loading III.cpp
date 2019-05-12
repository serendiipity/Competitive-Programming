#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 

int main() {
	int T; cin >> T; 
	while (T--) {
		int n, t, m; cin >> n >> t >> m; 
		int loaded = 0, current_time = 0;
		map <string, queue <int>> banks;
		int r[m];
		char pos = 'l';
		while (loaded < m) {
			int x; cin >> x; 
			string s; cin >> s; 
			if (loaded < n && x <= current_time) {
				
				r[loaded++] = current_time + t;
			} else {
				banks[s].push(x);
				loaded++;
			}
		}
		if (!banks["left"].empty() || !banks["right"].empty()) {
			if (banks[])
		}
	}
	return 0;
}