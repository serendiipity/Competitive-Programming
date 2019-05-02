#include <iostream>
#include <string> 
#include <map>
#include <utility>
#include <algorithm>
#include <set>
using namespace std; 

int main(void) {
	string word; cin >> word; 
	map <char, int> letters;
	for (int i=0; i<word.size(); i++)
		letters.insert(make_pair(word[i], 0));
	for (int i=0; i<word.size(); i++)
		letters[word[i]]++;
	int max = 0;
	map <char, int> :: iterator it; 
	set <char> chars;
	for (it = letters.begin(); it != letters.end(); it++) {
		if ((*it).second > max) {
			max = (*it).second;
			chars.clear();
			chars.insert((*it).first);
		}
		else if ((*it).second == max)
			chars.insert((*it).first);
	}
	int count = 0;
	for (it = letters.begin(); it != letters.end(); it++) 
		if ((*it).second == max)
			count++;
			
	cout << "max is " << max;
	cout << " and letters are: "; 
	for (auto r: chars)
		cout << r << " ";
	cout << endl;
	
	return 0;
}