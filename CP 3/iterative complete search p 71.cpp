#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	string s; getline(cin, s);
	vector <int> numbers;
	while (s[0] != '0') {
		set <int> exists;
		int i = s.find(" ");
		int pos = 0;
		int count = 0;
		while (count < 8) {
			cout << s.substr(pos, i);
			int n;
		//	int n = stoi(s.substr(pos, i));
			i = s.find(" ");
			pos += i + 1;
			if (exists.find(n) != exists.end()) {
				numbers.push_back(n); count++;
				exists.insert(n);
			}
		}
		int n = numbers.size();
		sort(numbers.begin(), numbers.end());
			for (int a = 0; a < n; a++)
				for (int b = a + 1; b < n; b++) 
					for (int c = b + 1; c < n; c++) 
						for (int d = c + 1; d < n; d++) 
							for (int e = d + 1; e < n; e++) 
								for (int f = e + 1; f < n; f++)
									printf("%d %d %d %d %d %d\n", numbers[a], numbers[b], numbers[c], numbers[d], numbers[e], numbers[f]);
		numbers.clear();
		getline(cin, s);
	}
	return 0;
}