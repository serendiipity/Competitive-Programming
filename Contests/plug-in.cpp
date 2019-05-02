#include <vector> 
#include <iostream> 
#include <string>
using namespace std;

int main(void) {
	string s; cin >> s;
	vector <char> letters;
	vector <char> copy; 
	for (int i=0; (int)i<s.size(); i++) {
		if (copy.empty() || !(s[i] == copy.back())) 
			copy.push_back(s[i]);
		else if (s[i] == copy.back())
				copy.pop_back();
	}
	for (auto r: copy)
		cout << r;
		
	return 0;
}