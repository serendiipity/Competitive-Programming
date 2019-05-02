#include <iostream>
#include <string>
using namespace std;

int main() {
	int T; cin >> T;
	int money = 0;
	while (T--) {
		string s; cin >> s;
		if (s == "donate") {
			int x; cin >> x;
			money += x;
		}
		else 
			cout << money << endl;
	}
	return 0;
}