#include <iostream>
using namespace std;

int main() {
	int T, i=0; cin >> T;
	while (T--) {
		int a, b, c; cin >> a >> b >> c;
		cout << "Case " << i+1 << ": ";
		if (a>20 || b>20 || c>20) 
			cout << "bad" << endl;		
		else 
			cout << "good" << endl;
		i++;
	}
	// your code goes here
	return 0;
}