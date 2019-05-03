#include <iostream> 
#include <vector> 
#include <string>
using namespace std; 

int main(void) {
	string expression; cin >> expression;
	int size = expression.size(); 
	bool f[size][size], g[size][size];
	for(int i=0; i<size; i++)
		for (int j=0; j<size; j++)
			f[i][j] = true;
	for(int i=0; i<size; i++)
		for (int j=0; j<size; j++)
			g[i][j] = true;
	for (int i=0; i<size; i++) {
		int c = 0;
		for (int j=i; j<size; j++) {
			if (expression[j] == ')')
				c--;
			else 
				c++;
			if (c < 0)
				f[i][j] = false;
			cout << "l = " << i+1 << " r = " << j+1  << " cur = " << c << " boolean " << f[i][j] << endl << endl;
			
		}
	}
	for (int i=0; i<size; i++) {
		int c = 0;
		for (int j=i; j<size; j++) {
			if (expression[j] == '(')
				c--;
			else 
				c++;
			if (c < 0)
				g[i][j] = false;
			cout << "l = " << i+1 << " r = " << j+1  << " cur = " << c << " boolean " << g[i][j] << endl << endl;
		}
	}
	int answer = 0;
	for (int i=0; i<size; i++) {
		for (int j=i; j<size; j++) {
			if (f[i][j] && g[i][j] && (j-i+1) % 2 == 0) {
				answer++;
			//	cout << "hell yeah, at " << i << " " << j << endl;
			}
		}
	}
	cout << answer << endl;
	return 0;
}