#include <iostream>
#include <string>
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	int c = 0, i = c;
	while (i < n) {
		cout << s[i];
		c++;
		i += c;
	}
	return 0;
}