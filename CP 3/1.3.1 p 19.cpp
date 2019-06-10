#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string line;
	while (getline(cin, line)) {
		char c_line[100];
		strcpy(c_line, line.c_str());
		int sum = 0;
		for (int i = 0; i < strlen(c_line) + 1; ) {
			char c_int[10]; 
			sscanf(c_line + i, "%s", c_int);
			i += strlen(c_int) + 1;
			int n;
			stringstream(c_int) >> n;
			sum += n;
		}
		cout << sum << endl;
	}
	return 0;
}