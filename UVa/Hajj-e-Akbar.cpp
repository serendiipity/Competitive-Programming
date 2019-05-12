#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string line; 
	int count = 1;
	while (cin >> line) {
		if (line == "*")
			break;
		cout << "Case " << count++ << ": ";
		if (line == "Hajj")
			cout << "Hajj-e-Akbar" << endl;
		else 
			cout << "Hajj-e-Asghar" << endl;
	}
	return 0;
}