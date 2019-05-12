#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	queue <int> q;
	map <int, int> m;
	if (n % 2 == 0 && k == 1) {
		cout << "YES" << endl;
		cout << n << endl;
		return 0;
	}
	// 2^30 because it is slightly higher than max value of n, which is 10^9 
	for (int i = 0; i <= 30; i++)
		if (n & (1 << i)) {
			if (i > 0)
				q.push(1 << i);
			m[1 << i]++;
		} 
	if (m.size() > k) {
		cout << "NO" << endl;
		return 0;
	}
	int count = m.size();
	while (!q.empty() && count < k) {
		int v = q.front();
		q.pop();
		m[v]--;
		if ((v / 2) > 1) {
			q.push(v / 2);
			q.push(v / 2);
		} 
		m[v / 2] += 2;
		count++;
	}
	if (count < k) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
		for (int i = 0; i < m.size(); i++) {
			for (int j = m[i]; j > 0; j--) 
				cout << i << " ";
		}
	}
	return 0;
}