#include <iostream>
#include <string>
using namespace std;

int main() {
	string s; cin >> s; 
	int k; cin >> k; 
	for (int i=0; i<s.size(); i++) {
		if (s[i] + k > 'Z') {
			int diff = 'Z' - s[i];
			s[i] = 'A' + k - diff - 1;
			
		}
		else 
			s[i] = s[i] + k;
	}
	cout << s << endl;
	return 0;
}