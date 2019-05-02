#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string s; cin >> s;
	char c = 'a';
	int count = 0;
	for(int i=0; i<(int)s.size(); i++) {
		if (abs(s[i]-c) >= 26 - abs(s[i]-c)) 
			count += 26 - abs(s[i]-c);
		else 
			count += abs(s[i]-c);
		c = s[i];
	}
	cout << count << endl;
	return 0;
}