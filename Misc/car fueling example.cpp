#include <iostream>
#include <vector> 
using namespace std; 

int main(void) {
	int position = 0, capacity, destination, n; cin >> capacity >> n;
	vector <int> stops;
	stops.reserve(n+1);
	int count = 0, flag = 0;
	while (n--) {
		int x; cin >> x;
		stops.push_back(x);
	}
	destination = stops[stops.size()-1];
	int i = stops.size()-1;
	while (i>=0 && flag != 1) {
		if (stops[i]-position<=400) {
			position = stops[i];
			i = stops.size()-1;
			if (position == destination)
				break;
			else 
				count++;
		}
		else {
			i--;
		}
	}
	cout << count << endl;
	return 0;
}