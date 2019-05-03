#include <iostream> 
#include <string> 
using namespace std; 

int main() {
	int n, a, b; cin >> n >> a >> b; 
	int empty = 0, total = 0;
	string places; cin >> places;
	for (int i=0; i < (int) places.size(); i++) {
		if (places[i] == '.') {
			empty++;
		}
		if (places[i] == '*' || i == places.size() - 1) {
			if (empty != 0) {
				if (empty % 2 == 0) {
					if (empty / 2 <= b) {
						b -= empty / 2;
						total += empty/2;
					} else if (empty / 2 > b) {
						total += b;
						b = 0;
					}
					if (empty / 2 <= a) {
						a -= empty / 2;
						total += empty/2;
					} else if (empty / 2 > a) {
						total += a;
						a = 0;
					}
					empty = 0;
				} else if (empty % 2 != 0) {
					if (b != 0 && b >= a) {
						if (((empty-1) / 2) + 1 <= b) {
							b -= (empty-1) / 2 + 1;
							total += (empty-1) / 2 + 1;
						} else if ((empty-1) / 2 + 1 > b) {
							total += b;
							b = 0;
						}
						if ((empty-1) / 2 <= a) {
							a -= (empty-1) / 2;
							total += (empty-1) / 2;
						} else if (a != 0 && (empty-1) / 2 > a) {
							total += a;
							a = 0;
						} 
					} else if (a != 0) {
						if (((empty-1) / 2) + 1 <= a) {
							a -= (empty-1) / 2 + 1;
							total += (empty-1) / 2 + 1;
						} else if ((empty-1) / 2 + 1 > a) {
							total += a;
							a = 0;
						}
						if ((empty-1) / 2 <= b) {
							b -= (empty-1) / 2;
							total += (empty-1) / 2;
						} else if (b != 0 && (empty-1) / 2 > b) {
							total += b;
							b = 0;
						} 
					}
					empty = 0;
				}
			}
		}
	}
	
	cout << total << endl;
	return 0;
}