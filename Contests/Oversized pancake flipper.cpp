#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int T; cin >> T; 
	for (int t = 1; t <= T; t++) {
		string s; cin >> s;
		int i, flag = 0, count = 0, k; cin >> k; 
		for (i = 0; i < (int) s.size() - k; i++) {
			if (s[i] == '-') {
				for (int j = i; j < k + i; j++) {
					if (!flag) {
						count++;
						flag++;
					}
					if (s[j] == '-')
						s[j] = '+';
					else 
						s[j] = '-';
				}
				while (i < s.size() && s[i+1] == '+')
					i++;
				flag = 0;

			}
		}
		flag = 0;
		int minus = 0;
	//	cout << "the end " << s << endl;
		for (; i < s.size(); i++) 
			if (s[i] == '-')
				minus++;
		flag = 0;

		if (minus == k) {
			count++;
			minus = 0;
		}
		if (minus) {
			cout << "Case #" << t << ": IMPOSSIBLE" << endl;
			flag++;
		} else 
			cout << "Case #" << t << ": " << count << endl;
	}
	return 0;
}