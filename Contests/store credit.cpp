#include <iostream> 
#include <vector> 
using namespace std; 

int main(void) {
	int T; cin >> T; 
	for (int t = 1; t <= T; t++) {
		int c, n; cin >> c >> n;
		vector <int> items;
		while (n--) {
			int x; cin >> x; 
			items.push_back(x);
		}
		for (int i = 0; i < (int) items.size(); i++) {
			for (int j = i + 1; j < (int) items.size(); j++) {
				if (items[i] + items[j] == c) {
					cout << "Case #" << t << ": " << i + 1 << " " << j + 1 << endl;
					break;
				}
			}
		}
	}
	return 0;
}