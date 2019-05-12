#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <cstdio>
using namespace std;

int main() {
	char line[30];
	string str = "";
	int flag;
	while (scanf("%s", line) != EOF) {
		flag = 1;
		for (int i = 0; i < 8; i++)
			if (line[i] != '.' || (i == 7 && line[i] == '.')) {
				if (i == 7 && line[i] != '.')
					break;
				string new_str(line); 
				str += new_str;
				str += " ";
				flag = 0;
				break;
			} 
	}
				
	cout << "your string is " << str << endl;
	return 0;
}