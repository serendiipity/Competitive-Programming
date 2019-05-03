#include <iostream>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int count = 0;
	int max; 
	if (n>m)
		max = n;
	else 
		max = m;
	for (int i=0; i<=max; i++)
		for (int j=0; j<=max; j++)
			if ((i * i + j == n) && (j * j + i == m))
				count++;
	cout << count << endl;
	return 0;
}