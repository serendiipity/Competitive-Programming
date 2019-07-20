#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector <int> parse_ints(string s) {
	stringstream str(s);
	string xs;
	vector <int> v;
	int x, i = 0; 
	char c;
	while (i <= s.size()) {
		getline(str, xs, ',');
		i += xs.size() + 1;
		x = stoi(xs);
		v.push_back(x);
	}
	return v;
}

int main() {
	string s; cin >> s;
	vector <int> r = parse_ints(s);
	for (auto e: r)
		cout << e << endl;
	return 0;
}