#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(void) {
	int n; cin >> n; 
	vector <int> results;
	queue <int> cards;
	for (int i=1; i<=n; i++) {
		cards.push(i);
	}
	while ((int)cards.size() > 1) {
		for (int i=0; i<(int)cards.size(); i++) {
			results.push_back(cards.front());
			cards.pop();
			cards.push(cards.front());
			cards.pop();
		}
	}
	for (auto r: results)
		cout << r << " ";
	cout << endl << cards.front(); 
	return 0;
}