#include <iostream>
using namespace std; 

int main() {
	int w;
	while (cin >> w) {
		if (w == 0)
			break;
		double d; cin >> d;
		int n; cin >> n; 
		double f; cin >> f; f /= 100;
		double less = f * d;
		double climbed = 0;
		int count = 1;
		do {
			climbed += d; 
			cout << "count is " << count << " and d is " << d << endl;
			cout << "		climbed day is " << climbed << endl;
			if (climbed > w || climbed < 0)
				break;
			d -= less;
			climbed -= n;
			cout << "		climbed night is " << climbed << endl;
			
			if (climbed > w || climbed < 0)
				break;
			count++;
		} while (climbed > 0 && climbed < w);
		if (climbed <= 0)
			cout << "failure ";
		else 
			cout << "success ";
		cout << "on day " << count << endl;
			
	}
	return 0;
}