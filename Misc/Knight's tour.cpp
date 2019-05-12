#include <iostream>
#include <stack>
#include <vector>
using namespace std;
typedef pair <int, int> pii;
stack <pii> history;
vector <pii> combinations;
int n, m;

void init_combinations() {
	combinations.push_back(make_pair(-1, 2));
	combinations.push_back(make_pair(-1, -2));
	combinations.push_back(make_pair(1, 2));
	combinations.push_back(make_pair(1, -2));
	combinations.push_back(make_pair(-2, 1));
	combinations.push_back(make_pair(2, 1));
	combinations.push_back(make_pair(-2, -1));
	combinations.push_back(make_pair(2, -1));
}

bool mark(int board[n][m], pii x, int count) { // see how you can pass in variable lengths here
	if (count == n * m + 1)
		return true;
	if (count == 2)
		return false;
	for (int c = 0; c < combinations.size(); c++) {
		int i = combinations[c].first;
		int j = combinations[c].second;
		pii p;
		if (board[x.first + i][x.second + j] == 0) {
			board[x.first + i][x.second + j] = count; 
			history.push(x);
			p = make_pair(x.first + i, x.second + j);
			x = p;
			mark(board, x, count + 1); // maybe count++ here
		} 
		p = history.top(); history.pop();
		x.first = p.first; x.second = p.second;
		board[x.first][x.second] = 0;
		mark(board, x, count);
	}
}

int main() {
	cin >> n >> m; 
	int board[n][m];
	int count = 1;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			board[i][j] = 0;
	init_combinations();
	pii x(4, 2);
	board[4][2] = count;
	count ++;
	while (count <= n * m) {
		if (mark(board, x, count))
			for (int i = 0; i < n; i++)  {
				for (int j = 0; j < m; j++)
					cout << board[i][j] << " ";
				cout << endl;
			}
		else 
			cout << "No solution" << endl;
	}
	cout << board[4][2] << endl;
	return 0;
}