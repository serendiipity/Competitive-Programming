#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool case_sort(char a, char b) {
	if (tolower(a) == tolower(b))
		return a < b;
	else 
		return tolower(a) < tolower(b);
}

int main() {
	int n; cin >> n; 
	while (n--) {
		string s; cin >> s; 
		sort(s.begin(), s.end(), case_sort);
		cout << s << endl;
		while (next_permutation(s.begin(), s.end(), case_sort))
			cout << s << endl;
	}
	return 0;
}