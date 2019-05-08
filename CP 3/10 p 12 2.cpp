#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main() {
	string s; getline(cin, s);
	locale loc;
	int alpha = 0, digit = 0, len = 0;
	for (int i = 0; i < (int) s.size(); i++) {
		if (s[i] == ' ') {
			if (len == 3)
				if (alpha == 1 && digit == 2) {
					s[i-1] = '*';
					s[i-2] = '*';
					s[i-3] = '*';
				}
			len = 0;
			digit = 0;
			alpha = 0;
		}
		if (s[i] != ' ' && isalpha(s[i], loc))
			alpha++;
		if (s[i] != ' ' && isdigit(s[i], loc))
			digit++;
		if (s[i] != ' ')
			len++;
	}
	cout << s << endl;
	return 0;
}