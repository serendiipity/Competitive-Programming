#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string lower_case(string s) {
	for (int i = 0; i < s.size(); i++) 
		s[i] = tolower(s[i]);
	return s;
}

bool a_sort(string a, string b) {
	string A = a, B = b; 
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	return lower_case(A) < lower_case(B);
}

int main() {
	string word;
	vector <string> dictionary; 
	while (cin >> word) {
		if (word == "#")
			break;
		dictionary.push_back(word);
	}
	sort(dictionary.begin(), dictionary.end(), a_sort);
	int i = 0;
	int b = 0;
	
	vector <string> copy = dictionary;
	for (int i = 0; i < copy.size(); i++) {
		copy[i] = lower_case(copy[i]);
		sort(copy[i].begin(), copy[i].end());
	}
	cout << "sorted dictionary" << endl;
	for (auto w: dictionary)
		cout << w << " ";
	cout << endl;
	cout << "sorted copy" << endl;
	for (auto w: copy)
		cout << w << " ";
	cout << endl;
	while (i < dictionary.size()) {

		while (i < dictionary.size() && copy[i] == copy[i+1])
			i++;
		if (i != b) {
			dictionary.erase(dictionary.begin() + b, dictionary.begin() + i + 1);
			copy.erase(copy.begin() + b, copy.begin() + i + 1);
		} else {
			i++;
		}
		// delete occurences of same word
	}
	for (auto w: dictionary)
		cout << w << endl;
	return 0;
}