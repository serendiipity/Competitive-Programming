#include <iostream> 
#include <string> 
#include <cstdio>
#include <cstring> 
#include <stack>
using namespace std; 

int main(void) {
	int N; cin >> N;
	getchar();
	for (int i = 1; i <= N; i++) {
		stack <string> words;
		string str;
		getline(cin, str);
		char cstr[10000];
		strcpy(cstr, str.c_str());
		char * cword = strtok(cstr, " ");
		while (cword != NULL) {
			string word(cword);
			words.push(word);
			cword = strtok(NULL, " ");
		}
		cout << "Case #" << i << ": ";
		while (!words.empty()) {
			cout << words.top() << " ";
			words.pop();
		}
		cout << endl;
	}
	return 0;
}