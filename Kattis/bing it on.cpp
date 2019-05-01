#include <iostream> 
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main(void) {
	int n; cin >> n;
	map <char,int> letters;
	char letter = 'a';
	for(int i=0; i<26; i++) {
		letters.insert(pair <char, int> (letter, 0));
		letter++;
	}
	vector <int> results;
	string word; cin >> word;
	while (n--) {
			cout << "the word is " << word << endl;
			cout << "in the map " << letters[word[0]] << endl;

		if (letters[word[0]] != 0) {
			results.push_back(letters[word[0]]);
			letters[word[0]] += 1;
		}
		else {
			letters[word[0]] += 1;
			results.push_back(0);
		}
	cin >> word;
	}
	for (auto r: results)
		cout << r << endl;
/*	int m; m = n;
	vector <char> letters;
	vector <int> results;
	vector <string> words;
			string word; cin >> word;
			words.push_back(word);


	while (n--) {
		letters.push_back(word[0]);
		cout << "the letter is " << letters[m-n +1] << endl;
		//results.push_back(count(letters.begin(), &letters[m-n], letters[m-n]));

		cin >> word;
	}

	for (auto c : results)
		cout << c << endl; */



	return 0;
}