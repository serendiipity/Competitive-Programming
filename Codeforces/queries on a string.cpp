#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string s; cin >> s;
	int t; cin >> t;
	while (t--) {
		int l, r, c; cin >> l >> r >> c;
		while (c--) { // calculate the number of shifts it'll have to perform
		// c modulo size?
			string sub = s.substr(l-1, r-l+1);
			char last = sub[(int)sub.size()-1];
			for (int i=(int)sub.size()-1; i>0; i--)
				sub[i] = sub[i-1];
			sub[0] = last;
			s.replace(l-1, r-l+1, sub);
		}
	}
	cout << s << endl;
	return 0;
}