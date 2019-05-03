#include <iostream>
#include <vector> 
#include <string> 
using namespace std; 

int main(void) {
	string s; cin >> s; 
	for (int j=1; j<=26; j++) {
		string copy = s;
		for (int i=0; i<s.size(); i++) {
			if (copy[i] <= '9' && copy[i] >= '0') {
				if (copy[i] + j > '9') {
					copy[i] += '0' - '9' + j -1; 
				} else {
					copy[i] += j ;
				}
			}
			else if (copy[i] == '{' || copy[i] == '}' || copy[i] == '_')
				continue;
			else if (copy[i] + j > 'z') {
				copy[i]  += 'a' + j - 'z'-1;
			} else {
				copy[i] += j;
			}
		}
		for(auto a: copy) {
			cout << a;
		}
		cout << endl;
	}
	// do capital letters 
	return 0;
}