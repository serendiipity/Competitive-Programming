#include <iostream>
using namespace std;

int main() {
	int flag=0, sum=0, days; cin >> days; 
	while (days--) {
		int x; cin >> x; 
		sum+=x;
		if (x==0) {
			if (sum%2==0) {
				sum=0;
			}
			else {
				flag++;
				break;
			}
		}
	}
	if (flag)
		cout << "NO" << endl;
	else {
		if (sum%2==0)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}