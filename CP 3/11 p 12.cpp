#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string s; cin >> s;
	char op;
	char first, second;
	stack <char> expr;
	for (int i = 0; i < (int) s.size(); i++) {
		if (s[i] == '(') {
			i++;
			while (s[i] != ')') {
				expr.push(s[i]);
				i++;
			}
			while (!expr.empty()) { 
				first = expr.top(); expr.pop();
				int f = first - '0', s;
				op = expr.top(); expr.pop();
				if (op == '*') {
					second = expr.top(); expr.pop();
					s = second - '0';
				}
				cout << f * s << endl;
			}
				
			
		}
				
	}
	return 0;
}