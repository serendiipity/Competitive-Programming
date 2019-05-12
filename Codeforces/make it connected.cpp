#include <iostream>
#include <vector>
using namespace std;
typedef pair <int, int> pii;
typedef vector < vector <int> > vvi;

int main() {
	int v, o; cin >> v >> o;
	vector <pii> offers (v+1);
	vvi adj_list (v+1);
	vector <int> values (v+1);
	for (int i = 0; i < v; i++) {
		int x; cin >> x;
		values[i+1] = x;
	}
	
	return 0;
}