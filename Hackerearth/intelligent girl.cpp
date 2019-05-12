#include <iostream>
#include <string> 
using namespace std;

int even[10001];

void init(int size) {
	for (int i = 0; i <= size; i++) 
		even[i] = -1;
}

int main() {
	string s; cin >> s; 
	int size = (int) s.size() - 1;
	init(size);
	int d = s[size] - '0';
	if (d % 2 == 0)
		even[size] = 1;
	else 
		even[size] = 0;
	for (int i = size - 1; i >= 0; i--) {
		int d = s[i] - '0';
		if (d % 2 == 0)
			even[i] = even[i+1] + 1;
		else 
			even[i] = even[i+1];
	}
	for (int i = 0; i <= size; i++) 
		cout << even[i] << " ";
	cout << endl;
	return 0;
}