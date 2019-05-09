#include <bits/stdc++.h>
using namespace std; 

int main(void) {
	int T; cin >> T; 
	while (T--) {
		int n; cin >> n; 
		map <int, int> flakes;
		vector <int> s;
		while (n--) {
			int x; cin >> x; 
			s.push_back(x);
		}
		int count = 0, max = -1;
		for (int i = 0; i < s.size(); i++) {
			if (!flakes.count(s[i])) {
				flakes.insert(make_pair(s[i], 1));
				count++;
				if (i < s.size() - 1 && s[i + 1] == s[i]) {
					if (max < count)
						max = count;
					count = 0;
					flakes.clear();
				}
					
			} else if (max < count) {
				max = count;
				flakes.clear();
				count = 0;
			} else {
				flakes.clear();
				count = 0;
			}
		}
		if (count > max)
			max = count;
		cout << max << endl;
	}
	return 0;
}