#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	string username; cin >> username;
	set <char> letters;
	for (int i=0; i<(int)username.size(); i++) {
		letters.insert(username[i]);
	}
	if((int)letters.size() % 2 == 0)
		cout << "CHAT WITH HER!" << endl;
	else 
		cout << "IGNORE HIM!" << endl;
	// your code goes here
	return 0;
}