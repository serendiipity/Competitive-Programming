#include <iostream>
#include <set>
#include <string>
#include <tuple>
typedef tuple < int, set <int>, int, char > ct
using namespace std; 

int main() {
	int T; cin >> T;
	string s; 
	while (getline(cin, s)) {
		vector < ct > subs;
		if (!s.empty()) {
			int a, b, c;
			char d;
			int pos = s.find(' ');
			int i = 0;
			string str = s.substr(i, pos);
			a = stoi(str);
			i += str.size() - 1;
			pos = s.find(' ', pos + 1);
			str = s.substr(i, pos - i);
			b = stoi(str);
			i += str.size() - 1;
			pos = s.find(' ', pos + 1);
			str = s.substr(i, pos - i);
			c = stoi(str);
			i += str.size() - 1;
			pos = s.find(' ', pos + 1);
			str = s.substr(i, pos - i);
			d = str[0];
		}
		cout << a << " " << b << " " << c << " " << d << endl;
	}

	
	return 0;
}