#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int cases; cin >> cases;
	vector <int> results;
	int count = 0;
	while (cases != 0) {
		int yes = 0, no = 0;
		while (cases--) {
			int n; cin >> n; 
			if (n != 0)
				yes++;
			else if (n == 0)
				no++;
		}
		results.push_back(yes-no);
		count++;
		yes = no = 0;
		cin >> cases;
	}
	for (int i=0; i<count; i++)
		cout << "Case " << i + 1 << ": " << results[i] << endl;
	return 0;
}