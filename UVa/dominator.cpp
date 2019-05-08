#include <iostream> 
#include <vector> 
using namespace std; 

int main(void) {
	int T; cin >> T; 
	for (int t = 0; t < T; t++) {
		int N; cin >> N;
		bool matrix[N][N];
		vector <int> dominator (N, -1);
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				bool x; cin >> x; 
				matrix[i][j] = x;
			}
		}
		for (int i = 0; i < N; i++) {
			int count = 0;
			int index = -1;
			for (int j = 0; j < N; j++) {
				if (matrix[j][i]) {
					count++;
					index = j;
				}
			}
			if (count == 1)
				dominator[i] = index;
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (dominator[j] == i || i == 0)
					matrix[i][j] = 1;
				else 
					matrix[i][j] = 0;
			}
		}
		int b = N-1;
		cout << "Case " << t + 1 << ":" << endl;
		cout << "+";
		for (int i = 0; i < b*2 + 1; i++)
			cout << "-";
		cout << "+" << endl;
		for (int i = 0; i < N; i++) {
			cout << "|";
			for (int j = 0; j < N; j++)  {
				cout << (matrix[i][j] || i == j ? "Y" : "N");
				cout << "|";
			}
			cout << endl << "+";
			for (int i = 0; i < b*2 + 1; i++)
				cout << "-";
			cout << "+" << endl;
		}
	}
	
	return 0;
}