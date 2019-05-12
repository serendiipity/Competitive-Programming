#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string line;
	int c = 1;
	while (cin >> line) {
		if (line == "end")
			break; 
		vector < stack <char> > stacks;
		for (int i = 0; i < line.size(); i++) {
			bool placed = false;
			if (!stacks.empty()) {
				for (int j = 0; j < stacks.size(); j++) {
					if (stacks[j].top() >= line[i]) {
						stacks[j].push(line[i]);
						placed = true;
						break;
					}
				}
				if (!placed) {
					stack <char> new_stack; 
					new_stack.push(line[i]);
					stacks.push_back(new_stack);
				}
			} else {
				stack <char> new_stack; 
				new_stack.push(line[i]);
				stacks.push_back(new_stack);
			}
		}
		cout << "Case " << c++ << ": " << stacks.size() << endl;
	}
	return 0;
}