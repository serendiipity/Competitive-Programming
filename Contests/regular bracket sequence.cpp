#include <iostream>
#include <stack>
#include <string>
using namespace std; 

int main(void) {
	string sequence; cin >> sequence;
	stack <char> brackets;
	for(int i=0; i<(int)sequence.size(); i++) {
		if (sequence[i] == '(')
			brackets.push(sequence[i]);
		else {
			if (brackets.empty())
				brackets.push(sequence[i]);
			else if (brackets.top() == '(') 
				brackets.pop();
			else
				brackets.push(sequence[i]);
		}
			
	}
	cout << (int)sequence.size() - (int)brackets.size() << endl;
	return 0;
}