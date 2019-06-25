#include <iostream>
#include <bits/stdc++.h>
using namespace std; 

int lcs[100][100];

bool by_length(string a, string b) {
	return a.size() > b.size();
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	vector <string> words;
	string target; cin >> target;
	int n; cin >> n; 
	for (int i = 0; i < n; i++) {
		string s; cin >> s; 
		words.push_back(s);
	}
	sort(words.begin(), words.end(), by_length);
	memset(lcs, 0, sizeof lcs);

	for (int w = 0; w < n; w++) {
		for (int i = 1; i <= target.size(); i++) {
			for (int j = 1; j <= words[w].size(); j++) {
				if (words[w][j-1] == target[i-1])
					lcs[i][j] = lcs[i-1][j-1] + 1;
				else 
					lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
			}
		}
		
		if (lcs[target.size()][words[w].size()] == words[w].size()) {
			cout << words[w] << endl;
			break;
		}
	}

}