#include <iostream>
#include <list> 
using namespace std; 

int main() {
	int q; cin >> q; 
	list <int> books; 
	while (q--) {
		int count1 = 0;
		int count2 = 0;
		int size = 0;
		char c; cin >> c; 
		int b; cin >> b;
		if (c == 'L') {
				books.push_front(b);
		}
		else if (c == 'R') {
				books.push_back(b);

		}
		else if (c == '?') {
			list <int>::iterator it;
			for (it = books.begin(); it != books.end(); it++) {
				if ((*it) != b) {
					count1++; 
				} else 
					break;
			}
			list <int> :: reverse_iterator rit;
			rit = books.rbegin();
			while (rit != books.rend()) {
				if (*rit == b)
					break;
				count2++;
				rit++;
			}
			cout << min(count2, count1) << endl;
		}
	}
	return 0;
}