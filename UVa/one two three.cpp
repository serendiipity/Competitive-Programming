#include <iostream>
#include <string>
using namespace std;

int main() {
	int n; cin >> n; 
	while (n--) {
		string s; cin >> s;
		int two = 0, one = 0;
		string TWO = "two", ONE = "one";
		if (s.size() == 3) {
			for (int i=0; i<3; i++) {
				if (s[i] == TWO[i]) 
					two++;
				else if (s[i] == ONE[i])
					one++;
			}
			if (two>=one) 
				cout << "2" << endl;
			else 
				cout << "1" << endl;
		}
		else 
			cout << "3" << endl;
	}
	return 0;
}