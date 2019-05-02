#include <iostream>
#include <string> 
using namespace std; 

int main(void) {
	int count=0, n; cin >> n; 
	string s; cin >> s; 
	for (int i=0; i<(int)s.size(); i++) {
		if (s[i+1]==s[i]) {
			if (s[(i+2)%n] != s[i]) {
				char temp; 
				cout << "before " << s << endl;
				temp = s[i+1];
				s[i+1] = s[(i+2)%n];
				s[(i+2)%n]=temp;
				cout << "after " << s << endl;
				count++;
			}
		}
	}
	for (int i=0; i<(int)s.size()-1; i++) {
		if (s[i]==s[i+1]) {
			if (s[i]=='b')
				s[i]='r';
			else 
				s[i]='b';
			count++;
		}
	}
	cout << count << endl;
	return 0;
}