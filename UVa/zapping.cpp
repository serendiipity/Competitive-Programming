#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	while (a != -1 && b != -1) { 
		cout << min(abs(b - a), abs(100 - max(a, b) + min(a, b))) << endl;
		cin >> a >> b; 
	}
	return 0;
}