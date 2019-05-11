#include <iostream> 
#include <climits> 
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int b, h, w; cin >> b >> h >> w;
		int min = INT_MAX;
		while (h--) {
			int p; cin >> p;
			for (int i = 0; i < w; i++) {
				int av; cin >> av; 
				int cost = p * n;
				if (av >= n) 
					if (cost <= b && n * p < min)
						min = n * p;
			}
		}
		if (min != INT_MAX)
			cout << min << endl;
		else 
			cout << "stay home" << endl;
	}
	return 0;
}