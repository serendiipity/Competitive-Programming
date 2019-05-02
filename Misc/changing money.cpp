#include <iostream>
using namespace std; 

int main(void) {
	int flag = 0, count = 0, m; cin >> m;
	if (m%10 == 0) {
		count += m/10;
		m=0;
	} else if (m>10) {
		count += m/10;
		m-=(m/10)*10;
	}
	if (m != 0) {
		if (m%5 == 0) {
			count += m/5;
			m=0;
		} else if (m>5) {
			m-=5;
			count++;
		} 
		if (m!=0) 
			count += m;
	}
	cout << count << endl;
	return 0;
}