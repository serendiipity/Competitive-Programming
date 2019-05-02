#include <iostream>
#include <map>
#include <string> 
#include <utility> 
#include <queue>
#include <set>
using namespace std; 

int main(void) {
	int n; cin >> n; 
	set <string> names;
	map <string, int> totals;
	map <string, queue <int > > scores;
	int max = 0;
	pair <string, int> winner;
	while (n--) {
		string name; cin >> name; 
		int score; cin >> score;
		if (names.count(name) == 0) {
			names.insert(name);
			totals.insert(make_pair(name, score));
			queue <int> list; 
			list.push(score);
			scores.insert(make_pair(name, list));
		}
		else {
			totals[name]+= score;
			scores[name].push(score);
		}
	}
	map <string, int> :: iterator it;
	it = totals.begin();
	names.clear();
	for (; it != totals.end(); it++) {
		if ((*it).second > max) {
			names.clear();
			max = (*it).second;
			winner = make_pair((*it).first, max);
		}
		else if ((*it).second == max) {
			names.insert((*it).first);
		}
	}
	for(it = totals.begin(); it != totals.end(); it++) {
		(*it).second = 0;
	}
	if (names.size() > 0) {
		set <string> :: iterator it2;
		for (it2 = names.begin(); it2 != names.end(); it2++) {
			int sum = 0;
			while (!(scores[*it2]).empty() && sum != max) {
				sum+=(scores[*it2]).front();
				scores[*it2].pop();
				totals[*it2]++;
			}
		}
	}
	it = totals.begin();
	int min = (*it).second;
	for (; it != totals.end(); it++) {
		if ((*it).second < min) {
			min = (*it).second;
			winner = make_pair((*it).first, min);
		}
	}
	cout << winner.first << endl;
	return 0;
}