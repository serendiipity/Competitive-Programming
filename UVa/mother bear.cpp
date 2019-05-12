#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	while (true) {
		string s; getline(cin, s);
		int flag = 1;
		if (s == "DONE")
			break; 
		int count = 0;
		int letters;
		for (int i = 0; i < s.size(); i++)
			if (s[i] != '!' || s[i] != '?' || s[i] != '.' || s[i] != ',')
				count++;
		letters = s.size() - count; 
		int l = 0, r = s.size()-1;
		while (l < r) {
			if (!isalpha(s[r]) || !isalpha(s[l])) {
				if (!isalpha(s[l]))
					l++;
				if (!isalpha(s[r]))
					r--;
				continue;
			}
			if (tolower(s[r]) != tolower(s[l])) {
				flag = 0;
				break;
			} else {
				l++; r--;
			}
		}
		if (flag) 
			cout << "You won't be eaten!" << endl;
		else 
			cout << "Uh oh.." << endl;
	}
}