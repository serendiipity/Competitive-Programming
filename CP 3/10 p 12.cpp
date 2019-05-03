#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	int alpha = 0, digits = 0;
	string s; cin >> s;
	for (int i = 0; i < (int) s.size(); i++) {
		if (isalpha(s[i]))
			alpha++;
		else if (isdigit(s[i]))
			digits++;
	}
	if (alpha == 1 && digits == 2)
		for (int i = 0; i < (int)s.size(); i++)
			s[i] = '*';
	cout << s << endl;
	return 0;
}