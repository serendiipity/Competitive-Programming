#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
typedef vector < pair <int, bool> > vp;

pair <int, int> result;
int money;

bool sort_price(pair <int, bool> & a, pair <int, bool> & b) {
	return a.first < b.first;
}

void binary_search(vp & books, int low, int high, int target) {
	if (low > high)
		return;
	int m = (low + high) / 2;
	if (books[m].first + books[target].first == money) {
		if (result.first == -1) 
			result = make_pair(m, target);
		else if (abs(books[m].first - books[target].first) < abs(books[result.first].first - books[result.second].first)) {
			result.first = m;
			result.second = target;
		}
		books[m].second = true;
		books[target].second = true;
		return;
	} else if (books[m].first + books[target].first > money) {
		high = m - 1;
		binary_search(books, low, high, target);
	} else if (books[m].first + books[target].first < money) {
		low = m + 1;
		binary_search(books, low, high, target);
	}
}

int main () {
	int n;
	while (cin >> n) {
		vp books;
		while (n--) {
			int x; cin >> x;
			books.push_back(make_pair(x, false));
		}
		cin >> money;
		sort(books.begin(), books.end(), sort_price);
		result = make_pair(-1, -1);
		for (int i = 0; i < books.size(); i++) {
			if (!books[i].second)
				binary_search(books, 0, books.size() - 1, i);
		}
		int i = min(result.first, result.second), j = max(result.first, result.second);
		cout << "Peter should buy books whose prices are " << books[i].first << " and " << books[j].first << "." << endl << endl;
	}
	return 0;
}