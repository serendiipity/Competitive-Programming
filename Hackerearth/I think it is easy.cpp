#include <iostream>
#include <vector>
#include <cstdio>
#include <cstring>
#include <string>
#include "stdio.h"
#include "string.h"
using namespace std;
 
 
class Varchar {
	public:
		string str;
		int index;
		Varchar(int, string);
};
 
Varchar::Varchar(int i, string s) {
	index = i;
	str = s;
}
 
void merge(vector <Varchar> & strings, int p, int q, int r) {
	vector <Varchar> L, R; 
	int left = 0, right = 0; 
	for (int i=p; i<=q; i++) {
		L.push_back(strings[i]);
	}
	for (int i=q+1; i<=r; i++) {
		R.push_back(strings[i]);
	}
	for (int i=p; i<=r; i++) {
		if (left == L.size()) {
			while (i<=r) {
				strings[i] = R[right];
				right++;
				i++;
			}
			return;
		} else if (right == R.size()) {
			while (i<=r) {
				strings[i] = L[left];
				left++;
				i++;
			}
			return;
		} else if ((L[left].str).size() <= (R[right].str).size()) {
			strings[i] = L[left];
			left++;
		} else if ((R[right].str).size() <= (L[left].str).size()) {
			strings[i] = R[right];
			right++;
		} else {
			if (R[right].index < L[left].index) {
				strings[i] = R[right];
				right++;
			} else {
				strings[i] = L[left];
				left++;
			}
		}
	}
}
 
void merge_sort(vector <Varchar> & strings, int l, int r) {
	if (l < r) {
		merge_sort(strings, l, (l+r)/2);
		merge_sort(strings, (l+r)/2 + 1, r);
		merge(strings, l, (l+r)/2, r);
	}
}
 
 
int main() {
	int T; cin >> T;
	getchar();
	while (T--) { 
		string line; 
		getline(cin, line);
		char cline[100];
		size_t len = line.copy(cline, line.size(), 0);
		cline[len] = '\0';
		char * cword = strtok(cline, " ");
		vector <string> words;
		while (cword != NULL) {
			string word(cword);
			words.push_back(word);
			cword = strtok(NULL, " ");
		}
		vector <Varchar> strings;
		int count = 0;
		for (int i = 0; i < (int) words.size(); i++) {
			Varchar varchar (count++, words[i]);
			strings.push_back(varchar);
		}
		merge_sort(strings, 0, strings.size()-1);
		cout << " ";
		for (auto s: strings)
			cout << s.str << " ";
		cout << endl;
	}
	return 0; 
}