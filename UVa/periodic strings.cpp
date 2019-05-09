#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	int T; cin >> T; 
	while (T--) {
		string s; cin  >> s;
		set <string> subs;
		int i;
		int flag = 0;
		for (i = 1; i < s.size(); i++) {
			int pos = 0;
			while (pos < s.size()) {
				string sub = s.substr(pos, i);
				pos += i;
				subs.insert(sub);
			}
		//	cout << "index " << i << endl;
			if (subs.size() == 1) {
				cout << i << endl;
				flag = 1;
				break;
			}
			subs.clear();
		}
		if (flag == 0)
			cout << s.size() << endl;
		if (T) cout << endl;
		
	}
	return 0;
}