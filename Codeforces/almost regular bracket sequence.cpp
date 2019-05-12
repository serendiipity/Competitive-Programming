#include <iostream>
#include <stack> 
#include <string>
using namespace std;

int main() {
	int n; cin >> n; 
	string s; cin >> s;
	stack <char> braces; 
	int count = 0;
	braces.push(s[0]);
	for (int i = 1; i < n - 1; i++) {
		if (!braces.empty()) {
			char b = braces.top(); braces.pop();
			if (b == '(' && s[i] == '(') {
				count++;
			} else if (b == ')' && s[i] == ')') {
				count ++;
			}
		} else {
			braces.push(s[i]);
		} 
	}
	if (!braces.empty())
		cout << 0 << endl; 
	else 
		cout << count << endl;
	return 0;
}