#include <iostream>
using namespace std; 

int GCD(int a, int b) {
	if (b==0)
		return a;
	else 
		GCD(b, a%b);
}

int main(void) {
	int a, b; cin >> a >> b;
	cout <<  GCD(a,b) << endl;
	return 0;
}