#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef vector <int> vi;
typedef vector <vi> vvi;

vi initial;
int pos[8], m;

int valid(int queen, int row) {
	for (int i = 0; i < queen; i++) 
		if (pos[i] == row || abs(queen - i) == abs(pos[i] - row))
			return 0;
	return 1;
}

void place(int queen, int moves) {
	if (queen == 8) {
		if (moves < m)
			m = moves;
		return;
	}
	for (int i = 0; i < 8; i++) {
		if (valid(queen, i)) {
			pos[queen] = i;
			if (initial[queen] == i)
				place(queen + 1, moves);
			else 
				place(queen + 1, moves + 1);
		}
	}
}

int main() {
	int r;
	int count = 1;
	while (cin >> r) {
		m = 100;
		initial.clear();
		initial.push_back(r-1);
		for (int i = 1; i < 8; i++) {
			cin >> r;
			initial.push_back(r-1);
		}
		place(0, 0);
		cout << "Case " << count++ << ": " << m << endl;
		
	}
	
	return 0;
}