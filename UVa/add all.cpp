#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef priority_queue <int, vector<int>, greater<int>> pqi;

int main() {
	int n; 
	while (cin >> n) {
		if (n == 0)
			break;
		pqi e;
		int x, s = 0;
		for (int i = 0; i < n; i++) {
			cin >> x;
			e.push(x);
		}
		
		int cost = 0;
		
		for (int i = 0; i < n - 1; i++)	{
			int a = e.top(); e.pop();
			int b = e.top(); e.pop();
			e.push(a+b);
			cost += a+b;
		}
		
		cout << cost << endl;
	}
	return 0;
}