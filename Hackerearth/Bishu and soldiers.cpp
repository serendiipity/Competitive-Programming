 // Using binary search

#include <iostream>
#include <vector>
#include <algorithm>
typedef long long int lli;
using namespace std;

int bsearch(vector <lli> soldiers, lli x) {
	lli lower = 0, upper = (int) soldiers.size() - 1, mid;
	while (lower <= upper) {
		mid = (upper + lower) / 2;
		if (x == soldiers[mid])
			return mid + 1;
		else if (x > mid)
			lower = mid + 1;
		else 
			upper = mid - 1;
	}
	return mid + 1;
}

int main(void) {
	vector <lli> results, soldiers, S; 
	lli N, Q; cin >> N; 
	while (N--) {
		lli x; cin >> x;
		soldiers.push_back(x);
		sort(soldiers.begin(), soldiers.end());
	}
	cin >> Q; 
	while (Q--) {
		lli r;
		lli x; cin >> x; 
		r = bsearch(soldiers, x);
		results.push_back(r);			
	}
	for (int j = 0; j < (int) results.size(); j++) {
		int sum = 0;
		for(int i = 0; i < results[j]; i++) {
			sum+=soldiers[i];
		}
		S.push_back(sum);
	}
	for (int i = 0; i < (int) results.size(); i++)
		cout << results[i] << " " << S[i] << endl;
	return 0;
}


