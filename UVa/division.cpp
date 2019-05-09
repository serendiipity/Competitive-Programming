#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool distinct(string s) {
	for (int i = 0; i < s.size(); i++) {
		for (int j = i; j < s.size(); j++) {
			if (j != i && s[i] == s[j])
				return false;
		}
	}
	return true;
}

int main() {
	vector <int> numbers;
	vector < pair <int, int> > result;
	string s = "01234";
	int n; cin >> n;
	numbers.push_back(stoi(s));
	for (int i = 0; i <= 110; i++) {
		string copy = s;

		cout << "hello " << i << endl;
		while (next_permutation(s.begin(), s.end()))
			numbers.push_back(stoi(s));
		cout << " copy is " << copy << endl;
		copy[s.size()-1] += 1;
		while (!distinct(copy))
			copy[s.size()-1] += 1;
		s = copy;
	}
	 for (int a = numbers[numbers.size()-1]; a > 1; a--)
		for (int b = numbers[0]; b <= a / n; b++) 
			if (a % b == 0 && a / b == n)
				result.push_back(make_pair(a, b)); 
	/* for (int a = 98765; a > 1; a--) {
		for (int b = stoi(s); b <= a / n; b++) { 
			if (a % b == 0 && a / b == n)
				cout << a << " " << b << endl;
				
		}
	} */ 
	return 0;
}