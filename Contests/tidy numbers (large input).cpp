#include <iostream> 
#include <string> 
#include <algorithm> 
#include <cmath>
using namespace std; 

int main(void) {
	int T; cin >> T; 
	for (int t = 1; t <= T; t++) {
		string s; cin >> s; 
		if (is_sorted(s.begin(), s.end()))
			cout << "Case #" << t << ": " << s << endl;
		else {
			int count, i = 0;
			long long x = stol(s);
			while (i < (int) s.size() - 1 && s[i] <= s[i+1])
				i++;
			while (s[i] == s[i-1])
				i--;
			count = (int) s.size() - i - 1;
			x -= (x % (long long)pow(10, count)) + 1;
			cout << "Case #" << t << ": " << x << endl;
		}
	} 
}