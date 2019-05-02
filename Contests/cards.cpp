#include <iostream>
#include <vector>
using namespace std; 

int main(void) {
	int n, m; cin >> n; 
	m = n;
	vector <int> cards;
	vector <int> switches;
	for (int i=0; i<n; i++) {
	    switches.push_back(0);
	}
	vector < pair <int, int> > results;
	int sum = 0;
	while (m--) {
		int x; cin >> x;
		sum += x;
		cards.push_back(x);
	}
	sum /= (n/2);
	for(int i=0; i<(int)cards.size(); i++) {
		if (!switches[i]) {
			for(int j=1; j<(int)cards.size(); j++) {
				if (i != j && !switches[j] && (cards[i] + cards[j] == sum)) {
					switches[i]++; switches[j]++;
					results.push_back(pair <int, int>(i+1, j+1));
					break;
				}
			}
		}
	}
	for(int i=0; i<(int)results.size(); i++)
		cout << results[i].first << " " << results[i].second << endl; 
	return 0;
}