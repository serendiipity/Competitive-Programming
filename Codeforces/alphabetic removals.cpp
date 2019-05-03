#include <iostream> 
#include <string> 
#include <map>
using namespace std; 

int main(void) {
	int deleted = 0, n, k; cin >> n >> k; 
	string s; cin >> s; 
	map <char, int> occurences;
	for (int i = 0; i < (int) s.size(); i++)
		occurences[s[i]]++;
	map <char, int> :: iterator it;
	it = occurences.begin();
	
	for (int i = 0; i < (int) s.size(), deleted < k; i = (i+1) % (int) s.size()) {
		if (s[i] == (*it).first) {
			s[i] = '-';
			deleted++;
			occurences[(*it).first]--;
		} 
		if (occurences[(*it).first] == 0) {
			it++;
			i = 0;
		}
	}
	for (auto c: s)
		if (c != '-')
			cout << c;
	return 0;
}