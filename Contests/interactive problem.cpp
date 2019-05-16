#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	while(cin >> n) {	
		cout << "n is " << n << endl;
		bool flag = false; 
		string line;
		int l = 1, r = n; 
		int arr[n+1];
		for (int i = 1; i <= n; i++)
			arr[i] = i;
		int mid;
		while (!flag) {
			if (l == r) {
					cout << "!" <<  arr[l] << endl;
					flag = true;
					break;
			}
			mid = (l + r) / 2; 
			cout << arr[mid] << endl;
			string s; cin >> s;
			if (s == "<") {
				r = mid - 1;
			}
			else if (s == ">=") {
				l = mid;
			}
	
		}
		fflush(stdout);
	}
	return 0;
}