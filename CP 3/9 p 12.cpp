#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int X, Y; cin >> X >> Y;
	string first, second; cin >> first; 
	vector <char> representation; 
	char c = '0';
	for (int i = 0; i < 36; i++) {
		representation.push_back(c);
		if (c == '9')
			c = 'A';
		else 
			c++;
	}
	for (int i = 35; i >= 0; i++) {
		
	}
	return 0;
}