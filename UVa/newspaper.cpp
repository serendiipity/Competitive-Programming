#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		double money = 0;
		int x; cin >> x;
		map <char, int> letters;
		while (x--) {
			char c; cin >> c; 
			int a; cin >> a; 
			letters.insert(make_pair(c, a));
		}
		int l; cin >> l;
		l += 1;
		while (l--) {
			string line;
			getline(cin, line);
			for (int i = 0; i < line.size(); i++)
				if (letters.count(line[i]) != 0)
					money += letters[line[i]];
		}
		printf("%.2lf$\n", money / 100);
	}
	return 0;
}