#include <iostream>
#include <vector>
#include <string>
using namespace std;

void rotate(vector <string> & square, int size) {
	vector <string> new_square (size);
	for (int i = 0; i < size; i++) {
		string s;
		for (int j = 0; j < size; j++)
			s.push_back('0');
		new_square.push_back(s);
	}
	cout << "here " ;
	for (auto s: square) {
		for (auto c: s)
			cout << c;
		cout << endl;
	}
	cout << "the end " << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			new_square[j][size - i - 1] = square[i][j];
		}
	}
}

int main() {
	int big, small; 
	while (cin >> big >> small) {
		if (big == 0)
			break;
		vector <string> big_square (big);
		vector <string> small_square (small);
		for (int i = 0; i < big; i++) {
			string s; cin >> s;
			big_square.push_back(s);
		}
		for (int i = 0; i < small; i++) {
			string s; cin >> s; 
			small_square.push_back(s);
		}
		
		
		for (int i = 0; i < 3; i++) {
			rotate(small_square, small);
			// check
		}
	}
	return 0;
}