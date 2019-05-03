#include <iostream>
using namespace std; 

int main(void) {
	long long A, B; cin >> A >> B;
	long long x, y, z; cin >> x >> y >> z;
	long long yellow = 0, blue = 0;
	yellow = x*2 + y;
	blue = y + 3*z;
	if (yellow - A <= 0 && blue - B <= 0)
		cout << 0 << endl;
	else if (yellow - A < 0)
		cout << blue - B << endl;
	else if (blue - B < 0 )
		cout << yellow - A << endl;
	else 
		cout << yellow - A + blue - B << endl;
	return 0;
}